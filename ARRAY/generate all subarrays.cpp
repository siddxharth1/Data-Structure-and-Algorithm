#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  for(int i=0;i<n;i++){
      for(int j=i;j<n;j++){
          for(int z=i;z<=j;z++){
              cout<<arr[z];
          }
          cout<<endl;
          }
      }
  }
    
