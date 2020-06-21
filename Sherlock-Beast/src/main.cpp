#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t,flag = 0;
    cin >> t;
    int num_3 =0, num_5 = 0;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        
        
            for (int i = 0; i<=(n/5);i++)
                {
                if((n-(5*i))%3 == 0)
                    {
                    num_3 = i*5;
                    num_5 = n -(i*5);
                    for(int j = 0;j<num_5;j++)
                        {
                        cout <<5;
                    }
                    for(int j = 0;j<num_3;j++)
                        {
                        cout <<3;                      
                    }
                    cout <<endl;
                    flag = 0;
                    break;
                }
                else
                    {
                    flag = -1;
                }
            }
        
		if(flag == -1)
            {
			for(int i = 0; i<=(n/3);i++)
				{
					if((n-(3*i))%5 == 0)
					{
					num_5 = i*3;
					num_3 = n-(i*3);
					for(int j = 0;j<num_5;j++)
						{
						cout <<5;
					}
					for(int j = 0;j<num_3;j++)
						{
						cout <<3;
					}
					cout <<endl;
                    flag = 0;
                    break;
				}
            else
                {
                flag = -1;
            }
        }
		}
    if(flag == -1)
        cout <<-1 <<endl;
    }
    return 0;
}