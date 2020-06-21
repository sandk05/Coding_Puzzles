#include <bits/stdc++.h>

using namespace std;

int bonAppetit(int n, int k, int b, vector <int> ar) {
    // Complete this function
    int total = 0;
    for(auto i = 0; i<n;i++)
    {
        if(i!=k)
            total += ar[i];
    }
    if(total /2 == b)
        cout <<"Bon Appetit" <<endl;
    return abs(total/2 -b);
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int b;
    cin >> b;
    int result = bonAppetit(n, k, b, ar);
    if(result)
        cout << result << endl;
    return 0;
}
