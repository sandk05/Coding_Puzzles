#include <bits/stdc++.h>

using namespace std;

string solve(int year){
    // Complete this function
    string date ;
    if(year <= 1917)
    {
        //cout <<(year %4)  <<endl;
        if(year % 4 == 0)
        {
            date = "12.09."+to_string(year);
            return date;
        }else{
            date = "13.09."+to_string(year);
            return date;
        }
    }
    if(year == 1918)
    {
        date = "26.09.1918";
        return date;
    }
    if(year >=1919)
    {
        //cout <<(year%400) <<" "<<(year %4) <<" "<<(year %100) <<endl;
        if((year%400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        {
            date = "12.09."+to_string(year);
            return date;
        }else{
            date = "13.09."+to_string(year);
            return date;
        }
    }
    return "Failed";
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}
