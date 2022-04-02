#include<bits/stdc++.h>
using namespace std;
int main(){
int row,column;
cout<<"Enter the value of row and column:"<<endl;
int arr[row][column];
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < column; j++)
    {
          cin>>arr[i][j];
    }
    
}
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < column; j++)
    {
        cout<<arr[i][j];

    }
cout<<endl;    
}

// Here we start traversing the array
for (int i = 0; i < row; i++)
{
    for (int j = i; j <  column; j++)
    {
        int temp = arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;
    }
    
}
cout<<"The array  is :"<<endl;
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < column; j++)
    {
        cout<<arr[i][j]<<endl;
    }
    cout<<endl;
}
// Here we are traversing the array of the upper element 
for (int i = 0; i < row; i++)
{
    for (int j = i; j <column; j++)
    {
      int temp=arr[i][j];
      arr[i][j]=arr[j][i];
      arr[j]
    }
}






    return 0;
}