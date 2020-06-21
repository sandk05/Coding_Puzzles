#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
int steps = 0;
int valleyCount = 0;
for(char &c :s){
    if(c == 'U'){
        ++steps;
    }else{
        --steps;
    }
    //cout<<"Height is " << steps <<endl;
    if((steps == 0) && (c == 'U')){
        valleyCount+=1;
        //cout<<"V " <<valleyCount <<endl;
    }
}
return valleyCount;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
