// NUMBER PATTERN IN C++
// FOR n =5
/*     ____1           ROW- 1 to <=n
       ___1 2          column- a) sapce- n-i
       __1 2 3                  b) count- 1 to j
       _1 2 3 4                  
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
        for ( j = 1; j <=n-i; j++)
        {
            cout<<" ";
        }
        for ( j = 1; j <=i ; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}

