#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 100
int multiply(int mul, int res[],int size){
    int carry  = 0;
    for(int i = 0;i<size;i++){
        int prod = res[i] * mul + carry;
        carry = prod/10;
        res[i] = prod%10;
    }
    while(carry){
        res[size] = carry %10;
        carry = carry/10;
        size++;
    }
    return size;
}
void factorial(int num){
    int arr[MAX];
    arr[0] = 1;
    int arr_size = 1;
    for(int x = 2; x<=num;x++){
        arr_size = multiply(x,arr,arr_size);
    }
    for(int x = arr_size -1 ;x>=0;x--){
        cout <<arr[x] ;        
    }
    cout <<endl;
}

int main(){
    int n;
    cin >> n;
    factorial(n);
    return 0;
}
