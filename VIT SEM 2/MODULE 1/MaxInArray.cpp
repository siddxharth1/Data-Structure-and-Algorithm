#include <iostream>
using namespace std;

int max(int arr[], int n){
    int ans = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>ans){
            ans = arr[i];
        }
    }
    return ans;
} 



int main()
{
    int n = 5;
    int arr[n] = {1,12,32,4,5};
    
    cout<<max(arr,n)<<endl;
}
