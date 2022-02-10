// Find the key = 8 in the array 12,18,20,42,8,10
// LINEAR SEARCH
#include <bits\stdc++.h>
using namespace std;
int linearsearch(int arr[], int n, int key)
{
   
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter n";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];                  // Time Complwxity for linear search = O(n)
    }
    int key;
    cout<<"Enter key";
    cin >> key;
    cout << linearsearch(arr, n, key);
    return 0;
}
