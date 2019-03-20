#include<iostream>
#include<cstring>
#include<cstdlib>
#include<ctime>
using namespace std;
int stringLength(char A[])
{
	int index =0;
	while(A[index]!='\0')
	{
		index++;
	}
	return index;
}
bool isFound(char A[],char x)
{
	int index=0;
	while(A[index]!='\0')
	{
		if(A[index]==x)
			return true;
		index++;
	}
	return false;
}
