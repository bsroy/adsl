#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int first[] = { 5, 10, 15, 20, 25 };
    int second[] = { 50, 40, 30, 20, 10 };
    vector<int> v(10);
    vector<int>::iterator it;
    sort(first, first + 5);
    sort(second, second + 5);
    it = set_intersection(first, first + 5, second, second + 5, v.begin());
    v.resize(it - v.begin());
    cout << "The intersection has " << (v.size()) << " elements: " << endl;
    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << "  ";
    cout << endl;
    it = set_union(first, first + 5, second, second + 5, v.begin());
    v.resize(it - v.begin());
    cout << "The union has " << (v.size()) << " elements: " << endl;
    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << "  ";
    cout << endl;
    it = set_difference(first, first + 5, second, second + 5, v.begin());
    v.resize(it - v.begin());
    cout << "The difference has " << (v.size()) << " elements: " << endl;
    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << "  ";
    cout << endl;
    return 0;
}

/*
====OUTPUT====
The intersection has 2 elements:
10  20
The union has 8 elements:
5  10  15  20  25  50  40  30
The difference has 3 elements:
5  15  25

Process returned 0 (0x0)   execution time : 0.026 s
Press any key to continue.
*/
