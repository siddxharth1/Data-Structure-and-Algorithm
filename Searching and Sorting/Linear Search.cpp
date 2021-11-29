
#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int x)
{
    //Write your code here
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n, x, a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> x;
    if (linearSearch(a, n, x) != -1)
    {
        cout << linearSearch(a, n, x);
    }
    else
    {
        cout << "Not found";
    }

    return 0;
}
