#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(int n, vector <int> ar) {
    // Complete this function
    int typecount[6] = {0};
    int largest = INT_MIN;
    int birdtype = 0;
    for(int i = 0;i <ar.size();i++)
    {
        typecount[ar[i]] += 1;     
    }
    for(int i = 5;i>0;i--)
    {
        //cout <<" i "<<i<<" typecount "<<typecount[i] <<" largest "<<largest <<endl;
        if((typecount[i] >= largest)) 
        {
            largest = typecount[i];
            birdtype = i;
        }
    }
    return birdtype;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}
