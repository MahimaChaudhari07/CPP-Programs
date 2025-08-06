#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char str[10];
	int i=0,length=0;
	clrscr();
	cout<<"Enter a string:";
	cin>>str;
	cout<<"String:"<<str<<endl;
	while(str[length]!='\0')
	{
		length++;
	}
	/*for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	*/
	cout<<"Length of string:"<<length<<endl;

//REVERSE
	cout<<"Reverse String:";
	length=length-1;
	while(length>=0)
	{
		cout<<str[length];
		length--;
	}
//PALINDROME
int start=0,end=length-1,flag;
while(end<start)
{
	end!=str[length];
	flag==0;

}
if flag==0
cout<<"not palindrome";
else
cout<<"palindrome";
getch();
}

