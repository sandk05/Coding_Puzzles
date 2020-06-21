#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int makepal(string str){
    int count = 0,hack = 0;
    int mid = str.length()/2;
    if(str.length()%2 == 0)
        hack = -1;       
    for(int i = 1;i <= mid;i++){
        count += abs(str[mid - i ] - str[mid + i + hack]); 
    }
    return count;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin >> T;
    while(T){
        T--;
        string S;
        cin >> S;
        cout << makepal(S)<<endl;
    }
    return 0;
}
