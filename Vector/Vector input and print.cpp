#include <iostream>
#include <vector>
using namespace std;


void print(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector<int> vec1;    // vector of integer type
    int size,value;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>value;
        vec1.push_back(value);
    }
    print(vec1);
}
