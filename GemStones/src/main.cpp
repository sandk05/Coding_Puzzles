#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
static int array[26] = {0};
static int counter = 0;
int M;
void parseElements(string str){
    int count[26] = {0};
    for(int i =0;i<str.length();i++){
        unsigned char ctemp = str[i];
        count[ctemp - 97] += 1;
        if(count[ctemp - 97] == 1){            
            array[ctemp - 97] += 1;
            if(array[ctemp - 97] == M)
                counter++;
        }
    }
}

int main() {
    int N;
    cin >>N;
    M = N;
    while(N){
        N--;
        string S;
        cin >> S;
        parseElements(S);
    }
    cout<<counter <<endl;
    return 0;
}
