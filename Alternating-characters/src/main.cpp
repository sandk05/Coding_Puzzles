#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int findCount(string str){
    int count = 0;
    for(int i = 0;i<str.length() - 1;i++){
        for(int j = i+1;j<str.length();j++){
            if(str[i] != str[j]){
                break;
            }else{
                count++;
            }
            i = j;
        }
    }
    return count;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin >>T;
    while(T){
        T--;
        string S;
        cin >>S;
        cout<<findCount(S) <<endl;;
    }        
    return 0;
}
