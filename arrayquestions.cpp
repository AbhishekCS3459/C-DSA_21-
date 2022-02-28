// [Subarray] is the continious part of array
// {1,2,0,7,2,0,2}- if we break from the continious part let say after 1 - {2,0,7,2}.
// {2,0,7,2} become the subarray of the array,
// Number of subarrays of an array with n elements is- ((nC2)+ n)=(n*(n+1))/2,
// [Subsequence]- let the array be {1,2,0,7,2,0,2} and we break {2,7,2}.
// Here {2,7,2} is not continious bt there is an order.
// Numeber of subsequence = 2(to power n), where n it the number of element in initial array.
//Every subarray is subsequence bt vice versa is false.
// PROBLEM-Given an array a[] of size n,Output sum of each subarray of the given array
// Exa-{1,2,2}- total 6 subarrays-{1} {1,2} {1,2,2} {2} {2,2} {2} - Respective sums-[1,3,5,2,4,2]
// Approach: Iterate over all subarrays
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cout<<"Enter the value of n:";
cin>>n;
int arr[n];
for(int i =0; i<n; i++){
cin>>arr[i];
}

for (int i = 0; i < n; i++)
{
    int sum=0;
    for (int j = i; j < n; j++)
    {
        sum=sum+arr[j];
        cout<<"sum="<<sum<<endl;
    }
    
}

return 0;
}