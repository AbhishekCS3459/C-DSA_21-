#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    int N;
   
    int sum=0,Lastdigit;
    for (int i = 0; i < T; i++) {
         cin>>N;
    while(N>0){
     Lastdigit=N%10;
     sum+=Lastdigit;
     N/=10;
    }
    cout<<sum<<endl;
    }
 
}