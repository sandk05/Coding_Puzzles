#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
string removeSpaces(string input)
{
  input.erase(std::remove(input.begin(),input.end(),' '),input.end());
  return input;
}

int main(){
    string s,ns;
    vector <string> vs;
    cin >> s;
    ns = removeSpaces(s);
    int length = ns.length();
    int row    = floor(sqrt(length));
    int col    = ceil (sqrt(length));
    if(row * col < length)
        row+=1;
    if(row * (col-1) >= length)
        col-=1;
    
    for (unsigned i = 0; i < ns.length(); i += col) 
    {
        vs.push_back(ns.substr(i,col));
    }
    unsigned r = 0,c = 0;
    while(c < col)
    {
        for(r = 0; r < row; r++)
        {          
            if(vs[r][c]!='\0')
            {       
                    //cout<<"r " <<r <<" c "<<c <<" ";
                    cout<<vs[r][c];
            }
        }
        cout<<" ";
        c++;
    }
    return 0;
}
