#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    int inclass = 0;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        vector<int> a(n);
        for(int a_i = 0;a_i < n;a_i++){
           cin >> a[a_i];
            if(a[a_i]<=0)
                {
                inclass++;
            }
        }
        if(inclass >= k)
            cout <<"NO" <<endl;
        else
            cout <<"YES" <<endl;
        inclass = 0;
    }
    return 0;
}
