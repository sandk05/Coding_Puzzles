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
        int n;
        int c;
        int m;
        int num_chocolates;
        int num_wrappers;
        int temp;
        cin >> n >> c >> m;
        num_chocolates = n/c;
        num_wrappers = num_chocolates;
        while(num_wrappers/m != 0)
            {
            num_chocolates += num_wrappers/m;
            temp = num_wrappers/m;
            num_wrappers = num_wrappers%m;
            num_wrappers += temp;
            temp = 0;
        }
        cout <<num_chocolates <<endl;
    }
    return 0;
}
