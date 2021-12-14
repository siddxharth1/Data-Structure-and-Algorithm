#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){           // hum first(0th) element se start nhi karenge
        int current = arr[i];         // current first number nhi hoga
        int j = i-1;
        while(arr[j]>current && j>=0){ // current wale se usko pahle wale se compare karenge
            arr[j+1] = arr[j];       // if yes we will move it by one position
            j--;
        }
        arr[j+1]=current;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    
    
}




