#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    cout << "===== Demonstration of <algorithm> Library =====\n\n";

    // Vector for binary_search, lower_bound, upper_bound
    vector<int> v = {1, 3, 6, 7};

    cout << "Vector Elements: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // binary_search
    cout << "\nFinding 6 -> "
         << binary_search(v.begin(), v.end(), 6) << endl;

    // lower_bound
    cout << "Lower Bound of 6 -> "
         << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;

    // upper_bound
    cout << "Upper Bound of 4 -> "
         << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    // max and min
    int a = 3;
    int b = 5;

    cout << "\nMax(" << a << ", " << b << ") = "
         << max(a, b) << endl;

    cout << "Min(" << a << ", " << b << ") = "
         << min(a, b) << endl;

    // String operations
    string str = "abcd";

    cout << "\nOriginal String : " << str << endl;

    reverse(str.begin(), str.end());
    cout << "After Reverse   : " << str << endl;

    rotate(str.begin(), str.begin() + 1, str.end());
    cout << "After Rotate    : " << str << endl;

    // Sorting
    vector<int> arr = {3, 6, 7, 1};

    cout << "\nBefore Sorting : ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;

    sort(arr.begin(), arr.end());

    cout << "After Sorting  : ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;

    return 0;
}