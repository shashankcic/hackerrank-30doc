#include <bits/stdc++.h>
#include <vector>
using namespace std;


int counter(int a[],int size,int i, int count, int temp){
    if(a[i]==1)
        temp++;
    else
        temp=0;
    
    i++;
    if(temp>count)
        count=temp;
    
    if(i<size){
        count = counter(a,size,i,count,temp);
    }

    return count;
}

int main()
{
    int n;
    int count=0;
    int tempor=0;
    vector<int> temp;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');


    while(n!=0){
        temp.push_back(n%2);
        n/=2;
    }
    
    int size = temp.size();
    int a[size];

    for(int i=size-1;i>=0;i--){
        a[i]=temp[size-1-i];
    }

    int result=counter(a,size,0,count,tempor);
    cout<<result;
    return 0;
}