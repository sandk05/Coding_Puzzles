#include <bits/stdc++.h>

using namespace std;

int divisibleSumPairs(int n, int k, vector <int> ar) {
    // Complete this function
    int count =0;
    for(int i = 0; i<n;i++)
    {
        for(int j = i+1; j<n;j++)
        {
            //cout <<"i " <<i <<" j "<<j <<" k " <<k <<"ar["<<i<<"] "<<ar[i] <<" ar["<<j<<"] " <<ar[j] <<" sum "<<ar[i] + ar[j] <<endl;
            if(((ar[i]+ar[j]) % k) == 0)
            {
                //cout <<" -> i " <<i <<" j "<<j <<endl;
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = divisibleSumPairs(n, k, ar);
    cout << result << endl;
    return 0;
}
