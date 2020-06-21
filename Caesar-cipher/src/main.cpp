#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    k = k%26;
    for(int i = 0;i<n;i++)
        {
        unsigned char ctemp = s[i];
        //cout <<"ctemp " <<ctemp;
        if((65 <= ctemp) && (ctemp <= 90))
            {
            ctemp = ctemp + k;
            if((ctemp >90))
                ctemp = ctemp-26;
        }
        if(((97 <=ctemp)&&(ctemp<=122)))
            {
            ctemp = ctemp + k;
            if(ctemp > 122)
                ctemp = ctemp-26;
        }
        //cout<<"  " <<ctemp <<endl;
        cout <<ctemp;
    }
    cout<<endl;
    return 0;
}
