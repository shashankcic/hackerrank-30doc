#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int T=0;
    cin>>T;
    string str[T];
    for(int i=0;i<T;i++){
        cin>>str[i];
        for(int j=0;j<str[i].length();j+=2)
            cout<<str[i][j];
        cout<<" ";
        for(int j=1;j<str[i].length();j+=2)
            cout<<str[i][j];    
        cout<<endl;
    }
    return 0;
}