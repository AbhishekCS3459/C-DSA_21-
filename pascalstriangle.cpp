/* Print this triangle */
/* 1
   1 1 
   1 2 1
   1 3 3 1
   1 4 6 4 1
*/
//Here the terms are binomial cofficient i.e 0C0=1,1C0=1,1c1=1,2C0=1,2C1=2,2C2=1
#include <iostream>
using namespace std;
int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return (num * (factorial(num - 1)));
    }
}
int main(int argc, char const *argv[])
{
    int i, j;
    int n;
    cin>>n;
    
   for ( i = 0; i <=n ; i++)
    {
        for ( j = 0; j <=i ; j++)
        {
            cout<< factorial(i) / (factorial(i - j) * (factorial(j)))<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
