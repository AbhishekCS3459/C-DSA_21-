// lasyana is given the no of visitors at her local theme park on N consesecutive days,
// The no of visitors on the ith day is Vi.A day is record breaking if it satisfies both of the following conditions:
// 1) The no of visistors on the day is strictly larger than the no of visitors on each of the previous days.
// 2) Either it is the last day,or the no of visitors on the day is strictly larger than the no of visitors on the following day.
// Note that very first day could be a record breaking day!
// Find the no of record breaking days.
// Exa- 1,2,0,7,2,0,2,2 - here arr[1],arr[3] are record breaking days
// Brute force: Iterate over all the elements and check if it is record element or not
// Here we have to use time complexity of this opreation is O(n)
// Overall time complexity is O(n2){we cant afford this much time}
// Optimised apporach:
// 1) We need to check if arr[i]>{arr[i-1],arr[i-2].....},
// which is same as arr[i]>max(all the previous elements)
// mx - stores the max till arr[i]
// 2) if arr[i]>arr[i+1] for i+1<n and update the max,mx=max(mx,arr[i])
// We have to validate these two conditions
#include <bits\stdc++.h>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the value of n"<<endl;
  cin >> n;
  // Initialising an array
  int arr[n + 1];
  arr[n] = -1;
// Taking input in array
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  // Validating the condition for the 0th element
  if (n == 1)
  {
    cout << "1" << endl;
    return 0;          // If it is a 0th element then the program stops here after counting it as 1
  }
  // Here we start validating the condition for other elements 
  int ans = 0;
  int mx = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > mx && arr[i] > arr[i + 1])
    {
      ans++;   // here we are updating ans variable
    }
    mx = max(mx, arr[i]);
  }

  cout <<"The count is:"<< ans << endl;

  return 0;
}