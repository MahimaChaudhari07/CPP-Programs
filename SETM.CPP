#include<iostream.h>
#include<conio.h>
#include<stdio.h>

#define  bool
#define true 1
#define false 0

bool ismember(int set[],int size,int element)
{
	for(int i=0;i<size;i++)
	{
		if(set[i]==element)
		return true;
	}
	return false;
}

void displayset(int set[],int size)
{
	cout<<"{ ";
	for(int i=0;i<size;i++)
	{
		cout<<set[i];
		if(i < size-1)
		cout<<",";
	}
	cout<<"}"<<endl;
}

int setunion(int A[],int sizeA,int B[], int sizeB,int result[])
{
	int k=0;
	for(int i=0;i<sizeA;i++)
	{
		result[k++]=A[i];
	}
	for(i=0;i<sizeB;i++)
	{
		if(!ismember( A , sizeA, B[i]))
		{
			(result[k++]=B[i]);
		}
	}
	return k;
}
void main()
{
	clrscr();
	int A[]={1,2,3,4,5};
	int B[]={4,5,6,7};
	int result[100];
	int sizeA= 5;
	int sizeB= 4;

	cout<<"Set A:";

	displayset(A, sizeA);

	cout<<"Set B:";
	displayset(B, sizeB);

	int resultsize= setunion(A, sizeA,B, sizeB,result);

	cout<<"Union of A and B:";
	displayset(result, resultsize);

	getch();

}


