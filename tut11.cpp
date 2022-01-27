/* write a program weather a number is divisible by both 2 and 3 or divisible by only one of them*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    if (n % 2 == 0 && n % 3 == 0)
    {
        cout << "IT IS DIVISIBLE BY BOTH" << endl;
    }
    else if (n % 2 != 0 && n % 3 == 0)
    {
        cout << "It is only divisible by 3 not 2" << endl;
    }
    else if (n % 2 == 0 && n % 3 != 0)
    {
        cout << "It is only divisible by 2" << endl;
    }
    else
    {
        cout << "Divisible by none" << endl;
    }

    /* using  TERNERY OPERATOR in C++ to find the |a-b| */
    /* int a=2,b=5;
    int c = a>b?a-b:b-a;
    cout<<c;
    */
    
   

    return 0;
}
