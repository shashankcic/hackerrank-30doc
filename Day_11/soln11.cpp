#include <bits/stdc++.h>

using namespace std;

int sum(vector<vector<int>> ar,int res,int i, int j){
    int sum=0;
    for(int a=i;a<i+3;a++){
        for(int b=j;b<j+3;b++){
            if(a==i||a==i+2)
                sum+=ar[a][b];
            else if(a==i+1&&b==j+1)
                sum+=ar[a][b];
        }
    }
    if(sum>res)
        res=sum;
    return res;
}

int main()
{
    int result=-63; //since the least possible sum is -63 as the hourglass can have negative values >= -9 and 7*(-9)=63.
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    for(int i=0; i<4;i++){
        for(int j=0;j<4;j++){
            result = sum(arr,result,i,j);
        }
    }
    cout<<result;

    return 0;
}