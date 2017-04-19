#include <iostream>
using namespace std;
int main()
{
    float e[100][100], w[100][100], p[100], t;
    int i, n, j, l, r, root[100][100], k[100];
    cout << "this is optimal binary search tree\n";
    cout << "enter the value of n\n";
    cin >> n;
    cout << "enter the values of the keys & probability\n";
    for (i = 1; i <= n; i++) {
        cin >> k[i];
        cin >> p[i];
    }
    for (i = 1; i <= n + 1; i++) {
        e[i][i - 1] = 0;
        w[i][i - 1] = 0;
    }

    for (l = 1; l <= n; l++) {
        for (i = 1; i <= n - l + 1; i++) {
            j = i + l - 1;
            e[i][j] = 100.0;
            w[i][j] = w[i][j - 1] + p[j];
            for (r = i; r <= j; r++) {
                t = e[i][r - 1] + e[r + 1][j] + w[i][j];
                if (t < e[i][j]) {
                    e[i][j] = t;
                    root[i][j] = r;
                }
            }
        }
    }
    cout << "the result is\n";
    cout << "values of e are:\n";
    for (i = 1; i <= n + 1; i++) {
        for (j = 0; j <= n; j++) {
            cout << "\t" << e[i][j];
        }
        cout << "\n";
    }
    cout << "\n values of root are:\n";
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            cout << root[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "value of optimal search cost is:\n";
    cout << e[1][n];
    cout << "\n";
    cout << "\n value of root is:\n";
    cout << root[1][n];
    cout << "\n";
    return 0;
}

/*
====OUTPUT====
this is optimal binary search tree
enter the value of n
4
enter the values of the keys & probability
1 0.3
2 0.2
3 0.1
4 0.4
the result is
values of e are:
        0       0.3     0.7     1       1.9
        0       0       0.2     0.4     1.1
        0       0       0       0.1     0.6
        0       0       0       0       0.4
        0       0       0       0       0

 values of root are:
1       1       1       2
0       2       2       4
0       0       3       4
0       0       0       4
value of optimal search cost is:
1.9

 value of root is:
2

*/
