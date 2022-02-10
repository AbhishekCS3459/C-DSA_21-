#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int size=5;
    int minIndex,temp;
    int arr[] = {45, 78, 42, 12, 112};
    cout<<"UnSorted array:"<<endl;
    for (int i = 0; i < size; i++)
        cout << arr[i]<<endl;
    for (int i = 0; i < size-1; i++)
    {
        minIndex=i;          // As Initially the minimum value we had considered is i
        for (int j = i+1; j < size; j++)
        {
            if (arr[minIndex]>arr[j])
            {
                minIndex=j;
            }
            
        }
        temp=arr[minIndex];
        arr[minIndex]=arr[i] ;         // Here we had taken arr[i] inspite of arr[j] as it is considered as initial minimum 
        arr[i]=temp;
    }
    cout<<"sorted array:"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
