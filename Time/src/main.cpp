#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void towords(int hour, int min){
    if((min > 59) ||(hour >12))
        return;
    const string kSpecialCases[] = {"ten", "eleven", "twelve", "thirteen", "forteen", "quarter", "sixteen",
                                    "seventeen", "eighteen", "nineteen"};
    const string kOnesPlaces[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string s_minute = " past ",s_hour;
    bool isto = false;
    string mult[2] = {"","s"};
    
    if(min == 0){
    if(10 <= min && min <= 19)
        s_hour = kSpecialCases[hour-10];
    if(min < 10)
        s_hour = kOnesPlaces[hour -1];
    cout <<s_hour <<" o' clock" <<endl;
    }else{
        if(min == 30)
            s_minute = "half past ";
        if(min > 30)
            {
            min = 60 - min;
            s_minute = " to ";
            hour += 1;
            }
        if(min == 20)
            s_minute = "twenty minutes" + s_minute ;
        if(min == 15)
            s_minute = "quarter" +s_minute;
        if(10 <= min && min <= 19 && min != 15)
            s_minute = kSpecialCases[min-10] +" minutes"+ s_minute;
        if(min < 10){
            if(min!=1)
                s_minute = kOnesPlaces[min -1] +" minute" +mult[1]+ s_minute;
            else
                s_minute = kOnesPlaces[min -1] +" minute" +mult[0]+ s_minute;
        }
        if(min > 20 && min <= 29)
            s_minute = "twenty " + kOnesPlaces[(min%10) -1] +" minutes" + s_minute;
        if(10 <= hour && hour <= 19)
            s_minute =s_minute +kSpecialCases[hour-10];
        if(hour < 10)
            s_minute =s_minute + kOnesPlaces[hour -1];
        
        
        cout <<s_minute <<endl;    
    }      
}

int main(){
    
    int h;
    cin >> h;
    int m;
    cin >> m;
    towords(h,m);
        
    return 0;
}
