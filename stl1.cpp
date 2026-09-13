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
/*
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

void explainVector() {
    // 1. Basic push_back and emplace_back
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    cout << "1. Basic push and emplace: ";
    for (auto x : v)
        cout << x << " ";
    cout << endl;

    // 2. Vector of pairs
    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(3, 4);

    cout << "2. Vector of pairs: ";
    for (auto p : vec)
        cout << "{" << p.first << "," << p.second << "} ";
    cout << endl;

    // 3. Vector with size and default value
    vector<int> v_hundred(5, 100);

    cout << "3. Vector (5,100): ";
    for (auto x : v_hundred)
        cout << x << " ";
    cout << endl;

    // 4. Vector with size only
    vector<int> v_size(5);

    cout << "4. Vector (5): ";
    for (auto x : v_size)
        cout << x << " ";
    cout << endl;

    // 5. Vector initialization
    vector<int> v1(5, 20);

    cout << "5. v1: ";
    for (auto x : v1)
        cout << x << " ";
    cout << endl;

    // 6. Copy of vector
    vector<int> v2(v1);

    cout << "6. v2 (copy of v1): ";
    for (auto x : v2)
        cout << x << " ";
    cout << endl;

    // 7. Iterator
    vector<int> numbers = {10, 20, 15, 6, 7};

    vector<int>::iterator it = numbers.begin();

    it++;
    cout << "7. After it++: " << *it << endl;

    it = it + 2;
    cout << "   After it+2: " << *it << endl;

    // 8. Types of iterators
    vector<int>::iterator it_end = numbers.end();
    vector<int>::reverse_iterator it_rbegin = numbers.rbegin();
    vector<int>::reverse_iterator it_rend = numbers.rend();

    cout << "8. Iterator types created successfully." << endl;

    // 9. Element access
    cout << "9. numbers[0]: " << numbers[0] << endl;
    cout << "   numbers.at(0): " << numbers.at(0) << endl;
    cout << "   numbers.back(): " << numbers.back() << endl;

    // 10. Explicit iterator
    cout << "10. Using explicit iterator: ";
    for (vector<int>::iterator it = numbers.begin();
         it != numbers.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // 11. Auto iterator
    cout << "11. Using auto iterator: ";
    for (auto it = numbers.begin(); it != numbers.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // 12. Range-based for loop
    cout << "12. Using range-based loop: ";
    for (auto x : numbers) {
        cout << x << " ";
    }
    cout << endl;

    // 13. Insert single element
    vector<int> insertVector(2, 100);

    cout << "13. Before insert: ";
    for (auto x : insertVector)
        cout << x << " ";
    cout << endl;

    insertVector.insert(insertVector.begin(), 300);

    cout << "    After inserting 300: ";
    for (auto x : insertVector)
        cout << x << " ";
    cout << endl;

    // 14. Insert multiple elements
    insertVector.insert(insertVector.begin() + 1, 2, 10);

    cout << "14. After inserting two 10s: ";
    for (auto x : insertVector)
        cout << x << " ";
    cout << endl;

    // 15. Copy another vector using insert
    vector<int> copy(2, 50);

    insertVector.insert(insertVector.begin(), copy.begin(), copy.end());

    cout << "15. After copying {50,50}: ";
    for (auto x : insertVector)
        cout << x << " ";
    cout << endl;

    // 16. Erase single element
    numbers.erase(numbers.begin() + 1);

    cout << "16. After single erase: ";
    for (auto x : numbers)
        cout << x << " ";
    cout << endl;

    // 17. Erase a range
    numbers.erase(numbers.begin() + 1, numbers.begin() + 3);

    cout << "17. After range erase: ";
    for (auto x : numbers)
        cout << x << " ";
    cout << endl;

    // 18. Size
    cout << "18. Size of numbers: " << numbers.size() << endl;

    // 19. pop_back
    numbers.pop_back();

    cout << "19. After pop_back: ";
    for (auto x : numbers)
        cout << x << " ";
    cout << endl;

    // 20. Swap
    vector<int> a = {10, 20};
    vector<int> b = {30, 40};

    cout << "20. Before swap:" << endl;
    cout << "    a: ";
    for (auto x : a)
        cout << x << " ";
    cout << endl;

    cout << "    b: ";
    for (auto x : b)
        cout << x << " ";
    cout << endl;

    a.swap(b);

    cout << "    After swap:" << endl;
    cout << "    a: ";
    for (auto x : a)
        cout << x << " ";
    cout << endl;

    cout << "    b: ";
    for (auto x : b)
        cout << x << " ";
    cout << endl;

    // 21. Clear
    numbers.clear();

    cout << "21. After clear: ";
    for (auto x : numbers)
        cout << x << " ";
    cout << "(empty)" << endl;

    // 22. Empty
    cout << "22. Is numbers empty? " << numbers.empty() << endl;
}

int main() {
    explainVector();
    return 0;
}
*/
   //list
/*
 #include <iostream>
#include <list>
using namespace std;

void explainList() {
    list<int> ls;

    // 1. push_back
    ls.push_back(2);

    cout << "1. After push_back(2): ";
    for (auto x : ls)
        cout << x << " ";
    cout << endl;

    // 2. emplace_back
    ls.emplace_back(4);

    cout << "2. After emplace_back(4): ";
    for (auto x : ls)
        cout << x << " ";
    cout << endl;

    // 3. push_front
    ls.push_front(5);

    cout << "3. After push_front(5): ";
    for (auto x : ls)
        cout << x << " ";
    cout << endl;

    // 4. emplace_front
    ls.emplace_front(1);

    cout << "4. After emplace_front(1): ";
    for (auto x : ls)
        cout << x << " ";
    cout << endl;

    // 5. Access front element
    cout << "5. Front element: " << ls.front() << endl;

    // 6. Access back element
    cout << "6. Back element: " << ls.back() << endl;

    // 7. Remove first element
    ls.pop_front();

    cout << "7. After pop_front(): ";
    for (auto x : ls)
        cout << x << " ";
    cout << endl;

    // 8. Remove last element
    ls.pop_back();

    cout << "8. After pop_back(): ";
    for (auto x : ls)
        cout << x << " ";
    cout << endl;

    // 9. Insert an element
    auto it = ls.begin();
    ++it;

    ls.insert(it, 10);

    cout << "9. After insert(10): ";
    for (auto x : ls)
        cout << x << " ";
    cout << endl;

    // 10. Erase an element
    it = ls.begin();
    ++it;

    ls.erase(it);

    cout << "10. After erase(): ";
    for (auto x : ls)
        cout << x << " ";
    cout << endl;

    // 11. Size
    cout << "11. Size: " << ls.size() << endl;

    // 12. Remove a particular value
    ls.push_back(2);
    ls.push_back(2);

    cout << "12. Before remove(2): ";
    for (auto x : ls)
        cout << x << " ";
    cout << endl;

    ls.remove(2);

    cout << "    After remove(2): ";
    for (auto x : ls)
        cout << x << " ";
    cout << endl;

    // 13. Reverse
    ls.reverse();

    cout << "13. After reverse(): ";
    for (auto x : ls)
        cout << x << " ";
    cout << endl;

    // 14. Sort
    ls.sort();

    cout << "14. After sort(): ";
    for (auto x : ls)
        cout << x << " ";
    cout << endl;

    // 15. Clear
    ls.clear();

    cout << "15. After clear(): ";
    for (auto x : ls)
        cout << x << " ";
    cout << "(empty)" << endl;

    // 16. Empty
    cout << "16. Is list empty? " << ls.empty() << endl;
}

int main() {
    explainList();
    return 0;
}  
*/
//deque
/*
#include <iostream>
#include <deque>
using namespace std;

void explainDeque() {
    deque<int> dq;

    // 1. push_back
    dq.push_back(1);

    cout << "1. After push_back(1): ";
    for (auto x : dq)
        cout << x << " ";
    cout << endl;

    // 2. emplace_back
    dq.emplace_back(2);

    cout << "2. After emplace_back(2): ";
    for (auto x : dq)
        cout << x << " ";
    cout << endl;

    // 3. push_front
    dq.push_front(4);

    cout << "3. After push_front(4): ";
    for (auto x : dq)
        cout << x << " ";
    cout << endl;

    // 4. emplace_front
    dq.emplace_front(3);

    cout << "4. After emplace_front(3): ";
    for (auto x : dq)
        cout << x << " ";
    cout << endl;

    // 5. pop_back
    dq.pop_back();

    cout << "5. After pop_back(): ";
    for (auto x : dq)
        cout << x << " ";
    cout << endl;

    // 6. pop_front
    dq.pop_front();

    cout << "6. After pop_front(): ";
    for (auto x : dq)
        cout << x << " ";
    cout << endl;

    // 7. back()
    cout << "7. Back element: " << dq.back() << endl;

    // 8. front()
    cout << "8. Front element: " << dq.front() << endl;
}

int main() {
    explainDeque();
    return 0;
}
*/
//stack
/*
#include<iostream>
#include<stack>
using namespace std;
void explainStack(){
    //LIFO -> Last In First Out
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{2, 1}
    st.push(3); //{3, 2, 1}
    st.push(3); //{3,3,2,1}
    st.emplace(5); //{5, 3, 3, 2, 1}
    cout<<st.top()<<endl; //prints 5
    st.pop();//removes 5
    cout<<st.top()<<endl;//prints 3
    cout<<st.size()<<endl;//prints 4
    cout<<st.empty()<<endl;//prints 0
    stack<int> st1, st2;
    st1.swap(st2);//swap contents
}
int main() {
    explainStack();
    return 0;
}
*/

#include <iostream>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

// Custom Comparator for Pairs
bool comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second < p2.second)
        return true;

    if (p1.second > p2.second)
        return false;

    return p1.first > p2.first;
}

// 1. QUEUE
// FIFO -> First In First Out
void explainQueue() {
    queue<int> q;

    q.push(1);
    cout << "After push(1): " << q.front() << endl;

    q.push(2);
    cout << "After push(2): Front = " << q.front()
         << ", Back = " << q.back() << endl;

    q.emplace(4);
    cout << "After emplace(4): Front = " << q.front()
         << ", Back = " << q.back() << endl;

    q.back() += 5;
    cout << "After back() += 5: Back = " << q.back() << endl;

    cout << "Front element: " << q.front() << endl;

    q.pop();
    cout << "After pop(): Front = " << q.front() << endl;
}

// 2. PRIORITY QUEUE
void explainPQ() {
    // Max Heap
    priority_queue<int> pq;

    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout << "Max Heap top: " << pq.top() << endl;

    pq.pop();
    cout << "After pop(): " << pq.top() << endl;

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> pq_min;

    pq_min.push(5);
    pq_min.push(2);
    pq_min.push(8);
    pq_min.emplace(10);

    cout << "Min Heap top: " << pq_min.top() << endl;
}

// 3. SET
// Sorted + Unique
void explainSet() {
    set<int> st;

    st.insert(1);
    cout << "After insert(1): ";
    for (auto x : st)
        cout << x << " ";
    cout << endl;

    st.emplace(2);
    cout << "After emplace(2): ";
    for (auto x : st)
        cout << x << " ";
    cout << endl;

    st.insert(2);
    cout << "After insert(2) again: ";
    for (auto x : st)
        cout << x << " ";
    cout << endl;

    st.insert(4);
    st.insert(3);
    cout << "After insert(4), insert(3): ";
    for (auto x : st)
        cout << x << " ";
    cout << endl;

    // Find
    auto it = st.find(3);

    if (it != st.end())
        cout << "find(3): " << *it << endl;

    auto it_not = st.find(6);

    if (it_not == st.end())
        cout << "find(6): Not Found" << endl;

    // Erase
    st.erase(5);
    cout << "After erase(5): ";
    for (auto x : st)
        cout << x << " ";
    cout << endl;

    // Count
    int cnt = st.count(1);
    cout << "count(1): " << cnt << endl;

    // Erase using iterator
    auto it_erase = st.find(3);
    st.erase(it_erase);

    cout << "After erasing 3: ";
    for (auto x : st)
        cout << x << " ";
    cout << endl;

    // Range erase
    auto it1 = st.find(2);
    auto it2 = st.find(4);

    st.erase(it1, it2);

    cout << "After range erase: ";
    for (auto x : st)
        cout << x << " ";
    cout << endl;

    // Lower bound
    auto lb = st.lower_bound(2);

    if (lb != st.end())
        cout << "lower_bound(2): " << *lb << endl;

    // Upper bound
    auto ub = st.upper_bound(3);

    if (ub != st.end())
        cout << "upper_bound(3): " << *ub << endl;
}

// 4. MULTISET
// Sorted + Duplicate elements allowed
void explainMultiset() {
    multiset<int> ms;

    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    cout << "After inserting 1 three times: ";
    for (auto x : ms)
        cout << x << " ";
    cout << endl;

    int cnt = ms.count(1);
    cout << "count(1): " << cnt << endl;

    // Erase only one occurrence
    ms.erase(ms.find(1));

    cout << "After erasing one 1: ";
    for (auto x : ms)
        cout << x << " ";
    cout << endl;
}

// 5. UNORDERED SET
// Unique + Not Sorted
void explainUSet() {
    unordered_set<int> st;

    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(2);

    cout << "Unordered Set: ";

    for (auto x : st)
        cout << x << " ";

    cout << endl;
}

// 6. MAP
// Unique Keys + Sorted Order
void explainMap() {
    map<int, int> mpp;

    map<int, pair<int, int>> mpp_pair;

    map<pair<int, int>, int> mpp_nested;

    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp.insert({2, 4});

    mpp_nested[{2, 3}] = 10;

    cout << "Map elements:" << endl;

    for (auto it : mpp)
        cout << it.first << " " << it.second << endl;

    cout << "mpp[1]: " << mpp[1] << endl;

    cout << "mpp[5]: " << mpp[5] << endl;

    auto it = mpp.find(3);

    if (it != mpp.end())
        cout << "Value of key 3: " << it->second << endl;

    auto lb = mpp.lower_bound(2);

    if (lb != mpp.end())
        cout << "lower_bound(2): "
             << lb->first << " " << lb->second << endl;

    auto ub = mpp.upper_bound(3);

    if (ub != mpp.end())
        cout << "upper_bound(3): "
             << ub->first << " " << ub->second << endl;
}

// 7. MULTIMAP
// Duplicate Keys + Sorted
void explainMultimap() {
    multimap<int, int> mpp;

    mpp.insert({1, 10});
    mpp.insert({1, 20});
    mpp.insert({2, 30});

    cout << "Multimap elements:" << endl;

    for (auto it : mpp)
        cout << it.first << " " << it.second << endl;
}

// 8. UNORDERED MAP
// Unique Keys + Not Sorted
void explainUnorderedMap() {
    unordered_map<int, int> mpp;

    mpp[1] = 10;
    mpp[2] = 20;
    mpp[3] = 30;

    cout << "Unordered Map elements:" << endl;

    for (auto it : mpp)
        cout << it.first << " " << it.second << endl;
}

// 9. ALGORITHMS
void explainExtra() {
    int a[] = {1, 5, 2, 4, 3};

    int n = sizeof(a) / sizeof(a[0]);

    // Sort array
    sort(a, a + n);

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;

    // Sort vector
    vector<int> v = {1, 5, 2, 4, 3};

    sort(v.begin(), v.end());

    cout << "Sorted vector: ";

    for (auto x : v)
        cout << x << " ";

    cout << endl;

    // Sort partial range
    int b[] = {1, 5, 2, 4, 3};

    sort(b + 2, b + 4);

    cout << "Partial sorted array: ";

    for (int i = 0; i < 5; i++)
        cout << b[i] << " ";

    cout << endl;

    // Sort in descending order
    sort(a, a + n, greater<int>());

    cout << "Descending order: ";

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;

    // Sort pairs using custom comparator
    pair<int, int> arr_p[] = {
        {1, 2},
        {2, 1},
        {4, 1}
    };

    int n_p = sizeof(arr_p) / sizeof(arr_p[0]);

    sort(arr_p, arr_p + n_p, comp);

    cout << "Sorted pairs: ";

    for (int i = 0; i < n_p; i++)
        cout << "{" << arr_p[i].first
             << "," << arr_p[i].second << "} ";

    cout << endl;

    // Count set bits
    int num = 7;

    int cnt = __builtin_popcount(num);

    cout << "Set bits in 7: " << cnt << endl;

    long long num_ll = 165786578687LL;

    int cnt_ll = __builtin_popcountll(num_ll);

    cout << "Set bits in long long number: "
         << cnt_ll << endl;

    // Permutations
    string s = "123";

    cout << "Permutations:" << endl;

    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    // Maximum element
    int maxi = *max_element(a, a + n);

    cout << "Maximum element: " << maxi << endl;
}

int main() {
    cout << "===== QUEUE =====" << endl;
    explainQueue();

    cout << "\n===== PRIORITY QUEUE =====" << endl;
    explainPQ();

    cout << "\n===== SET =====" << endl;
    explainSet();

    cout << "\n===== MULTISET =====" << endl;
    explainMultiset();

    cout << "\n===== UNORDERED SET =====" << endl;
    explainUSet();

    cout << "\n===== MAP =====" << endl;
    explainMap();

    cout << "\n===== MULTIMAP =====" << endl;
    explainMultimap();

    cout << "\n===== UNORDERED MAP =====" << endl;
    explainUnorderedMap();

    cout << "\n===== ALGORITHMS =====" << endl;
    explainExtra();

    return 0;
}