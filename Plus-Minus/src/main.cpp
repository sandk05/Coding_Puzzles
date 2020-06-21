#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main(){
    int n;
    double npos = 0,nneg = 0, nzer = 0;
    cin >> n;
    
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
        if(arr[arr_i] > 0){
            npos++;
        }else if (arr[arr_i] < 0){
            nneg++;
        }else{
            nzer++;
        }
    }
    double pos, neg, zero;
    pos = (npos/n);
    neg = (nneg/n);
    zero = (nzer/n);
    cout << fixed;
    cout << setprecision(6);
    cout << pos <<"\n" <<neg <<"\n" <<zero <<endl;
    return 0;
}
