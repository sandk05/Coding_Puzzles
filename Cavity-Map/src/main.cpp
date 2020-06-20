#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> grid(n);
    for(int grid_i = 0;grid_i < n;grid_i++){
       cin >> grid[grid_i];
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<grid[i].length();j++){
            if((i == 0) || (j == 0) ||(j== (n-1))||(i==(n-1))){
                cout<<grid[i][j];
                continue;
            }
            int temp = grid[i][j];
            if((temp > grid[i-1][j]) && (temp > grid[i][j-1]) && (temp > grid[i][j+1]) && (temp > grid[i+1][j]))
                {
                cout<<"X" ;
            }else{
                cout<<grid[i][j];
            }
        }
        cout <<endl;
    }      
    return 0;
}
