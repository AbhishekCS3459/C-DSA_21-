// CONVERT BINNARY TO DECIMAL USING FUNCTION
// 45 = 1*32 + 0*16+ 1*8+ 1*4 + 0*2+1*1
#include<bits\stdc++.h>
using namespace std;
int binnarytodecimal(int num){          // Making a function 
    int ans=0;   // declaring a base value
    int x=1,y;           // initilisating x=1 so that it will start multiply by 2
    while (num>0)           // starting loop till num>0
    {
      y=num%10;            // declaring a vairable y for getting last digit . ex=11%10=  1
      ans=ans+x*y;          
      x=x*2;
      num=num/10;
    }
    return ans;
}
int main(){
    int num;       
    cin>>num;
    cout<<binnarytodecimal(num);
}
