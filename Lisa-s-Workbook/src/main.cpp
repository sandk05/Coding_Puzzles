#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void print_vector(vector <int> arr)
    {
    for(int i =0 ;i<arr.size();i++)
        {
        cout <<arr[i] <<" -- ";
    }
    cout<<endl;
}
bool isSpecial(int low, int high, int index)
    {
    if((index >= low) && (index <=high)){
        //cout <<"low " <<low <<" high " <<high <<" index " <<index <<" True "<<endl; 
        return true;
    }
    //cout <<"low " <<low <<" high " <<high <<" index " <<index <<" False "<<endl;
    return false; 
}

int main() {
    int num_chapters = 0, num_proppage = 0;
    cin >>num_chapters >> num_proppage;
    int temp = 0;
    int count = 0;
    int j;
    vector <int> biggestprob;
    for(int i = 0; i<num_chapters;i++){
        int pages;
        int lpage;
        cin >>temp;
        pages = temp / num_proppage;
        lpage = temp%num_proppage;
        for(j = 0; j < pages;j++){
            biggestprob.push_back((j+1) * num_proppage);
         
        }
        if(lpage != 0)
            {
            biggestprob.push_back((j*num_proppage) + lpage);
        }    
    }
    //print_vector(biggestprob);
    for(int i = 0;i<biggestprob.size();i++){
        int lower;
        if(biggestprob[i] %num_proppage == 0){
            lower = biggestprob[i] - num_proppage;
        }else{
            lower = (biggestprob[i] - (biggestprob[i] % num_proppage));
        }
        if(isSpecial(lower+1,biggestprob[i], i+1)){
            count++;
        }
    }
    cout <<count <<endl;
    return 0;
}
