#include <bits/stdc++.h>
using namespace std;
int main()
{
   
    int n = 6;
    int arr[n] = {8, 4, 1, 5, 9, 2};
    cout<<"BY - Insertion sort";
    cout <<endl<< "UNSORTED ARRAY" << endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (arr[j] > temp && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    cout <<endl<< "Sorted array by insertion sort" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
cout<<endl<<"By - Bubble sort";
 
cout<<endl<<"Unsorted array"<<endl;
for (int  i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}
for (int i = 0; i < n-1; i++)
{
    int temp;
    for (int j = 0; j < n-i-1; j++)
    {
        if (arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }   
    }   
}
    cout<<endl<<"Sorted array by Bubble sort"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}