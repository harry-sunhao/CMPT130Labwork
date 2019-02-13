#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;

void Q1()
{
	int a,sum=0;
	for(int i=0;i<10;i++)
	{
		cout<<"Enter a numbers."<<endl;
		cin>>a;
		sum+=a;
	}
	cout<<"The sum of ten numbers is "<<sum<<endl;
}
void Q2()
{
	int a,sum=0;
	for(int i=0;i<10;i++)
	{
		cout<<"Enter a numbers."<<endl;
		cin>>a;
		sum+=a;
	}
	cout<<"The average of ten numbers is "<<sum/10.0<<endl;
}
void Q3()
{
	/*
	reads in five integers
	the sum of only the positive inputs, 
	the average of only the positive inputs, 
	the sum of only the negative inputs, 
	the average of only the negative inputs, 
	the sum of all the inputs,
	the average of all the inputs.
	*/
	int SumOfPos=0,SumOfNeg=0,SumOfAll=0,i=1;
	double AveOfPos,AveOfNeg,AveOfAll,p=0,n=0;
	for(;i<=10;)
	{
		int a;
		cout<<"Please enter the No."<<i<<" intergers"<<endl;
		cin>>a;
		if(a<0)
		{
			SumOfNeg=SumOfNeg+a;
			SumOfAll+=a;
			n++;

		}
		else if(a>0)
		{
			SumOfPos+=a;
			SumOfAll+=a;
			p++;
		}
		i++;

	}
	if(p>0)
	{
		AveOfPos=SumOfPos/p;
		cout<<"The average of only the positive inputs is "<<AveOfPos<<endl;
	}
	else
		cout<<"There are no positive input"<<endl;
	if(n>0)
	{
		AveOfNeg=SumOfNeg/n;
		cout<<"The average of only the negative inputs is "<<AveOfNeg<<endl;

	}
	else
		cout<<"There are no negative input"<<endl;
	AveOfAll=SumOfAll/10.0;
	cout<<"The sum of only the positive inputs is "<<SumOfPos<<endl;
	cout<<"The sum of only the negative inputs is "<<SumOfNeg<<endl;
	cout<<"The sum of all the inputs is "<<SumOfAll<<endl;
	cout<<"The average of all the inputs is "<<AveOfAll<<endl;
}
void Q4()
{
	int n;
	cout<<"how many integers to read "<<endl;
	cin>>n;
	int SumOfPos=0,SumOfNeg=0,SumOfAll=0,i=1;
	double AveOfPos,AveOfNeg,AveOfAll,pos=0,neg=0;
	for(;i<=n;)
	{
		int a;
		cout<<"Please enter the No."<<i<<" intergers"<<endl;
		cin>>a;
		if(a<0)
		{
			SumOfNeg=SumOfNeg+a;
			SumOfAll+=a;
			neg++;

		}
		else if(a>0)
		{
			SumOfPos+=a;
			SumOfAll+=a;
			pos++;
		}
		i++;

	}
	if(pos>0)
	{
		AveOfPos=SumOfPos/pos;
		cout<<"The average of only the positive inputs is "<<AveOfPos<<endl;
	}
	else
		cout<<"There are no positive input"<<endl;
	if(neg>0)
	{
		AveOfNeg=SumOfNeg/neg;
		cout<<"The average of only the negative inputs is "<<AveOfNeg<<endl;
	}
	else
		cout<<"There are no negative input"<<endl;
	AveOfAll=SumOfAll/(n*1.0);
	cout<<"The sum of only the positive inputs is "<<SumOfPos<<endl;
	cout<<"The sum of only the negative inputs is "<<SumOfNeg<<endl;
	cout<<"The sum of all the inputs is "<<SumOfAll<<endl;
	cout<<"The average of all the inputs is "<<AveOfAll<<endl;
}
void Q6()
{
	int n=0;
	for(;n<=0;)
	{
		cout<<"how many integers to read "<<endl;
		cin>>n;
	}
	/*
	the sum of all even numbers, 
	the average of all even numbers, 
	the sum of all odd numbers, 
	the average of all odd numbers, 
	the sum of all the numbers
	the average of all numbers
	*/
	int SumOfEve=0,SumOfOdd=0,SumOfAll=0,i=1;
	double AveOfEve,AveOfOdd,AveOfAll,even=0,odd=0;
	for(;i<=n;)
	{
		int a;
		cout<<"Please enter the No."<<i<<" intergers"<<endl;
		cin>>a;
		if(a%2==0)
		{
			SumOfEve=SumOfEve+a;
			SumOfAll+=a;
			even++;

		}
		else
		{
			SumOfOdd+=a;
			SumOfAll+=a;
			odd++;
		}
		i++;

	}
	cout<<"The sum of only the even inputs is "<<SumOfEve<<endl;
	if(even>0)
	{
		AveOfEve=SumOfEve/even;
		cout<<"The average of only the even inputs is "<<AveOfEve<<endl;
	}
	else
		cout<<"There are no even input"<<endl;
	cout<<"The sum of only the odd inputs is "<<SumOfOdd<<endl;
	if(odd>0)
	{
		AveOfOdd=SumOfOdd/odd;
		cout<<"The average of only the odd inputs is "<<AveOfOdd<<endl;
	}
	else
		cout<<"There are no odd input"<<endl;
	AveOfAll=SumOfAll/(n*1.0);
	cout<<"The sum of all the inputs is "<<SumOfAll<<endl;
	cout<<"The average of all the inputs is "<<AveOfAll<<endl;

}
void Q7()
{
	int n=0,sum=1;
	for(;n<=0;)
	{
		cout<<"Enter a positive number"<<endl;
		cin>>n;
	}
	for(int i=1;i<=n;i++)
	{
		sum=sum*i;
		if(i==n)
		{
			cout<<i<<" = ";
		}
		else
			cout<<i<<" * ";
	}
	cout<<sum<<endl;
}
void Q8()
{
	int n=0,Max=0;
	for(;n<=0;)
	{
		cout<<"Enter a positive number"<<endl;
		cin>>n;
	}
	cout<<"Enter a number"<<endl;
	cin>>Max;
	for(int i=0;i<n-1;i++)
	{
		int a;
		cout<<"Enter a number"<<endl;
		cin>>a;
		if(a>Max)
		{
			Max=a;
		}
	}
	cout<<"The max number is "<<Max<<endl;
}
void Q9()
{
	int n=0,Min;
	for(;n<=0;)
	{
		cout<<"Enter a positive number"<<endl;
		cin>>n;
	}
	cout<<"Enter a number"<<endl;
	cin>>Min;
	for(int i=0;i<n-1;i++)
	{
		int a;
		cout<<"Enter a number"<<endl;
		cin>>a;
		if(a<Min)
		{
			Min=a;
		}
	}
	cout<<"The min number is "<<Min<<endl;
}
void Q10()
{
	int n=0,Max=0;
	for(;n<=0;)
	{
		cout<<"Enter a positive number"<<endl;
		cin>>n;
	}
	cout<<"Enter a number"<<endl;
	cin>>Max;
	for(int i=0;i<n-1;i++)
	{
		int a;
		cout<<"Enter a number"<<endl;
		cin>>a;
		if(abs(a)>abs(Max))
		{
			Max=a;
		}
	}
	cout<<"The abs max number is "<<Max<<endl;
}
void Q11()
{
	int n=0;
	double sum=0;
	for(;n<=0;)
	{
		cout<<"Enter a positive number"<<endl;
		cin>>n;
	}
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			sum=sum-(1.0/i);
		}
		else
			sum=sum+(1.0/i);
	}
	cout<<"The sum of number is "<<sum<<endl;
}
void Q12()
{
	int n=0,m=0;
	for(;n<=2;)
	{
		cout<<"Enter a number greater than 2"<<endl;
		cin>>n;
	}
	for(int i=2;i<n-1;i++)
	{
		if(n%i==0)
		{
			m=1;
		}
	}
	if(m==0)
	{
		cout<<"The number is prime"<<endl;
	}
	else
		cout<<"The number is not prime"<<endl;
}
void Q13()
{
	int n=0,m=0;
	for(;n<=2;)
	{
		cout<<"Enter a number greater than 2"<<endl;
		cin>>n;
	}
	for(int i=2;i<n-1;i++)
	{
		if(n%i==0)
		{
			m=1;
		}
	}
	if(m==0)
	{
		cout<<"The number is not composite"<<endl;
	}
	else
		cout<<"The number is composite"<<endl;
}
void Q14()
{
	int a=1,b=1;
	cout<<a<<" "<<b<<" ";
	for(int i=2;i<=20;i++)
	{
		int sum=a+b;
		cout<<sum<<" ";
		a=b;
		b=sum;

	}
}
void Q15()
{
	int n=0,m=0,Min=0;
	for(;n<=0;)
	{
		cout<<"Enter a number greater than 0"<<endl;
		cin>>n;
	}
	if(n==1)
	{
		m=0;
	}
	else
	{
		cout<<"Enter a number"<<endl;
		cin>>Min;
		for(int i=1;i<n;i++)
		{
			cout<<"Enter a number"<<endl;
			int n;
			cin>>n;
			if(n<Min)
			{
				m=1;
			}
			Min=n;
		}
	}
	if(m==0)
	{
		cout<<"The numbers you entered are in increasing order"<<endl;
	}
	else
		cout<<"The numbers you entered are not in increasing order"<<endl;
}
void Q16()
{
	int n=0,m=0,Min=0;
	for(;n<=0;)
	{
		cout<<"Enter a number greater than 0"<<endl;
		cin>>n;
	}
	if(n==1)
	{
		cout<<"This is no definition"<<endl;
	}
	else
	{
		cout<<"Enter a number"<<endl;
		cin>>Min;
		for(int i=1;i<n;i++)
		{
			cout<<"Enter a number"<<endl;
			int n;
			cin>>n;
			if(n<=Min)
			{
				m=1;
			}
			Min=n;
		}
	}
	if(m==0)
	{
		cout<<" The numbers you entered are in strictly increasing order"<<endl;
	}
	else
		cout<<" The numbers you entered are not in strictly increasing order"<<endl;
}
void Q17()
{
	int n=0,m=0,Min=0;
	for(;n<=0;)
	{
		cout<<"Enter a number greater than 0"<<endl;
		cin>>n;
	}
	if(n==1)
	{
		m=0;
	}
	else
	{
		cout<<"Enter a number"<<endl;
		cin>>Min;
		for(int i=1;i<n;i++)
		{
			cout<<"Enter a number"<<endl;
			int n;
			cin>>n;
			if(n>Min)
			{
				m=1;
			}
			Min=n;
		}
	}
	if(m==0)
	{
		cout<<"The numbers you entered are in decreasing order"<<endl;
	}
	else
		cout<<"The numbers you entered are not in decreasing order"<<endl;
}
void Q18()
{
	int n=0,m=0,Min=0;
	for(;n<=0;)
	{
		cout<<"Enter a number greater than 0"<<endl;
		cin>>n;
	}
	if(n==1)
	{
		cout<<"This is no definition"<<endl;
	}
	else
	{
		cout<<"Enter a number"<<endl;
		cin>>Min;
		for(int i=1;i<n;i++)
		{
			cout<<"Enter a number"<<endl;
			int n;
			cin>>n;
			if(n>=Min)
			{
				m=1;
			}
			Min=n;
		}
	}
	if(m==0)
	{
		cout<<" The numbers you entered are in strictly decreasing order"<<endl;
	}
	else
		cout<<" The numbers you entered are not in strictly decreasing order"<<endl;
}
void Q19()
{
	for(int i=10;i>0;i--)
	{
		cout<<"*";
		for(int j=i-1;j>0;j--)
		{
			cout<<" ";
		}
	}
	//cout<<endl;
}
void Q20()
{
	for(int i=1;i<=50;i++)
	{
		cout<<"*";
		if(i%5==0)
		{
			cout<<endl;
		}
	}
}
void Q21()
{
	char a,b,c;
	int  n=0,sum=0,s_a=0;
	for(;n<3||n>5;)
	{
		cout<<"Enter a number between 3 and 5"<<endl;
		cin>>n;
	}
	for(int i=0;i<n;i++)
	{
		cout<<"Enter a card"<<endl;
		cin>>a;
		if(a>=50&&a<=57)
		{
			sum=sum+a-48;
		}
		else if(a=='T'||a=='J'||a=='Q'||a=='K')
		{
			sum+=10;
		}
		else if(a=='A')
		{
			s_a++;
			sum+=11;
		}
	}
	//Get A value
	for(;s_a>=1&&sum>21;s_a--)
	{
		sum-=10;
	}
	if(sum>=21)
	{
		cout<<"busted"<<endl;
	}
	else if(sum==21)
	{
		cout<<"Better score"<<endl;
	}
	else
		cout<<sum<<endl;
}
void PQ1()
{
	for(int i=0;i<=28;i+=2)
	{
		cout<<i<<",";
	}
}
void PQ2()
{
	int n;
	cout<<"Enter a positive number"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<i<<",";
	}
}
void PQ3()
{
	srand(time(0));
	cout<<"Enter a number"<<endl;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a=-10,b=10;
		int count = b-a+1;
		cout<<(rand()%count+a)<<endl;
	}
}
void PQ4()
{
	//sum, the product and the minimum of the numbers
	srand(time(0));
	cout<<"Enter a number"<<endl;
	int n,sum=0,pro=1,Min,num;
	cin>>n;
	int a=-10,b=10;
	int count = b-a+1;
	Min=rand()%count+a;
	sum+=Min;
	pro*=Min;
	cout<<Min<<endl;
	for(int i=0;i<n-1;i++)
	{
		num=rand()%count+a;
		sum+=num;
		pro*=num;
		if(num<Min)
		{
			Min=num;
		}
		cout<<num<<endl;
	}
	cout<<"The sum is "<<sum<<endl;
	cout<<"The product is "<<pro<<endl;
	cout<<"The minimum is"<<Min<<endl;
}
void PQ5()
{
	srand(time(0));
	int a=-10,b=15;
	int count =b-a+1;
	int num1=rand()%count+1;
	int num2=rand()%count+1;
	cout<<num1<<num2<<endl;
	if(num1<num2)
	{
		/*int temp=num2;
		num2=num1;
		num1=temp;
		*/
		for(int i=num1+1;i<num2;i++)
		{
			cout<<i<<endl;
		}
	}
	else 
	{
		for(int i=num2+1;i<num1;i++)
		{
			cout<<i<<endl;
		}
	}
	
}
void PQ6()
{
	int i;
	for(i=7;i%41!=0;i=i+3)
	{
		cout<<i<<endl;
	}
	//cout<<i<<endl;
}
void PQ7()
{
	int n=0,m=0;
	bool IsPrime=true;
	for(;n<=2;)
	{
		cout<<"Enter a number greater than 2"<<endl;
		cin>>n;
	}
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			IsPrime=false;
			//cout<<"The number is not prime"<<endl;
			//break;
		}
		
	}
	//cout<<"The number is prime"<<endl;
	//
	if(IsPrime)
	{
		cout<<"The number is prime"<<endl;
	}
	else
		cout<<"The number is not prime"<<endl;
}
int main()
{
	srand(time(0));
	double a=-2,b=3,count;
	count=b-a+1;
	for(int i=0;i<10;i++)
	{
		cout<<(double)rand()/RAND_MAX*count+a<<endl;
	}
	//PQ7();
	//Q20();
	system("Pause");
	return 0;
}
