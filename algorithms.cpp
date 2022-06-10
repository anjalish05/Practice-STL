#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    vector<int> v;

    v.push_back(1);
    // condition for binar search: elements should be in sorted order pehle se hee
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout << "Finding 6: " << binary_search(v.begin(), v.end(), 6) << endl;
    // returns boolean

    cout << "Lower Bound: " << lower_bound(v.begin(), v.end(), 6)-v.begin() << endl;
    cout << "Upper Bound: " << upper_bound(v.begin(), v.end(), 6)-v.begin() << endl;

    int a = 3;
    int b = 5;

    cout << "Max: " << max(a, b) << "\n";
    cout << "Min: " << min(a, b) << "\n";

    swap(a, b);
    cout << "After swap, a = " << a << endl;
    string s = "abcd";
    reverse(s.begin(), s.end());
    cout << "After reverse, string s: " << s << endl;

    rotate(v.begin(), v.begin()+1, v.end());
    cout << "After rotate: " << endl;
    for(int i:v) {
        cout << i << " ";
    }
    cout << endl;

    sort(v.begin(), v.end());
    // based on intro sort: which is combination of three algos; heap sort, quick sort and insertion sort
    cout << "After swap: " << endl;
    for(int i:v) {
        cout << i << " ";
    }
    cout << endl;


    return 0; 
}