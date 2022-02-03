// CONVERT BINNARY TO DECIMAL USING FUNCTION
// 45 = 1*32 + 0*16+ 1*8+ 1*4 + 0*2+1*1
#include<iostream>
using namespace std;
int binnarytodecimal(int num){
    int ans=0;
    int y,x=1;
    while (num>0)
    {
        y=num%10;
        ans=ans+x*y;
        x=x*2;
        num=num/10;
    }
    return ans;
    
}
int main(int argc, char const *argv[])
{
    int a;
    cin>>a;
    cout<<binnarytodecimal(a);
    return 0;
}
