/* print all the numbers which are not divisible 3 from 1 to 100 */
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i;
    for ( i = 1; i <=100; i++)
    {
        if (i%3==0)
        {
            continue;
        }
        
        cout<<i<<endl;

    }
    
    return 0;
}
