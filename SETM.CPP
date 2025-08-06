#include<iostream.h>
#include<conio.h>
#include<stdio.h>

bool ismember(int set[],int size,int element)
{
	for(i=0;i<size;i++)
	{
		if set[i]==element)
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
		if(i<size-1) cout<<",";
	}
	cout<<"}"<<endl;
}

int setunion(int A[],int sizeA,intB[],int result[])
{
	int k=0;
	for(int i=0;i<sizeA;i++)
	{
		result[k++]=A[i];
	}
	for(int i=0;i<sizeB;i++)
	{
		if(!ismember(A,sizeA,B[i])
		{
			result[k++]=B[i];
		}
	}
	return k;
}


