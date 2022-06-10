#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>

using namespace std;

int main() {

    // int basic[3] = {1, 2, 3}; // fixed size static array

    // array<int, 4> a = {1, 2, 3, 4}; // type: int, size: 4
    // // it's implementation is done by the basic static array only

    // int size = a.size();
    // for (int i = 0; i < size; i++){
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    // // All below operations: 
    // // O(1): time complexity
    // cout << "Element at 2nd index: " << a.at(2) << endl;
    // cout << "Empty or not: " << a.empty() << endl; // returns boolean
    // cout << "First Element: " << a.front() << endl; // returns first element
    // cout << "Last Element: " << a.back() << endl; // returns last element
    
    // Vectors: -
    // It is dynamic: size can be increased or decreased
    // Vector tries to double its size if we try to add any element in it
    // it creates another vector with double the size and copies all the elements existing in the previous/existing one
    // And dumps the older vector

    // vector<int> v;
    // // size tells the current no. of elements 
    // // capacity tells the total memory allocated
    // cout << "Capacity of vector: " << v.capacity() << endl; 
    // v.push_back(3); // to enter an element in the empty array
    // cout << "Capacity of vector: " << v.capacity() << endl; 
    // v.push_back(2);
    // cout << "Capacity of vector: " << v.capacity() << endl; 
    // v.push_back(3);
    // cout << "Capacity of vector: " << v.capacity() << endl; // Output: 4
    // // self-increased the space 
    // cout << "Size of vector: " << v.size() << endl; // Output: 3
    // cout << "Element at index = 2: " << v.at(2) << endl;
    // cout << "Front: " << v.front() << endl; // 1st element
    // cout << "Back: " << v.back() << endl; // 2nd element

    // // pop back: removes the last element 
    // cout << "Before pop: " << endl;
    // for (int i:v) {
    //     cout << i << " ";
    // } 
    // cout << endl;

    // v.pop_back();

    // cout << "After pop: " << endl;
    // for (int i:v) {
    //     cout << i << " ";
    // }
    // cout << endl;

    // cout << "Before clear size: " << v.size() << endl;
    
    // v.clear();
    // cout << "After clear size: " << v.size() << endl;
    // cout << "Capacity after clearance: " << v.capacity() << endl;

    // vector<int> a(5, 1); // size: 5, all initialized with 1
    // cout << "Print a: " << endl;
    // for(int i:a) {
    //     cout << i << " ";
    // }

    // vector<int> last(a); // copies all elements of the vector 'a'

    // Deque: -
    // We can perform insertion, deletion from both front and back 
    // like array and vector have contigious memory allocations possible, here we don't have this
    // here, we have multiple static arrays

    // deque<int> d;
    // d.push_back(1);
    // d.push_front(2);
    // d.push_back(3);
    // for (int i:d) {
    //     cout << i << " ";
    // }
    // // random access is possible using .at()
    // d.pop_back();
    // // d.pop_front();
    // cout << endl;
    // for(int i:d) {
    //     cout << i << " ";
    // }
    // cout << endl;
    // cout << "Print 1st index element: " << d.at(0) << endl;
    // // d.front(), d.back()
    // // d.empty()

    // cout << "Before erase, size: " << d.size() << endl;
    // d.erase(d.begin(), d.begin()+1); // erases the 1st element
    // cout << "After erase, size: " << d.size() << endl;

    // List:-
    // It uses the implementation of doublly linked lists
    // front and back pointers
    // we need to traverse till the ith element if we want the ith element

    // list<int> l;
    // l.push_back(1);
    // l.push_front(2);
    // for(int i:l){
    //     cout << i << " ";
    // }
    // cout << endl;
    // // time complexity for erase function: O(n)
    // l.erase(l.begin());
    // cout << "After Erase: " << endl;
    // for(int i:l) {
    //     cout << i << " ";
    // }
    // cout << endl;
    // cout << "Size of list: " << l.size() << endl;

    // list<int> n(l); // copies the list l

    // Stacks:-
    // last-in-first-out

    // stack<string> s;

    // s.push("Shara");
    // s.push("Ari");
    // s.push("Arak");

    // cout << "Top element: " << s.top() << endl;

    // s.pop();
    // cout << "Top element: " << s.top() << endl;
    
    // cout << "Size of stack: " << s.size() << endl;
    // cout << "Empty or not: " << s.empty() << endl;

    // Queue:-
    // Forming a line
    // first-in-first-out

    // queue<string> q;
    // q.push("Shara");
    // q.push("Ari");
    // q.push("Arak");

    // cout << "First Element: " << q.front() << endl;

    // q.pop();
    // // q.size()

    // Priority Queue:-
    // It's first element will always be the GREATEST
    // Like Max Heap
    // if we make a max heap, it always returns the maximum element while extracting 
    // if we make the min heap, it always returns the minimum element while extracting
    // priority_queue<int> maxh;
    // based on max heap
    
    // for min heap
    // priority_queue<int, vector<int>, greater<int> > minh;

    // maxh.push(1);
    // maxh.push(3);
    // maxh.push(0);
    // maxh.push(5);

    // cout << "Size: " << maxh.size() << endl;

    // int n = maxh.size();
    // for(int i = 0; i < n; i++) {
    //     cout << maxh.top() << " ";
    //     maxh.pop();
    // } 
    // cout << endl;

    // minh.push(5);
    // minh.push(1);
    // minh.push(0);
    // minh.push(4);
    // minh.push(3);

    // int m = minh.size();
    // for(int i = 0; i < m; i++) {
    //     cout << minh.top() << " ";
    //     minh.pop();
    // }
    // cout << "Empty or not: " << minh.empty() << endl;

    // Sets:-
    // Every element should be unique. 
    // Its implementation is done on the basis of BST
    // There's no modificaton, only insertion and deletion 
    // Returns elements in sorted order
    // Set is a bit slower than unordered set 
    // Element doesn't come in a sorted order when in unordered 

    // set<int> s;

    // // time complexity of insert(): O(log(n))
    // s.insert(5);
    // s.insert(5);
    // s.insert(0);
    // s.insert(6);
    // s.insert(1);

    // for(auto i:s) {
    //     cout << i << endl;
    // }

    // set<int>::iterator it = s.begin();
    // it++;

    // s.erase(it); // will delete the second element
    // for(auto i:s) {
    //     cout << i << endl;
    // }

    // cout << "5 is present or not: " << s.count(5) << endl;

    // set<int>::iterator itr = s.find(5);
    
    // for(auto it = itr; it != s.end(); it++) {
    //     cout << *it << " ";
    // }
    // cout << endl;

    // Maps: -
    // Stores data as key values 
    // All keys are unique and all points to the same value 
    // when printed, returns the values in a sorted way
    // Time complexity for all the operations: O(log(n))

    // map<int, string> m; // key: int; value: string
    // m[1] = "shara";
    // m[2] = "arak";
    // m[13] = "ari";

    // m.insert( {5, "aram"});

    // for(auto i:m) {
    //     cout << i.first << " " << i.second << endl;
    // }

    // cout << "Finding 13: " << m.count(13) << endl;

    // cout << "Before Erase: " << endl;
    // for(auto i:m) {
    //     cout << i.first << " " << i.second << endl;
    // }

    // m.erase(13);
    // cout << "After Erase: " << endl;
    // for(auto i:m) {
    //     cout << i.first << " " << i.second << endl;
    // }

    // // unordered map: time complexity = O(n)

    // // find: returns the iterator of the element

    // auto it = m.find(5);

    // for (auto i = it; i != m.end(); i++) {
    //     cout << (*i).first << endl;
    // }



    return 0;
}