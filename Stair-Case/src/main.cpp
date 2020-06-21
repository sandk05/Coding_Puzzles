#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    int j = 0,k = 0;
    for(int i = 0; i < n ;i++)
        {
        while(j< n-1-i)
            {
            cout<<" ";
            j++;
        }
        while(k < n - j)
            {
            k++;
            cout<<"#";
        }
        k = 0;
        j =0;
        cout <<endl;
    }
    
    return 0;
}
