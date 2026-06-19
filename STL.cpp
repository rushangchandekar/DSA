#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main() {
    // // Vector
    // vector<int> vec = {1, 2, 3, 4, 5};
    // vec.push_back(6);
    // cout << "Vector: ";
    // for (int num : vec) {
    //     cout << num << " ";
    // }
    // cout << endl;

    // // List
    // list<int> lst = {1, 2, 3, 4, 5};
    // lst.push_back(6);
    // cout << "List: ";
    // for (int num : lst) {
    //     cout << num << " ";
    // }
    // cout << endl;

    // // Deque
    // deque<int> deq = {1, 2, 3, 4, 5};
    // deq.push_back(6);
    // cout << "Deque: ";
    // for (int num : deq) {
    //     cout << num << " ";
    // }
    // cout << endl;

    // // Stack
    // stack<int> stk;
    // stk.push(1);
    // stk.push(2);
    // stk.push(3);
    // cout << "Stack: ";
    // while (!stk.empty()) {
    //     cout << stk.top() << " ";
    //     stk.pop();
    // }
    // cout << endl;

    // // Queue
    // queue<int> que;
    // que.push(1);
    // que.push(2);
    // que.push(3);
    // cout << "Queue: ";
    // while (!que.empty()) {
    //     cout << que.front() << " ";
    //     que.pop();
    // }
    // cout << endl;

    // Sorting
    // int arr[] = {5, 2, 8, 1, 3};
    // sort(arr, arr + 5);

    // for(int value : arr) {
    //     cout << value << " ";
    // }
    // cout << endl;

    // vector<int> vec = {5, 2, 8, 1, 3};
    // sort(vec.begin(), vec.end());

    // for(int value : vec) {
    //     cout << value << " ";
    // }
    // cout << endl;

    // vector<int> vec = {5, 2, 8, 1, 3};
    // sort(vec.begin(), vec.end(), greater<int>());

    // for(int value : vec) {
    //     cout << value << " ";
    // }
    // cout << endl;

    // vector<pair<int, int>> vec = {{1, 5}, {2, 3}, {3, 8}, {4, 1}, {5, 2}};
    // sort(vec.begin(), vec.end());

    // for(const auto& p : vec) {
    //     cout << "(" << p.first << ", " << p.second << ") " << endl;
    // }

    // vector<int> vec = {5, 2, 8, 1, 3};
    
    // reverse(vec.begin(), vec.end());

    // for(int value : vec) {
    //     cout << value << " ";
    // }
    // cout << endl;

    // string s = "abc";
    // next_permutation(s.begin(), s.end());

    // cout << s << endl;

    // cout << max(10, 20) << " " << min(10, 20) << endl;

    // int a=5, b=10;
    // swap(a, b);
    // cout << "a= " << a << ", b= " << b << endl;

    vector<int> vec = {1, 2, 3, 4, 5};

    cout << *max_element(vec.begin(), vec.end()) << endl; // Value of max element
    cout << *min_element(vec.begin(), vec.end()) << endl; // Value of min element

    cout << binary_search(vec.begin(), vec.end(), 4) << endl; // Check if 4 is present in the vector

    return 0;
}