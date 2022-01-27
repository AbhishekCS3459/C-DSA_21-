/* Inverted Pattern */
/* for n = 5 */
/*
1 2 3 4 5                       ROW = 1 to n
1 2 3 4                         coulumn = n+1-i
1 2 3                           elements = Equal to the column number
1 2
1
*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i,j,n;
    cin>>n;
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j <=n+1-i ; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
