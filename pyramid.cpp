/* Number pyramid */
/* 
1                row = 1 to n
1 2            column a) 1 to <=i
1 2 3                  b0 count 1 to <=j
1 2 3 4
1 2 3 4 5
*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i,j,n;
    cin>>n;
    for ( i = 1; i <=n ; i++)
    {
        for ( j = 1; j <=i ; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
