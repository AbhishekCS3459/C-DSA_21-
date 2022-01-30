 #include<iostream>
 using namespace std;
 int main(int argc, char const *argv[])
 {
     int n1,n2;
     cin>>n1>>n2;
     int fact1 =1;
     for (int i = 1; i <= n1; i++)
     {
         fact1 = fact1*i;
     }
     int fact2 =1;
         for (int i = 1; i <= n2; i++)
     {
         fact2 = fact2*i;
     }
     cout<<fact1<<endl<<fact2;
     return 0;
 }
 