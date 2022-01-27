// ZIG-ZAG PATTERN 
// FOR n = 9
/*   *     *                   HERE FOR ROWS- 1 TO 3
    *  *  *  *                       COLUMN- IF (i+j)%4=0 or if r=2 & j%4=0 then print stars 
   *    *     *
*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i ,j,n;
    cin>>n;
    for ( i = 1; i <=3 ; i++)
    {
        for ( j = 1; j <=n; j++)
        {
            if ((i+j)%4==0 || (i==2 && j%4==0))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    
    
    return 0;
}
