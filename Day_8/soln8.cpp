#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map <string, int> phonebook;
    int n;
    string name;
    int phoneNumber;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>name>>phoneNumber;
        phonebook.insert(pair<string,int>(name,phoneNumber));
    }
    while (cin>>name){
        auto it=phonebook.find(name);
        if(it==phonebook.end()){
            cout<<"Not found"<<endl;
        } else {
            cout<<name<<"="<<it->second<<endl;
        }
    }
    return 0;
}