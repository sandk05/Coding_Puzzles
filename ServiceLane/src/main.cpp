#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int t;
    int size;
    cin >> n >> t;
    vector<int> width(n);
    for(int width_i = 0;width_i < n;width_i++){
       cin >> width[width_i];
    }
    for(int a0 = 0; a0 < t; a0++){
        int i;
        int j;
        cin >> i >> j;
        int checkmax;
        size = width[i];
        for(checkmax = i;checkmax<=j;checkmax++)
            {
             if(size > width[checkmax])
                 {
                 size = width[checkmax];
             }
            }
    cout<<size <<endl;
    }
    return 0;
}
