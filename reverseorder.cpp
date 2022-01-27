/* FIND REVERSE OF A NUMBER */
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    // 4576=6754
    int x, r;
    cout<<"Enter the number you want reverse of:"<<endl;
    cin >> x;
    int reverse = 0;
    while (x != 0)
    {
        r = x % 10;
        reverse = reverse * 10 + r;
        x = x / 10;
    }
    cout <<"reverse = "<<reverse;
    return 0;
}
