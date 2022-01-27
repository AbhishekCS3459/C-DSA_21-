/* RHOMBUS PATTERN */
  /*  FOR n = 5
    _ _ _ _ * * * * *            n =5
    _ _ _ * * * * *           ROWS- 1 to n
    _ _ * * * * *             column a) spaces- 1 to n-i
    _ * * * * *                      b) stars 1 to <=n
   * * * * *
*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i,j,n;
    cin>>n;
    for ( i = 1; i <=n ; i++)
    {
        for ( j = 1; j <=n-i ; j++)
        {
            cout<<" ";
        }
        for ( j = 1; j <=n ; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}

