/* Problem Link - https://codeforces.com/problemset/problem/1629/A */

#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<pair<int,int>> p;
    for(int i=0;i<n;i++){
        p.push_back({a[i], b[i]});
    }
    sort(p.begin(), p.end());
    
    for(int i=0;i<n;i++){
        if(k>=p[i].first){
            k = k + p[i].second;
        }
        else{
            break;
        }
        
    }
    cout<<k<<endl;
}
