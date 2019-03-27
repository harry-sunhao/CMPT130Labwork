#include<iostream>
#include<ctime>

using namespace std;

int stringLength(const char A[])
{
    int index =0;
    while(A[index]!='\0')
    {
        index++;
    }
    return index;
}
char *getDuplicateThree(const char A[])
{
	int O_len=stringLength(A);
	int N_len=O_len*3+1;
	char *B=new char [N_len];
	for(int i=0,j=0;i<N_len-1;)
	{
		for(int k=0;k<3;k++)
		{
			B[i]=A[j];
			i++;
		}
		j++;
	}
	B[N_len-1]='\0';
	return B;
}
int main()
{
	srand(time(0));
	const int size1 =rand()%10+5;
	const int size2=rand()%5+10;
	char *temp=new char[size1+1];
	for(int i=0;i<size1;i++)
		temp[i]=97+rand()%26;
	temp[size1]='\0';
	const char *C1=temp;
	
	temp =new char[size2+1];
	for(int i=0;i<size2;i++)
		temp[i]=65+rand()%26;
	temp[size2]='\0';
	const char *C2=temp;
	
	char *C3=getDuplicateThree(C1);
	char *C4=getDuplicateThree(C2);
	
	cout<<C1<<endl;
	cout<<C2<<endl;
	cout<<C3<<endl;
	cout<<C4<<endl;
	
	delete[] C1;
	delete[] C2;
	delete[] C3;
	delete[] C4;
	system("Pause");
	return 0;
}
