/* Inverted Pyramid after 180 degree rotation */
/* For n = 5
    *
   **
  ***
 ****
*****
*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i,j,n;
    cin>>n;
    for ( i = 1; i <=n ; i++)
    {
        for ( j = 1; j <=n; j++)
        {
            if (j<=n-i)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
            
        }
        cout<<endl;
    }
    
    return 0;
}

