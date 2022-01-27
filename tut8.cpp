/* jUMPS IN LOOPS*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    for ( int date = 1; date<=30; date++){
  if (date%2==0)
  {
      continue;               /* here when the loops get continue statement the loop will jump to next itration*/
  }
    cout<<"neha will go Out today"<<endl;
        
    }
    
    return 0;
}
  