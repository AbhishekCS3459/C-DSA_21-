// Octal to deciaml 
// ex- 17- 7*1+1*8
#include<bits\stdc++.h>
using namespace std;
int octaltodecimal(int num){
    int ans=0;
  int x=1;
  int y;
 while (num>0)
 {
      y=num%10;
      ans=ans+x*y;
      x=x*8;
      num=num/10;
 }
 
  return ans;
}
int main(int argc, char const *argv[])
{
    int a;
    cin>>a;
    cout<<octaltodecimal(a);
    return 0;
}
