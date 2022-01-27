// FLOYD'S TRIANGLE
/* FOR n = 5
1     
2 3   
4 5 6 
7 8 9 10
11 12 13 14 15
*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,i,j;
    
    cout<<"Enter the value of n:\n";
    cin>>n;
    int count=1;
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j <=i ; j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    
    return 0;
}
