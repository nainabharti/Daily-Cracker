#include <iostream>
#include <utility>
using namespace std;

int main()
{
    // 1. Basic pair
    pair<int, int> p = {1, 3};

    cout << "Basic pair:" << endl;
    cout << p.first << " " << p.second << endl;


    // 2. Nested pair
    pair<int, pair<int, int>> p1 = {1, {3, 4}};

    cout << "\nNested pair:" << endl;

    // p1.first = 1
    // p1.second.first = 3
    // p1.second.second = 4

    cout << p1.first << " "
         << p1.second.second << " "
         << p1.second.first << endl;


    // 3. Array of pairs
    pair<int, int> arr[] = {
        {1, 2},
        {2, 5},
        {5, 1}
    };

    cout << "\nArray of pairs:" << endl;

    // Index:       0       1       2
    //              {1,2}   {2,5}   {5,1}

    cout << "arr[0]: "
         << arr[0].first << " "
         << arr[0].second << endl;

    cout << "arr[1]: "
         << arr[1].first << " "
         << arr[1].second << endl;

    cout << "arr[2]: "
         << arr[2].first << " "
         << arr[2].second << endl;

    // Accessing second element of pair at index 1
    cout << "Second element of arr[1]: "
         << arr[1].second << endl;


    // 4. Changing values of a pair
    p.first = 10;
    p.second = 20;

    cout << "\nAfter changing p:" << endl;
    cout << p.first << " " << p.second << endl;


    // 5. Swapping two pairs
    pair<int, int> p2 = {30, 40};

    cout << "\nBefore swapping:" << endl;
    cout << "p  = " << p.first << " " << p.second << endl;
    cout << "p2 = " << p2.first << " " << p2.second << endl;

    p.swap(p2);

    cout << "\nAfter swapping:" << endl;
    cout << "p  = " << p.first << " " << p.second << endl;
    cout << "p2 = " << p2.first << " " << p2.second << endl;


    // 6. Pair with different data types
    pair<string, int> student = {"Naina", 20};

    cout << "\nDifferent data types:" << endl;
    cout << "Name: " << student.first << endl;
    cout << "Age: " << student.second << endl;

    return 0;
}