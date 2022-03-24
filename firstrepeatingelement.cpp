// Question asked by Amazon and Oracle
// FIRST REPEATING ELEMENT
//{QUESTION}- Given an array arr[] of size N. The task is to find repeating element in the array of integers,
// i.e- an element that occurs more than once and whose index of first occurence is smallest
// Ex-{1,5,3,4,3,5,6} - Output-2, As 5 is appearing twice and its first appearance is at index 2 which is smallest.
//  Idea- check if a element is repeating,we maintain an array idx[], which
//  stores the first occurence (index) of a particular element a[i];
//  Initialise the idx[] with INT MAX
//  Basically we have to return the index of the no who repeats and had smallest index
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cout << "Enter the value of n" << endl;
  cin >> N;
  int arr[N];
  for (int i = 0; i < N; i++)
  {
    cin >> arr[i];
  }
  int minIndx = INT_MAX;
  // idx stores the first occurence(index) of a particular element a[i].
  const int N = 1e6 + 2; // Here const is used to make N a Constant and 1e6+2 means 10 to power 6
  int idx[N];
  // Here we are initalise idx with -1 each element of array
  for (int i = 0; i < N; i++)
  {
    idx[i] = -1;
  }
  // Here we are replacing the -1 initialised in the array to i if idx[arr[i]] = -1  
  int minidx = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    if (idx[a[i]] != -1)
    {
      minidx = min(minidx, idx[a[i]])
    }
    else
    {
      idx[a[i]] = i;
    }
  }
  if (minidx == INT_MAX)
  {
    cout << "-1" << endl;
  }
  else
    cout << minidx + 1 << endl;

  return 0;
} 