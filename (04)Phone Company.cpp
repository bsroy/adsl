//Assignment No: 04
#include <iostream>
#include <string.h>

using namespace std;

#define row 10
#define col 10
#define infi 999

class prims
    {
    char name[10][10];
    int graph[row][col], n;

public:
    prims()
    {
        n = 0;
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
                graph[i][j] = 0;
    }
    void read();
    void prims_algo();
};

void prims::read()
{
    int i, j;
    cout << "Enter No. of Offices : ";
    cin >> n;
    cout << "Enter the names of Offices:";
    for (i = 0; i < n; i++)
        cin >> name[i];
    cout << "\n\nEnter Cost to connect Each office : \n";

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (strcmp(name[i], name[j]) != 0 && graph[i][j] == 0)
            {
                cout << "\nEnter Cost to connect Office " << name[i] << " and " << name[j] << " : ";
                cin >> graph[i][j];
                graph[j][i] = graph[i][j];

                if (graph[i][j] == 0)
                    graph[i][j] = infi;
            }
            else if (graph[i][j] == 0)
                graph[i][j] = infi;
        }
    }

    cout << "\n\nCost Matrix : \n";

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << graph[i][j] << "\t";
        }
        cout << "\n";
    }
}

void prims::prims_algo()
{
    int selected[row], i, j, no_of_edges, min, x, y;
    for (i = 0; i < n; i++)
        selected[i] = false;
    selected[0] = true;
    no_of_edges = 0;
    while (no_of_edges < n - 1)
    {
        min = infi;
        for (i = 0; i < n; i++)
        {
            if (selected[i] == true)
            {
                for (j = 0; j < n; j++)
                {
                    if (selected[j] == false)
                    {
                        if (min > graph[i][j])
                        {
                            min = graph[i][j];
                            x = i;
                            y = j;
                        }
                    }
                }
            }
        }
        selected[y] = true;
        cout << "\n" << name[x] << " --> " << name[y];
        no_of_edges = no_of_edges + 1;
    }
}

int main()
{
    prims p;
    p.read();
    cout << "\n Set of lines that connects all offices with minimum cost:";
    p.prims_algo();
}

/*
====OUTPUT====
Enter No. of Offices : 4
Enter the names of Offices:Office1
Office2
Office3
Office4


Enter Cost to connect Each office :

Enter Cost to connect Office Office1 and Office2 : 3

Enter Cost to connect Office Office1 and Office3 : 7

Enter Cost to connect Office Office1 and Office4 : 5

Enter Cost to connect Office Office2 and Office3 : 6

Enter Cost to connect Office Office2 and Office4 : 1

Enter Cost to connect Office Office3 and Office4 : 2


Cost Matrix :
999     3       7       5
3       999     6       1
7       6       999     2
5       1       2       999

 Set of lines that connects all offices with minimum cost:
Office1 --> Office2
Office2 --> Office4
Office4 --> Office3
Process returned 0 (0x0)   execution time : 83.626 s
Press any key to continue.
*/
