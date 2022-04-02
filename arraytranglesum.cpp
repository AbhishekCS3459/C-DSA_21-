#include<bits/stdc++.h>
using namespace std;
int main(){
int row,column ;
cout<<"Enter the value of row and column"<<endl;
cin>>row>>column;
int arr[row][column];
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < column; j++)
    {
        cin>>arr[i][j];
    }
    
}
cout<<"The array is : "<<endl;
for (int i = 0; i <  row; i++)
{
    for (int j = 0; j < column; j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"Lower half"<<endl;
for (int i = 0; i < row; i++)
{
    for (int j = 0; j <=i; j++)
    {
   cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
int sum=0;
cout<<"The Lower Sum is :"<<endl;
for (int i = 0; i < row; i++)
{
    for (int j = 0; j <= i; j++)
    {
        sum=sum+arr[i][j];
    }
    
}
cout<<sum<<endl;
cout<<" The Upper part is :"<<endl;
for (int i = 0; i < row; i++)
{
    /* code */
}


    return 0;
}