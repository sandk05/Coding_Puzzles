#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector <int> ar) {
    // Complete this function
    vector <int> count(101,0);
    int paircount = 0;
    for(int i = 0;i<ar.size();i++)
    {
        //cout <<" ar["<<i<<"] = " <<ar[i] <<endl;
        count[ar[i]]++;
        //cout <<"count[ar[" <<i <<"]] " <<count[ar[i]] <<endl;
        if((count[ar[i]])%2 == 0)
        {
            paircount++;
            //cout <<"paircount " <<paircount <<endl;
        }
    }
    return paircount;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = sockMerchant(n, ar);
    cout << result << endl;
    return 0;
}
