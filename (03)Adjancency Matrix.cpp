#include<iostream>

using namespace std;

class graph{

public:


	void create();
	void input();
	void print();
	void Edge_Count();
	int G_mat[10][10];
	int entry_mat[10][10];
	int n,i,j;
	int k;
	graph(){
		k = 0;
	}
};

void graph ::create()
{
	cout<<"\nEnter Vertices number of Vertices:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			G_mat[i][j]=0;
		}
	}

}

void graph ::input()
{

	int a,b,cont;
	do
	{
	cout<<"\nEnter Adjacent Vertices:";
	cin>>a>>b;
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
			   if(i==a && j==b && G_mat[a][b]==0 )
			   {
				   G_mat[i][j]=1;
				   G_mat[j][i]=1;
				   ++k;


			   }
			}
		}
	cout<<"\nDo you want to add Edges[1/0]";
	cin>>cont;
	}while(cont==1);

}


void graph :: print()
{
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<G_mat[i][j]<<" ";
			}
			cout<<"\n";
		}

}
void graph :: Edge_Count()
{
	cout<<"\nNumber of Edges Are:"<<k;

}

int main()
{
	int ch,cont;
	graph G;
	G.create();
	do{
	cout<<"\nWhich Operation to Perform:"
			"\n1.Input"
			"\n2.Print"
			"\n3.Number of Edges";
	cin>>ch;
	if(ch==1)
	{
	G.input();
	}
	if(ch==2)
	{
	G.print();
	}
	if(ch==3)
	{
		G.Edge_Count();
	}
	cout<<"\nDo you Want To Perform operations[1/0]";
	cin>>cont;
	}while(cont==1);
	return 0;
}

/*


Enter Vertices number of Vertices:5

Which Operation to Perform:
1.Input
2.Print
3.Number of Edges1

Enter Adjacent Vertices:0 3

Do you want to add Edges[1/0]1

Enter Adjacent Vertices:0 4

Do you want to add Edges[1/0]1

Enter Adjacent Vertices:1 3

Do you want to add Edges[1/0]1

Enter Adjacent Vertices:1 4

Do you want to add Edges[1/0]1

Enter Adjacent Vertices:2 3

Do you want to add Edges[1/0]1

Enter Adjacent Vertices:3 4

Do you want to add Edges[1/0]1

Enter Adjacent Vertices:4
4

Do you want to add Edges[1/0]0

Do you Want To Perform operations[1/0]1

Which Operation to Perform:
1.Input
2.Print
3.Number of Edges2
0 0 0 1 1 
0 0 0 1 1 
0 0 0 1 0 
1 1 1 0 1 
1 1 0 1 1 

Do you Want To Perform operations[1/0]1

Which Operation to Perform:
1.Input
2.Print
3.Number of Edges3

Number of Edges Are:7
Do you Want To Perform operations[1/0]0
*/
