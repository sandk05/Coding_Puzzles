#include <bits/stdc++.h>

using namespace std;
struct greater
{
    template<class T>
    bool operator()(T const &a, T const &b) const { return a > b; }
};

int main() {
    vector<int> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    sort(arr.begin(), arr.end());
    //cout<<arr[0] <<" "<<arr[1] <<" "<<arr[2] <<" "<<arr[3] <<" "<<arr[4] <<endl;
    uint64_t smallest = (uint64_t)arr[0]+(uint64_t)arr[1]+(uint64_t)arr[2]+(uint64_t)arr[3];
    uint64_t largest  = (uint64_t)arr[1]+(uint64_t)arr[2]+(uint64_t)arr[3]+(uint64_t)arr[4];
    cout <<smallest <<" "<<largest <<endl;
    return 0;
}
