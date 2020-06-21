#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    unsigned long long applecount = 0, orangecount = 0;
    long long requiredAB  = 0,requiredAE = 0;
    requiredAB = s - a;
    requiredAE = t - a;
    long long requiredOB = 0,requiredOE = 0;
    requiredOB = b - t;
    requiredOE = b - s; 
    //cout <<"requiredAB " << requiredAB << " requiredAE " << requiredAE << " requiredOB " << requiredOB << " requiredOE " <<requiredOE <<endl;
    vector<int> apple(m);
    for(int apple_i = 0;apple_i < m;apple_i++){
       cin >> apple[apple_i];
        if(apple[apple_i] > 0)
        {
            if((apple[apple_i] >= requiredAB) && (apple[apple_i] <= requiredAE))
                applecount++;
        }
    }
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++){
       cin >> orange[orange_i];
        if(orange[orange_i]<0)
        {
            if ((abs(orange[orange_i]) >= requiredOB ) && (abs(orange[orange_i]) <= requiredOE))
                orangecount++;
        }
    }
    cout <<applecount <<endl <<orangecount <<endl;
    return 0;
}
