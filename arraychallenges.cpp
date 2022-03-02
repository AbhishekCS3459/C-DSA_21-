// Given an array a[] of size n. For every i from 0 to n-1 output max(a[0],a[1],......a[i])
// Ex- for arr[5]={1,0,5,4,6,8} max till i=1 is 1,till i=2 is 0, till i = 3 is 5 till 5 is 8
// Approach- Make a variable and give it value such that it will store max upto ith element
// 1) keep a variable mx which stores the maximum till ith element 
// 2)iterate over the array and update
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
int n;
cin>>n;
int arr[n];
cout<<"Enter the elements of array"<<endl;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
int mx=INT_MIN;
int i;
cout<<"Enter the value upto which you want max"<<endl;
cin>>i;
for (int k = 0; k <i; k++)
{
    mx=max(mx,arr[k]);
}
cout<<"Max till i is "<<endl;
cout<<mx;

    return 0;
}
