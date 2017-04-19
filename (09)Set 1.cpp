#include <iostream>
#include <set>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
    set<int> st;
    set<int>::iterator it;
    int choice, item, ch;
    while (1) {
        cout << "\n---------------------" << endl;
        cout << "Set Implementation in Stl" << endl;
        cout << "\n---------------------" << endl;
        cout << "1.Insert Element into the Set" << endl;
        cout << "2.Delete Element of the Set" << endl;
        cout << "3.Size of the Set" << endl;
        cout << "4.Find Element in a Set" << endl;
        cout << "5.Display by Iterator" << endl;
        cout << "6.Exit" << endl;
        cout << "Enter your Choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            do {
                cout << "Enter value to be inserted: ";
                cin >> item;
                st.insert(item);
                cout <<"\n Do you want to add more";
                cin >> ch;
            } while (ch == 1);
            break;
        case 2:
            cout << "Enter the element to be deleted: ";
            cin >> item;
            st.erase(item);
            break;
        case 3:
            cout << "Size of the Set: ";
            cout << st.size() << endl;
            break;
        case 4:
            cout << "Enter the element to be found: ";
            cin >> item;
            it = st.find(item);
            if (it != st.end())
                cout << "Element " << *it << " found in the set" << endl;
            else
                cout << "No Element Found" << endl;
            break;
        case 5:
            cout << "Displaying Map by Iterator: ";
            for (it = st.begin(); it != st.end(); it++) {
                cout << (*it) << " ";
            }
            cout << endl;
            break;
        case 6:
            exit(1);
            break;
        default:
            cout << "Wrong Choice" << endl;
        }
    }
    return 0;
}

/*
====OUTPUT====
---------------------
Set Implementation in Stl

---------------------
1.Insert Element into the Set
2.Delete Element of the Set
3.Size of the Set
4.Find Element in a Set
5.Display by Iterator
6.Exit
Enter your Choice: 1
Enter value to be inserted: 10

 Do you want to add more1
Enter value to be inserted: 20

 Do you want to add more1
Enter value to be inserted: 30

 Do you want to add more2

---------------------
Set Implementation in Stl

---------------------
1.Insert Element into the Set
2.Delete Element of the Set
3.Size of the Set
4.Find Element in a Set
5.Display by Iterator
6.Exit
Enter your Choice: 5
Displaying Map by Iterator: 10 20 30

---------------------
Set Implementation in Stl

---------------------
1.Insert Element into the Set
2.Delete Element of the Set
3.Size of the Set
4.Find Element in a Set
5.Display by Iterator
6.Exit
Enter your Choice: 4
Enter the element to be found: 20
Element 20 found in the set

---------------------
Set Implementation in Stl

---------------------
1.Insert Element into the Set
2.Delete Element of the Set
3.Size of the Set
4.Find Element in a Set
5.Display by Iterator
6.Exit
Enter your Choice: 3
Size of the Set: 3

---------------------
Set Implementation in Stl

---------------------
1.Insert Element into the Set
2.Delete Element of the Set
3.Size of the Set
4.Find Element in a Set
5.Display by Iterator
6.Exit
Enter your Choice: 2
Enter the element to be deleted: 20

---------------------
Set Implementation in Stl

---------------------
1.Insert Element into the Set
2.Delete Element of the Set
3.Size of the Set
4.Find Element in a Set
5.Display by Iterator
6.Exit
Enter your Choice: 4
Enter the element to be found: 20
No Element Found

---------------------
Set Implementation in Stl

---------------------
1.Insert Element into the Set
2.Delete Element of the Set
3.Size of the Set
4.Find Element in a Set
5.Display by Iterator
6.Exit
Enter your Choice: 6
*/
