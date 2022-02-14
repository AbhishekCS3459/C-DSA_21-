// Bubble sort in C++
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n=7;
    int temp;
    int arr[7]={6,5,4,2,3,1,7};
    cout<<"Unsorted array"<<endl;
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j <n-i-1; j++)       // Here we have used n-i-1 as there will be two sorted array at last
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];      // here we used j to compare with diffrent array in row
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }
    cout<<"Sorted array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    
    return 0;
}
