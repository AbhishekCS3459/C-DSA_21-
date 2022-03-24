#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,column;
    cout<<"Enter the values of row and column:"<<endl;
    cin>>row>>column;
    int arr[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cout<<"printed array:"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}