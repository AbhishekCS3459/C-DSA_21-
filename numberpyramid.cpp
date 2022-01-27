#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,i,j;
    cout<<"Enter the value of n";
    cin>>n;
    cout<<endl;
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j <=i; j++)
        {
           cout<<i;
        }
        cout<<endl;
    }
    
    return 0;
}
