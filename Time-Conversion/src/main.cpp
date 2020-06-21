#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string time;
    cin >> time;
    int slen = time.size();
    string format,hr,nhr;
    int ihr = 0;
    format = time.substr(slen-2, slen);
    hr = time.substr(0,2);
    ihr = stoi(hr);
    if(format == "PM")
        {
        if(ihr!=12)
            {
            ihr+=12;
            ihr%=24;    
        }
        nhr = to_string(ihr);
    }else if (format == "AM")
        {
         if(ihr ==12)
             {   
             nhr = "00";
         }
        else
            {
            nhr = hr;
        }
    }
    time.replace(0,2,nhr);
    time.replace(slen-2,slen," ");
    cout <<time <<endl;    
    return 0;
}
