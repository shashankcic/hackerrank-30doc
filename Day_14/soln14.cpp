#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
    
	// Add your code here
    Difference(vector<int> a){
        elements=a;
    }
    
    void computeDifference(){
        int max=elements[0],min=elements[0];
        int size=elements.size();
        for(int i=0;i<size;i++){
            if(elements[i]>max)
                max=elements[i];
            else if(elements[i]<min)
                min=elements[i];
        }
        if(max-min<0)
            maximumDifference=(-1)*(max-min);
        else
            maximumDifference=max-min;
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}