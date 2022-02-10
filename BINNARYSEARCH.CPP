#include<bits\stdc++.h>
using namespace std;
int binnarysearch(int arr[],int n,int key){
    int s=0,e=n;
    while (s<=e)
    {
        int midterm=(s+e)/2;
        if (arr[midterm]==key)
        {
            return midterm;
        }
        else if(arr[midterm]<key)
        {
            s=midterm+1;
        }
        else{
        e=midterm-1;
        }
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {                           // Here in binnary search after each itration remaining length 
                             // of array is n/(2)power(k) where k is no of itration
        cin>>arr[i];        // suppose after k itration the remain  array will be 1 so total time is
                             // n/(2)*k = 1, so log2(n)= log2(2*k) = k = log2(n)
                             // TIME COMPLEXITY FOR BINNARY SEARCH = O(log2(n)) 
    }
    int key;
    cin>>key;
cout<<binnarysearch(arr,n,key);    
    return 0;
}

