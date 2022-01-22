#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> nvec;
    for(int i=0;i<n;i++){
        int size,value;
        cin>>size;
        vector<int> ivec;
        for(int j=0;j<size;j++){
            cin>>value;
            ivec.push_back(value);
        }
        nvec.push_back(ivec);
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<nvec[i].size();j++){
            cout<<nvec[i][j]<<" ";
        }
        cout<<endl;
    }   
}
/*
2
3
1 2 3
4
1 2 3 4
1 2 3 
1 2 3 4 
*/
