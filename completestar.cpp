// COMPLETE STAR PATTERN IN C++
//  FOR n = 8
/*          *                         ROW- 1 TO i
          * * *                      column - a) spaces 1 to n-i
        * * * * *                             b) stars- n-i to n-i+1
      * * * * * * *                   
      * * * * * * * 
        * * * * * 
          * * *
            *
*/ 
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i,j,n;
    cin>>n;
    for ( i = 1; i <=n ; i++)
    {
        for ( j = 1; j <=n-i; j++)
        {
            cout<<" ";
        }
        for (  ; j <=n+i-1 ; j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
    for ( i = n; i >=1 ; i--)
    {
        for ( j = 1; j <=n-i; j++)
        {
            cout<<" ";
        }
        for (  ; j <=n+i-1 ; j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
     
    return 0;
}
