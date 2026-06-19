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
    int arr[] = {5, 2, 8, 1, 3};
    sort(arr, arr + 5);

    for(int value : arr) {
        cout << value << " ";
    }
    cout << endl;
    return 0;
}