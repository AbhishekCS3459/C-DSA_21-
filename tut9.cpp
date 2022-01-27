/* Suppose neha get pocket money to go outside, we have to break the loop when the pocket money ended
it is given that daily the expenditure was pocketmoney-300 */

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int pocketmoney=3000;
    for ( int date = 0; date<=30; date++)
    {
        if (date%2==0)
        {
            continue;
        }
        cout<<"She will go outside"<<endl;
        pocketmoney= pocketmoney-300;
        if (pocketmoney==0)
        {
            break;
        }
        
    }
    
    return 0;
}
