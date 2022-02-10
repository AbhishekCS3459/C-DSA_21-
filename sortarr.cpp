// SORTING OF ARRAY
// SELECTION SHORT
// Rule - In this technique Rember the rule-Find the minimum element in unsorted array and then
// swap it with element at begening,
// 12,45,23,51,19,8(sort all these)
// SWAP ONE BY ONE WITH MINIMUM VALUE
// Step 1- 8,45,23,51,19,12(Simply swap 12 by 8)
// similarly swap 45 with 12(next minimum)
// again and again repeat the steps
// at last the remainded will be - 8,12,19,23,45,51
// SELECTION SHORT IS NEITHER ADAPTIVE NETIHER STABLE
// ONLY ADVANTAGE IS THAT IT PROVIDE SWAPING SORT
// IT IS A O(n*n) algo
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, arr[n];
    cout << "Enter the value of n" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element" << i << endl;
        cin >> arr[i];
    }
    int temp, minNo, location;

    for (int i = 0; i < (n - 1); i++) // here we take i<(size-1) as the last element is sorted automatically
    {
        minNo = arr[i];
        location = i;
        for (int j = (i + 1); j < n; j++)
        {
            if (arr[j] < minNo)
            {
                minNo = arr[j];
                location = j;
            }
        }
        // To DO SWAP we should first store the value in a variable
        temp = arr[i];
        arr[i] = arr[location];
        arr[location] = temp;
    }
    cout << "Array after selection sort" << endl;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
