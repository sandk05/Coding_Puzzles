#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int m;
    cin >> n >> m;
    int max = 0;
    int num = 0;
    vector<string> topic(n);
    for(int topic_i = 0;topic_i < n;topic_i++){
       cin >> topic[topic_i];
    }
    int count = 0;
    for(int per1 = 0;per1 < n-1;per1++){
        for(int per2 = per1;per2 <n;per2++){
            for(int top = 0;top <=n;top++){
                if((topic[per1][top] == '1') || (topic[per2][top] == '1')){                 
                    count++;
                }
            }
            if(count>max)
                {
                max = count;
                num = 1;
            }
            else if(max == count)
                {
                num++;
            }
            count = 0;
            }
    }
    cout<<max <<endl<<num<<endl;
    return 0;
}
