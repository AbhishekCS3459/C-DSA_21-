


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int minIndex,temp;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element"<<i<<":"<<endl;
        cin>>arr[i];}
    for(int i=0;i<n-1;i++){
        minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[minIndex]>arr[j])
                minIndex=j;
        }
        temp=arr[minIndex];
        arr[minIndex]=arr[i];
        arr[i]=temp;
    }
cout<<"Unsorted array:"<<endl;
for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
return 0;
}
