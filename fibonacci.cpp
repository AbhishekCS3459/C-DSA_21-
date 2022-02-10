// Fibonacci Sequence
// 0,1,1,2,3,5,8...
#include <iostream>
using namespace std;
void fibonacci(int num)
{
    int t1 = 0;
    int newterm;
    int t2 = 1;
    for (int i = 1; i <= num; i++)
    {
        cout << t1 << " ";
        newterm = t1 + t2;
        t1 = t2;
        t2 = newterm;
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    fibonacci(n);
    return 0;
}
