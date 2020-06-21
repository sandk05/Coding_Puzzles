#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    int count = 0;
    int digit = 0;
    int num = 0;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        num = n;
        while(num>0)
            {
            digit = num%10;
            if(digit){
                if(n%digit == 0){
                    count++;         
                }
            }
            num=num/10;
        }
        cout << count <<endl;
        count = 0;
    }
    return 0;
}
