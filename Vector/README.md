# Vectors
```cpp
#include <vector>
```

- Can be used to make arrays with no fixed size.

```cpp
vector<int> vec1;    // vector of integer type
int size,value;
cin>>size;
for(int i=0;i<n;i++){
  cin>>value;
  vec1.push_back(value);
}
```

Printing vector

```cpp
void print(vector<int> &v){
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
```
