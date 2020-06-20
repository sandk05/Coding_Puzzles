#include <bits/stdc++.h>

using namespace std;
int gcd(int a, int b)
{
    if (b==0)
       return a;    
    return gcd(b, a%b);
}
int getTotalX(vector <int> a, vector <int> b) {
    int LCM = a[0];
    int GCD = b[0];
    for(int i = 1; i<a.size();i++)
    {
        LCM = (a[i]*LCM)/(gcd(a[i],LCM));
    }
    for(int i = 1; i<b.size();i++)
    {
        GCD = gcd(b[i],GCD);
    }
    // Complete this function
    //cout <<"LCM " <<LCM <<" GCD "<<GCD <<endl;
    int loopcount = GCD/LCM;
    int value = 0;
    for(int i = 1; i<=loopcount;i++)
    {
        if((GCD%(LCM*i)) == 0)
        {
            value++;
        }
    }
    //cout <<value <<endl;
    return value;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}
