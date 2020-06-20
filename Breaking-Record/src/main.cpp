#include <bits/stdc++.h>

using namespace std;

vector < int > getRecord(vector < int > s){
    // Complete this function
    int highest = INT_MIN, lowest = INT_MAX, countHighest = 0, countLowest = 0;
    vector <int> v;
    for(int i = 0; i<s.size();i++)
    {
        //cout <<"s[i] " <<s[i] <<" highest " <<highest <<" lowest " <<lowest <<endl;
        if(s[i] < lowest){
            countLowest++;
            lowest = s[i];
        }
        if(s[i] > highest){
            countHighest++;
            highest = s[i];
        }
    }
    //cout <<"countHighest " <<countHighest <<" countLowest " <<countLowest <<endl;
    v.push_back(countHighest - 1);
    v.push_back(countLowest - 1);
    return v;
    
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    vector < int > result = getRecord(s);
    string separator = "", delimiter = " ";
    for(auto val: result) {
        cout<<separator<<val;
        separator = delimiter;
    }
    cout<<endl;
    return 0;
}
