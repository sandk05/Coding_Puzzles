#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool pangram(string str)
    {
    int count[26] = {0};
    int cnt =26;
    for(int i = 0;i<str.length();i++){
        unsigned char ctemp = str[i];
        if((65 <= ctemp) && (ctemp <= 90)){
            count[ctemp - 65] += 1;
            if(count[ctemp - 65] == 1)
                cnt--;
        }
        if((97 <=ctemp)&&(ctemp<=122)){
            count[ctemp - 97] += 1;
            if(count[ctemp - 97] == 1)
                cnt--;
        }
    }
    if(!cnt)
        return true;
    else
        return false;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string S;
    getline(cin,S);
    if(pangram(S))
        cout <<"pangram"<<endl;
    else
        cout <<"not pangram"<<endl;
    return 0;
}
