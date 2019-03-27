#include<iostream>
using namespace std;

int stringLength(char A[])
{
	int index=0;
	while(A[index]!='\0')
		index++;
	return index;
}
bool searchElement(char A[],char b)
{
	int len=stringLength(A);
	for(int i=0;i<len;i++)
	{
		if(A[i]==b)
			return true;
	}
	return false;
}
bool Q1(char A[],char B[])
{
	int len=stringLength(A);
	for(int i=0;i<len;i++)
	{
		if(searchElement(B,A[i])==false)
			return false;
	}
	return true;
}
bool Q2(char A[],char B[])//sort A not B
{
	char Max=B[0],Min=B[0];
	int len=stringLength(B);
	for(int i=0;i<len;i++)
	{
		if(B[i]<Min)
			Min=B[i];
		if(B[i]>Max)
			Max=B[i];
	}
	len=stringLength(A);
	if(A[0]>=Min&&A[len]<=Max)
		return true;
	return false;
}
bool Q3(char A[],char B[])//sort B not A
{
	char Max=B[0],Min=B[0];
	int len=stringLength(A);
	for(int i=0;i<len;i++)
	{
		if(A[i]<Min)
			Min=A[i];
		if(A[i]>Max)
			Max=A[i];
	}
	len=stringLength(B);
	if(B[0]<=Min&&B[len]>=Max)
		return true;
	return false;
}
bool Q4(char A[],char B[])//sort A and B
{
	if(A[0]>=B[0]&&A[stringLengh(A)]<=A[stringLengh(B)])
		return true;
	return false;
}
int main()
{
	system("Pause");
	return 0;
}
