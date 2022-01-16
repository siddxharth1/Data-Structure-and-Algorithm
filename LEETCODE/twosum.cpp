#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(x == arr[i] + arr[j]){
                int answer[2];
                answer[0]=i;
                answer[1]=j;
                cout<<answer[0]<<" "<<answer[1]<<endl;
                break;
            }
        }
    }
    
}
