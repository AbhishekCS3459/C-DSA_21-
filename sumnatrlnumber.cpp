#include <iostream>
using namespace std;
int sum(int n)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans = ans + i;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}
