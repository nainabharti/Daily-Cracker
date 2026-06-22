
#include <iostream>
#include <vector>
#include <array>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>

using namespace std;

void runVector() {
    cout << "--- VECTOR ---" << endl;
    vector<int> v;
    cout << "Capacity -> " << v.capacity() << endl;
    v.push_back(1);
    cout << "Capacity -> " << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity -> " << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity -> " << v.capacity() << endl;
    cout << "size -> " << v.size() << endl;
    cout << "Element at 2nd Index -> " << v.at(2) << endl;
    cout << "front " << v.front() << endl;
    cout << "back " << v.back() << endl;
    cout << "before pop" << endl;
    for (int i : v) {
        cout << i << " ";
    } cout << endl;
    v.pop_back();
    cout << "after pop" << endl;
    for (int i : v) {
        cout << i << " ";
    } cout << endl;

    vector<int> a(5, 1);
    vector<int> last(a);
    cout << "print last " << endl;
    for (int i : last) {
        cout << i << " ";
    } cout << endl << endl;
}

void runArray() {
    cout << "--- ARRAY ---" << endl;
    int basic[3] = {1, 2, 3};
    array<int, 4> a = {1, 2, 3, 4};
    int size = a.size();
    for (int i = 0; i < size; i++) {
        cout << a[i] << endl;
    }
    cout << "Element at 2nd Index -> " << a.at(2) << endl;
    cout << "Element Empty or not -> " << a.empty() << endl << endl;
}

void runDeque() {
    cout << "--- DEQUE ---" << endl;
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    cout << "Print First Index Element -> " << d.at(1) << endl;
    cout << "front " << d.front() << endl;
    cout << "back " << d.back() << endl;
    cout << "Empty or not " << d.empty() << endl;
    cout << "before erase " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "after erase " << d.size() << endl;
    for (int i : d) {
        cout << i << endl;
    } cout << endl;
}

void runList() {
    cout << "--- LIST ---" << endl;
    list<int> l;
    list<int> n(5, 100);
    cout << "Printing n" << endl;
    for (int i : n) {
        cout << i << " ";
    } cout << endl;
    l.push_front(2);
    l.push_back(1); // Restored to match output tracking
    for (int i : l) {
        cout << i << " ";
    } cout << endl;
    l.erase(l.begin());
    cout << "after erase" << endl;
    for (int i : l) {
        cout << i << " ";
    } cout << endl;
    cout << "Size of list " << l.size() << endl << endl;
}

void runStack() {
    cout << "--- STACK ---" << endl;
    stack<string> s;
    s.push("love");
    s.push("babbar");
    s.push("kumar");
    cout << "Top Element -> " << s.top() << endl;
    s.pop();
    cout << "Top Element -> " << s.top() << endl;
    cout << "size of stack " << s.size() << endl;
    cout << "Empty or not " << s.empty() << endl << endl;
}

void runQueue() {
    cout << "--- QUEUE ---" << endl;
    queue<string> q;
    q.push("love");
    q.push("Babbar");
    q.push("kumar");
    cout << "Size before pop " << q.size() << endl;
    cout << "First Element " << q.front() << endl;
    q.pop();
    cout << "First Element " << q.front() << endl;
    cout << "Size after pop " << q.size() << endl << endl;
}

void runPriorityQueue() {
    cout << "--- PRIORITY QUEUE ---" << endl;
    priority_queue<int> maxi;
    priority_queue<int, vector<int>, greater<int>> mini;
    
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout << "size -> " << maxi.size() << endl;
    int n = maxi.size();
    for (int i = 0; i < n; i++) {
        cout << maxi.top() << " ";
        maxi.pop();
    } cout << endl;
    
    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);
    int m = mini.size();
    for (int i = 0; i < m; i++) {
        cout << mini.top() << " ";
        mini.pop();
    } cout << endl << endl;
}

void runSet() {
    cout << "--- SET ---" << endl;
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(2);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    for (auto i : s) {
        cout << i << endl;
    } cout << endl;
    
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for (auto i : s) {
        cout << i << endl;
    }
    cout << "5 is present or not -> " << s.count(5) << endl << endl;
}

void runMap() {
    cout << "--- MAP ---" << endl;
    map<int, string> m;
    m[1] = "babbar";
    m[13] = "kumar";
    m[2] = "love";
    m.insert({5, "bheem"});
    
    cout << "before erase" << endl;
    for (auto i : m) {
        cout << i.first << " " << i.second << endl;
    }
    
    cout << "finding -13 -> " << m.count(-13) << endl;
    
    cout << "after erase" << endl;
    for (auto i : m) {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;
    
    auto it = m.find(5);
    for (auto i = it; i != m.end(); i++) {
        cout << (*i).first << endl;
    }
}

int main() {
    runVector();
    runArray();
    runDeque();
    runList();
    runStack();
    runQueue();
    runPriorityQueue();
    runSet();
    runMap();
    return 0;
}