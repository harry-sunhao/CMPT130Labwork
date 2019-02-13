#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

void Q3()
{
	cout<<"Please enter the coefficients of the quadratic equation ax2 + bx + c = 0(a,b,c)"<<endl;
	float a,b,c,result;
	cin>>a>>b>>c;
	result=b*b-4*a*c;
	if(result>=0)
	{
		result=sqrt(result);
	}
	cout<<result<<endl;;
	if(result<0)
	{
		cout<<"It's no solutions"<<endl;
	}
	else if(result==0)
	{
		cout<<"It's one solution"<<endl;
		cout<<"It's "<<(-b)/(2*a)<<endl;
	}
	else
	{
		cout<<"It's two solutions"<<endl;
		cout<<"It's "<<(-b+result)/(2*a)<<" and "<<(-b-result)/(2*a)<<endl;
	}
}
void Q4()
{
	cout<<"Please enter the number of hours worked in a week and the number of dependents"<<endl;
	int dependent;
	//6% is withheld for Social Security tax, 14% is withheld for federal income tax, 5% is withheld for state income tax, and $10 per week is withheld for union dues.
	double hour,summary_pre,summary,SocialSecurityTax,FederalIncomTex,StateIncomeTax,UnionDues,HealthInsurance;
	cin>>hour>>dependent;
	if(hour>40)
	{
		summary_pre=40*16.78+(hour-40)*16.78*1.5;
		
	}
	else 
		summary_pre=hour*16.78;
	SocialSecurityTax=summary_pre*0.06;
	FederalIncomTex=summary_pre*0.14;
	StateIncomeTax=summary_pre*0.05;
	UnionDues=10;
	if(dependent>=3)
	{
		HealthInsurance=35;
	}
	else 
		HealthInsurance=0;
	summary=summary_pre-SocialSecurityTax-FederalIncomTex-StateIncomeTax-UnionDues-HealthInsurance;
	//output the worker’s gross pay, each withholding amount, and the net take-home pay for the week.
	cout<<"The gross pay is "<<summary_pre<<endl;
	cout<<"The Social Security Tax is "<<SocialSecurityTax<<endl;
	cout<<"The Federal Income Tex is "<<FederalIncomTex<<endl;
	cout<<"The State IncomeTax is "<<StateIncomeTax<<endl;
	cout<<"The UnionDues  is "<<UnionDues<<endl;
	cout<<"The Health Insurance is"<<HealthInsurance<<endl;
	cout<<"The net take-home pay is "<<summary<<endl;
}
void Q5()
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
	cout<<"Please enter the five intergers"<<endl;
	cout<<endl;
	int SumOfPos=0,SumOfNeg=0,SumOfAll=0,i=1;
	double AveOfPos,AveOfNeg,AveOfAll,p=0,n=0;
	do
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

	}while(i<=5);
	if(p>0)
	{
		AveOfPos=SumOfPos/p;
		cout<<"The average of only the positive inputs is "<<AveOfPos<<endl;
	}
	else
		cout<<"No positive inputs"<<endl;
	if(n>0)
	{
		AveOfNeg=SumOfNeg/n;
		cout<<"The average of only the negative inputs is "<<AveOfNeg<<endl;
	}
	else 
		cout<<"No negative inputs"<<endl;
	AveOfAll=SumOfAll/5.0;
	cout<<"The sum of only the positive inputs is "<<SumOfPos<<endl;	
	cout<<"The sum of only the negative inputs is "<<SumOfNeg<<endl;
	cout<<"The sum of all the inputs is "<<SumOfAll<<endl;
	cout<<"The average of all the inputs is "<<AveOfAll<<endl;
}
void Q6()
{
	srand(time(0));
	int a=-1,b=1;
	cout<<(rand() % (b-a+1))+ a;

}
void Q7()
{
	srand(time(0));;
	double a=-1.0,b=1.0;
	cout<<(rand() / (double)RAND_MAX *(b-a))+ a;

}
void Q8()
{
	cout<<"Enter the two numbers"<<endl;
	int a,b,temp;
	if(a>b)
	{
		temp=b;
		b=a;
		a=temp;
	}
	srand(time(0));
	cout<<(rand() % (b-a+1))+ a;
}
void Q9()
{
	cout<<"Enter the two numbers"<<endl;
	double a,b,temp;
	if(a>b)
	{
		temp=b;
		b=a;
		a=temp;
	}
	srand(time(0));
	cout<<(rand() /(double)RAND_MAX* (b-a+1))+ a;
}
void Q10()
{
	cout<<"Enter a char"<<endl;
	char a;
	cin>>a;
	if(a>=48&&a<=57)
	{
		cout<<"The character you entered is a digit"<<endl;
	}
	else if(a>=65&&a<=90)
	{
		cout<<"The character you entered is an upper case"<<endl;
	}
	else if(a>=97&&a<=122)
	{
		cout<<"The character you entered is a lower case"<<endl;
	}
	else 
		cout<<"The character you entered is neither an English alphabet nor a digit."<<endl;
}
void Q11()
{
	/*
		Declares the four float variables size_smaller, size_larger, price_smaller, and price_larger,
		Reads the size and price of a smaller pizza in the variables size_smaller and price_smaller,
		Reads the size and price of a larger pizza in the variables size_larger and price_larger,
		Declare two float variables area_smaller and area_larger
		Compute the area of each pizza in the variables area_smaller and area_larger. Use the value 3.14 for pi
		Compute the price per square inch for each pizza and determine which pizza is a better buy.
		NOTE: The pizza that has lower price per square inch is the better buy.
	*/
	float size_smaller, size_larger, price_smaller,price_larger,area_smaller,area_larger,pi=3.14;
	cout<<"Enter the size and price of a smaller pizza"<<endl;
	cin>>size_smaller>>price_smaller;
	area_smaller=(size_smaller/2)*(size_smaller/2)*pi;
	cout<<"Enter the size and price of a larger pizza"<<endl;
	cin>>size_larger>>price_larger;
	area_larger=(size_larger/2)*(size_larger/2)*pi;
	if((price_larger/area_larger)>(price_smaller/area_smaller))
	{
		cout<<"Large is Ok"<<endl;
	}
	else
		cout<<"Small is Ok"<<endl;

}
void Q12()
{
	/*
	totalAmount = principalAmount * (1.0 + rateOfInterest * timePeriod)
	Principal Amount   Rate of Interest  
	[0.00, 1000.00)		2.5%
	[1000.0, 10,000.00)	2.0%
	[10,000.00, 100,000.00)	1.5%
	>= 100,000.00	1.0%
	- Ask the user for the principal amount
	- Ask the user for the number of years
	- If principal amount is less than 0 or the number of years is less than 0, then print an error message and do nothing
	- Else, calculate the accrued total amount and print it
	*/
	cout<<"Enter your principal amount and the number of years"<<endl;
	double amount=0,year=0,rate;
	cin>>amount>>year;
	if(amount<=0||year<=0)
	{
		cout<<"Error,please enter the correct value."<<endl;
		return;
	}
	else if(amount<1000)
	{
		rate=0.25;
	}
	else if(amount<10000.00)
	{
		rate=0.20;
	}
	else if(amount<100000.00)
	{
		rate=0.15;
	}
	else rate=0.1;
	cout<<"The totalAmount is "<<amount*(1+rate*year)<<endl;
}
void Q13()
{
	srand(time(0));
	int a=65,b=90;
	char randnumber,o_rand;
	for(int i=0;i<=10;i++)
	{
		randnumber=(rand() % (b-a+1))+ a;
		o_rand=randnumber;
		randnumber+=10;
		/*if(randnumber>90)
		{
			randnumber=64+(randnumber-90);
		}
		*/
		randnumber=(randnumber-65)%26+65;
		cout<<"the random character is "<<o_rand<<" then the character is "<<randnumber<<endl;
	}

}
void Q14(double x,double y,double z)
{
	double a,b,c,s,area;
	if(x!=0&&y!=0&&z!=0)
	{
		a=x;
		b=y;
		c=z;
	}
	else
	{
	cout<<"Enter the three sides(a,b,c) of a triangle"<<endl;
	cin>>a>>b>>c;
	}
	if(a + b >= c && a + c >= b && b + c >= a)
	{
		s=(a+b+c)/2;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		cout<<"The area is "<<area<<endl;

	}
	else
	{
		cout<<"Error,this three sides can not inequality holds"<<endl;
		return;
	}

}
double Q15(double x1,double x2,double y1,double y2)
{
	double s=sqrt((x1 - x2)*(x1 - x2) + (y1 - y2) * (y1 - y2));
	cout<<"The length of the line segment connecting the two points P1("<<x1<<", "<<y1<<") and P2("<<x2<<", "<<y2<<") is "<<s<<endl;
	return s;
}
void Q16()
{
	double x1,x2,x3,y1,y2,y3,l1,l2,l3;
	cout<<"Enter the first point(x,y)"<<endl;
	cin>>x1>>y1;
	cout<<"Enter the second point(x,y)"<<endl;
	cin>>x2>>y2;
	cout<<"Enter the third point(x,y)"<<endl;
	cin>>x3>>y3;
	l1=Q15(x1,x2,y1,y2);
	l2=Q15(x1,x3,y1,y3);
	l3=Q15(x2,x3,y2,y3);
	Q14(l1,l2,l3);
}
void Q17(char x,char y,char z)
{
	char a,b,c;
	int sum=0,s_a=0;
	/*if(x!=0)
	{
		a=x;
		b=y;
		c=z;
	}
	else
	{
	*/
		cout<<"Enter 3 card"<<endl;
		cin>>a>>b>>c;
	//}
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
	}
	if(b>=50&&b<=57)
	{
		sum=sum+b-48;
	}
	else if(b=='T'||b=='J'||b=='Q'||b=='K')
	{
		sum+=10;
	}
	else if(b=='A')
	{
		s_a++;
	}
	if(c>=50&&c<=57)
	{
		sum=sum+c-48;
	}
	else if(c=='T'||c=='J'||c=='Q'||c=='K')
	{
		sum+=10;
	}
	else if(c=='A')
	{
		s_a++;
	}
	//Get A's value
	//It is too complex	-_-!
	if(s_a==0)
	{
		if(sum>=21)
		{
			cout<<"busted"<<endl;
		}
		else cout<<sum<<endl;
	}
	else if(s_a==1)
	{
		if(sum+11>21)
		{
			sum=sum+1;
		}else if(21-(sum+11)>21-(sum+1))//maybe I can del it.
		{
			sum=sum+1;
		}
		else sum=sum+11;
		
		if(sum>=21)
		{
			cout<<"busted"<<endl;
		}
		else cout<<sum<<endl;
	} else if(s_a==2)
	{
		if(sum+12>21)
		{
			sum=sum+2;
		}else if(21-(sum+12)>21-(sum+2))
		{
			sum=sum+2;
		}
		else sum=sum+12;
		
		if(sum>=21)
		{
			cout<<"busted"<<endl;
		}
		else cout<<sum<<endl;
	} else if(s_a==3)
	{
		sum=13;
		cout<<sum<<endl;
	}
	
}
void Q18()
{
	srand(time(0));
	int a=0,b=10000,r;
	r=(rand()%(b-a+1))+a;
	//cout<<r<<endl;
	if(r%2==0)
	{
		cout<<"YES"<<endl;
	}
	else if(r%3==0)
	{
		cout<<"NO"<<endl;
	}
	else cout<<"Not Sure"<<endl;
}
void Q20()
{
	//srand(time(0));
	int x=1,y=13,r;
	char a,b,c;
	r=(rand()%(y-x+1))+x;
	if(r==1)
	{
		a='A';
	}
	if(r==2)
	{
		a='2';
	}
	if(r==3)
	{
		a='3';
	}
	if(r==4)
	{
		a='4';
	}
	if(r==5)
	{
		a='5';
	}
	if(r==6)
	{
		a='6';
	}
	if(r==7)
	{
		a='7';
	}
	if(r==8)
	{
		a='8';
	}
	if(r==9)
	{
		a='9';
	}
	if(r==10)
	{
		a='T';
	}
	if(r==11)
	{
		a='J';
	}
	if(r==12)
	{
		a='Q';
	}
	if(r==13)
	{
		a='K';
	}
	r=(rand()%(y-x+1))+x;
	if(r==1)
	{
		b='A';
	}
	if(r==2)
	{
		b='2';
	}
	if(r==3)
	{
		b='3';
	}
	if(r==4)
	{
		b='4';
	}
	if(r==5)
	{
		b='5';
	}
	if(r==6)
	{
		b='6';
	}
	if(r==7)
	{
		b='7';
	}
	if(r==8)
	{
		b='8';
	}
	if(r==9)
	{
		b='9';
	}
	if(r==10)
	{
		b='T';
	}
	if(r==11)
	{
		b='J';
	}
	if(r==12)
	{
		b='Q';
	}
	if(r==13)
	{
		b='K';
	}
	r=(rand()%(y-x+1))+x;
	if(r==1)
	{
		c='A';
	}
	if(r==2)
	{
		c='2';
	}
	if(r==3)
	{
		c='3';
	}
	if(r==4)
	{
		c='4';
	}
	if(r==5)
	{
		c='5';
	}
	if(r==6)
	{
		c='6';
	}
	if(r==7)
	{
		c='7';
	}
	if(r==8)
	{
		c='8';
	}
	if(r==9)
	{
		c='9';
	}
	if(r==10)
	{
		c='T';
	}
	if(r==11)
	{
		c='J';
	}
	if(r==12)
	{
		c='Q';
	}
	if(r==13)
	{
		c='K';
	}
	cout<<"The Card are"<<a<<" , "<<b<<" , "<<c<<endl;
	Q17(a,b,c);
}
int main ()
{
	srand(time(0));
	for(int i=0;i<20;)
	{
		Q20();
		i++;
	}
	
	//Q5();
	system("Pause");
	return 0;
}
