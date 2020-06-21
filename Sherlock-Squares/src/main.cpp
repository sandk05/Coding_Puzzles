#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long int cases;
    long double low, high;
    long double sqrt_low, sqrt_high;
    int psquare = 0;
    cin >>cases;
    
    for(int i = 0;i<cases ;i++){
        cin >>low >>high;
        sqrt_low = sqrt(low);
        sqrt_high = sqrt(high);
        cout << floor(sqrt_high) - ceil(sqrt_low) + 1 <<endl;       
    }
    return 0;
}
