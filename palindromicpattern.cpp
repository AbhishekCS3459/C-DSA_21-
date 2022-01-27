// PALINDROMIC PATTERN 
// FOR n = 5
/*        1
        2 1 2                  Row- 1 to n
      3 2 1 2 3               column- a) space 1 to n-i [ here n is fixed which is 5 ]
    4 3 2 1 2 3 4                     b) count decreasing from n-i to n [ here n is fixed which is 5 ]- print- k--
  5 4 3 2 1 2 3 4 5                   c) count increasing from n to n+i-1[ where n vary in each row]- print- k++
  */
 #include<iostream>
 using namespace std;
 int main(int argc, char const *argv[])
 {
   int i,j,n;
   
   cin>>n;
   for ( i = 1; i <=n ; i++)
   {
     for ( j = 1; j <=n-i;j++)
     {
       cout<<"  ";
     }
     int k = i;
     for ( ; j <=n; j++)
     {
       cout<<k--<<" ";
     }
     k=2;
     for ( ; j <=n+i-1; j++)
     {
       cout<<k++<<" ";
     }
     cout<<endl;
     
   }
   
   return 0;
 }
 
