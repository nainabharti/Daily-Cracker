/*
//pairs
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
*/
//void

#include <iostream>
#include <vector>
#include <utility>
using namespace std;

void explainVector()
{
    // 1. Basic vector
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    cout << "Vector: ";
    for (auto x : v)
        cout << x << " ";
    cout << endl;

    // 2. Vector of pairs
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(3, 4);

    cout << "Vector of pairs: ";
    for (auto p : vec)
        cout << "{" << p.first << "," << p.second << "} ";
    cout << endl;

    // 3. Vector with size and value
    vector<int> v_hundred(5, 100);
    // {100, 100, 100, 100, 100}

    vector<int> v_size(5);
    // {0, 0, 0, 0, 0}

    // 4. Copy of a vector
    vector<int> v1(5, 20);
    vector<int> v2(v1);

    cout << "v1: ";
    for (auto x : v1)
        cout << x << " ";

    cout << "\nv2: ";
    for (auto x : v2)
        cout << x << " ";
    cout << endl;

    // 5. Iterator
    vector<int> numbers = {10, 20, 15, 6, 7};

    vector<int>::iterator it = numbers.begin();

    cout << "First element: " << *it << endl;

    it++;
    cout << "After it++: " << *it << endl;

    it = it + 2;
    cout << "After it+2: " << *it << endl;

    // 6. Types of iterators
    vector<int>::iterator it_end = numbers.end();
    vector<int>::reverse_iterator it_rbegin = numbers.rbegin();
    vector<int>::reverse_iterator it_rend = numbers.rend();

    // 7. Element access
    cout << "numbers[0]: " << numbers[0] << endl;
    cout << "numbers.at(0): " << numbers.at(0) << endl;
    cout << "numbers.back(): " << numbers.back() << endl;

    // 8. Using explicit iterator
    cout << "Using iterator: ";
    for (vector<int>::iterator it = numbers.begin();
         it != numbers.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // 9. Using auto iterator
    cout << "Using auto: ";
    for (auto it = numbers.begin(); it != numbers.end(); it++)
        cout << *it << " ";
    cout << endl;

    // 10. Range-based for loop
    cout << "Using range-based loop: ";
    for (auto x : numbers)
        cout << x << " ";
    cout << endl;

    // 11. Erase single element
    vector<int> eraseExample = {10, 20, 12, 23, 35};

    eraseExample.erase(eraseExample.begin() + 1);
    // Removes 20

    cout << "After single erase: ";
    for (auto x : eraseExample)
        cout << x << " ";
    cout << endl;

    // 12. Erase a range
    vector<int> rangeExample = {10, 20, 12, 23, 35};

    rangeExample.erase(rangeExample.begin() + 2,
                       rangeExample.begin() + 4);
    // Removes 12 and 23

    cout << "After range erase: ";
    for (auto x : rangeExample)
        cout << x << " ";
    cout << endl;
}

int main()
{
    explainVector();
    return 0;
}