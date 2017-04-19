#include<stdio.h>

#include<iostream>



using namespace std;

int c = 0;

struct adj_list

{

    int dest;

    adj_list *next;

}*newptr = NULL, *newptr1 = NULL, *p = NULL, *q = NULL;

struct Graph

{

    int v;

    adj_list *ptr;

}array[5];

void addReverseEdge(int src,int dest)

{

    newptr1 = new adj_list;

    newptr1->dest = src;

    newptr1->next = NULL;

    if (array[dest].ptr == NULL)

    {

        array[dest].ptr = newptr1;

        q = array[dest].ptr;

        q->next = NULL;

    }

    else

    {

        q = array[dest].ptr;

        while (q->next != NULL)

        {

            q = q->next;

        }

        q->next = newptr1;

    }

}

void addEdge(int src,int dest)

{

    newptr = new adj_list;

    newptr->dest = dest;

    newptr->next = NULL;

    if (array[src].ptr == NULL)

    {

        array[src].ptr = newptr;

        p = array[src].ptr;

        p->next = NULL;

    }

    else

    {

        p = array[src].ptr;

        while (p->next != NULL)

        {

            p = p->next;

        }

        p->next = newptr;

    }

    addReverseEdge(src,dest);

}

void print_graph(int n)

{

    for (int i = 0; i < n; i++)

    {

        cout<<"Adjacency List of "<<array[i].v<<endl;

        while (array[i].ptr != NULL)

        {

            cout<<(array[i].ptr)->dest<<"\t";

            array[i].ptr = (array[i].ptr)->next;

        }

        cout<<endl;

    }

}

int main()

{

    int n;
	int s,d;

    cout<<"Enter the no of vertices\n";

    cin>>n;

    for (int i = 0; i < n; i++)

    {

        array[i].v = i;

        array[i].ptr = NULL;

    }
		int choice=0;
	do 
	{
		cout << "Enter two edge to be connected: ";
		cin >> s >> d;
		addEdge(s,d);
		cout << "Connect another edge?(0\\1) ";
		cin >> choice;
	}while(choice);

    print_graph(n);



}

/*

 Enter the no of vertices
5
Adjacency List of 0
1	3
Adjacency List of 1
0	1	1	4
Adjacency List of 2
2	2	3
Adjacency List of 3
0	2	4
Adjacency List of 4
1	3	5

 */
 
