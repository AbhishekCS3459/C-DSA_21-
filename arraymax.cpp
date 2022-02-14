// WAP to find max and min no inputed in array
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxNo = INT_MIN;   // here we had taken any value just to start the loop 
    int minNo = INT_MAX;
    for (int i = 0; i < n; i++)
    {
      /*  if (arr[i] > maxNo)
        {
            maxNo = arr[i];
        }*/
        maxNo = max(maxNo,arr[i]);    // to find the max number among the two
       /* if (arr[i] < minNo)
        {
            minNo = arr[i];
        }
        */
       minNo = min(minNo,arr[i]);  //To find min number among the two
    }
    cout<<"MaxNo = "<<maxNo<<endl;
    cout<<"MinNo = "<<minNo<<endl;
 
    return 0;
}
