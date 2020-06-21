#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int b;
        int w;
        cin >> b >> w;
        int x;
        int y;
        int z;
        cin >> x >> y >> z;
        unsigned long min_b = min(x,y+z);
        unsigned long min_w = min(y,x+z);
        cout <<(b*min_b)+(w*min_w) <<endl;
    }
    return 0;
}
