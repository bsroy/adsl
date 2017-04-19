#include<iostream>
#include<cstring>
using namespace std;

#define tphone_book_size 10
#define true 1
#define false 0


int hno;
class tbook
{
public:
	int key;
	long long signed int tel_no;
	char name[30];
};
void insert(tbook client[],int flag[],int key);
int search(tbook client[],int flag[],int key);
void disp(tbook client[],int flag[]);
int hashfn(int hno);

int hashfn(int hno)
{   int temp;
	temp=hno%tphone_book_size;
	return temp;
}
void insert(tbook client[],int flag[],int keyx)
{
	int i,j;
	j=hashfn(keyx);
	for (i=0;i<tphone_book_size;i++)
	{
		if (flag[j]==false)
		{
			client[j].key=keyx;
			cout<<"\n Enter name of client  ";
			cin>>client[j].name;
            cout<<"\nEnter telephone number :  ";
			cin>>client[j].tel_no;

			flag[j]=true;
			return;
		}
		else
			j=(j+1)%tphone_book_size;

	}
	if (i==tphone_book_size) cout<<"\n Hash table is full";

}

int search(tbook client[],int flag[],int keyx)
{
	int i,j;
	j=hashfn(keyx);
	for (i=0;i<tphone_book_size;i++)
		if (flag[j]==true && client[j].key==keyx)
			return(j);
		else
			j=(j+1)%tphone_book_size;
	return (-1);

}
void disp(tbook client[],int flag[])
{
	int i;
	cout<<"\n Key No Client  name  Telephone no."<<"  Name  ";
	for (i=0;i<tphone_book_size;i++)
	{
		if (flag[i])
		cout<<"\n(" <<i<<")   "<<client[i].key<<"   "<<client[i].name<<"  "<<client[i].tel_no;
		else
			cout<<"\n(" <<i<<")   "<<"----";
	}
}

int main(void)
{
	int flag[tphone_book_size],i,choice,locn;
	tbook client[tphone_book_size];
	for (i=0;i<tphone_book_size;i++)
		flag[i]=false;
	cout<<" \n Telephone book details \n\n";
	do
	{
		cout<<"\n1. Insert new client ";
		cout<<"\n2. Search client ";
		cout<<"\n3. Display telephone book details";
		cout<<"\n\n Enter your choice: ";
		cin>>choice;
		int keyval;
		switch(choice)
		{
		case 1:  cout<<"\n Enter client details: ";
		         cout<<"\n Enter client key value: ";
		         cin>>keyval;
		         insert(client,flag,keyval);
		         break;
		case 2: cout<<"\n Enter client to be searched: ";
		        cin>>keyval;
		        if ((locn=search(client,flag,keyval))==-1)
			        cout<<"\n Client details not found\n";
		else
			cout<<"\n Client details found at location: "<<locn;
		    break;
		case 3: disp(client,flag);
		    break;
 		}
	  } while (choice!=4);
	  return 0;
}


/*
====OUTPUT====
 Telephone book details


1. Insert new client
2. Search client
3. Display telephone book details

 Enter your choice: 1

 Enter client details:
 Enter client key value: 1

 Enter name of client  Shubham

Enter telephone number :  8149136545

1. Insert new client
2. Search client
3. Display telephone book details

 Enter your choice: 1

 Enter client details:
 Enter client key value: 2

 Enter name of client  Prashant

Enter telephone number :  9988553322

1. Insert new client
2. Search client
3. Display telephone book details

 Enter your choice: 1

 Enter client details:
 Enter client key value: 5

 Enter name of client  Avaneesh

Enter telephone number :  8020501998

1. Insert new client
2. Search client
3. Display telephone book details

 Enter your choice: 3

 Key No Client  name  Telephone no.  Name
(0)   ----
(1)   1   Shubham  8149136545
(2)   2   Prashant  9988553322
(3)   ----
(4)   ----
(5)   5   Avaneesh  8020501998
(6)   ----
(7)   ----
(8)   ----
(9)   ----
1. Insert new client
2. Search client
3. Display telephone book details

 Enter your choice: 2

 Enter client to be searched: 5

 Client details found at location: 5
1. Insert new client
2. Search client
3. Display telephone book details

 Enter your choice: 2

 Enter client to be searched: 7

 Client details not found

1. Insert new client
2. Search client
3. Display telephone book details

 Enter your choice:
*/
