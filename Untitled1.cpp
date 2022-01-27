#include<simplecpp>

main_program{
//Write your code here
turtleSim();
cout << "How many sides";
int nsides; cin>>nsides;
repeat(nsides){
forward(100);
right(360.0/nsides);
}
wait(10);
}
