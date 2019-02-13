#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;
void Q3()
{
    cout<<"Enter the two intergers"<<endl;
    int a,b;
    bool c=false;
    cin>>a>>b;
    if (a==b ||abs(a-b)==1)
    {

        cout<<"There is no any integer"<<endl;
        c=true;

    }
    else if(a>b)
    {
        int temp=b;
        b=a;
        a=temp;
    }
    while(a<b-1&&c== false)
    {
        a++;
        cout<<a<<endl;
    }

}
void Q5()
{
    int n=-1;
    for(;n<0;)
    {
        cout<<"(for)Please enter n:"<<endl;
        cin>>n;
    }
    n=-1;
    while(n<0)
    {
        cout<<"(while)Please enter n:"<<endl;
        cin>>n;
    }
}
void Q6()
{
    cout<<"Enter the number"<<endl;
    int P_C=0,n,m;
    cin>>n;
    m=n;
    while(P_C<n)
    {
        int i=2,p=0;
        while(i<m)
        {
            //cout<<i<<" "<<m<<endl;
            if(m%i==0)
            {
                p=1;
                break;
            }

            i++;
        }
        if(p==0)
        {
            cout<<m<<" ";
            P_C++;
        }
        m++;

    }
}
void Q7()
{
    int l=10;
    for (int i = 0; i < l; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void Q8()
{
    int l=10;
    for (int i = 0; i < l; ++i)
    {
        for (int j = 0; j < l-i; ++j)
        {
            cout<<" ";
        }
        for (int k = 0; k < i; ++k)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void Q9()
{
    int l=10;
    for (int i = 0; i < l; ++i) 
    {
        //The left space
        for (int j = 1; j < l-i; ++j)
        {
            cout<<"  ";
        }

        for (int k = 0; k < 2*(i+1)-1; ++k)
        {
            cout<<"* ";
        }
        //The right space
        for (int m = 1; m < l-i; ++m)
        {
            cout<<"  ";
        }
        cout<<endl;
    }
	cout<<endl;
}
void Q10()
{
    int l=10;
    for (int i = l-1; i>=0; --i)
    {
        //The left space
        for (int j = 1; j < l-i; ++j)
        {
            cout<<"  ";
        }
        for (int k = 0; k < 2*(i+1)-1; ++k)
        {
            cout<<"* ";
        }
        for (int m = 1; m < l-i; ++m)
        {
            cout<<"  ";
        }
        cout<<endl;
    }
}
void Q11()
{
    cout<<"Enter a number"<<endl;
    int n,m;
    cin>>n>>m;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; j++)
        {
            cout<<i*j<<"\t";
        }
        cout<<endl;
    }
}
void Q12()
{
    cout<<"Enter a number"<<endl;
    int n;
    cin>>n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<i*j<<" ";
        }
        cout<<endl;
    }
}
void Q13()
{
    cout<<"Enter a number"<<endl;
    int n;
    cin>>n;
    for (int i = 1; i <= n; ++i)
    {
        /*for (int k = 1; k <=n-i ; ++k)
        {
            cout<<"\t";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<i*j<<"\t";
        }*/
		int j=1;
		for(int k=1;k<=n;k++)
		{
			//cout<<j<<" "<<n-i;
			if(k>n-i)
			{
				cout<<i*j<<"\t";
				j++;
			}	
			else
				cout<<"\t";
		}
		cout<<endl;
        
    }
}
void Q14()
{
    int l;
    cout<<"Enter a number"<<endl;
    cin>>l;
    bool flip=false;
    for (int i = 0; i < 2*l-1; ++i)
    {
        if(flip==false)
        {
            for (int j = 1; j <= i; ++j)
            {
                cout<<"* ";
                if(j==l)
                {
                    flip=true;
                    i=0;
                    break;
                }

            }
            cout<<endl;
        }
        else
        {
            for (int j = l-i; j >0 ; --j)
            {
                cout<<"* ";
            }
            cout<<endl;
        }



    }

}
void Q15()
{
    int l=10;
    cout<<"Enter the number"<<endl;
    cin>>l;
    for (int i = 1; i <= l; ++i)
    {
        //The left space
        for (int j = 0; j < l-i; ++j)
        {
            cout<<"  ";
        }

        for (int k = 1; k <= i; ++k)
        {
            cout<<k<<" ";
        }
        for (int n = i-1; n >=1 ; --n)
        {
            cout<<n<<" ";
        }
        //The right space
        for (int m = 0; m < l-i; ++m)
        {
            cout<<"  ";
        }
        cout<<endl;
    }
}
void Q16()
{
    int l;
    cout<<"Enter a number"<<endl;
    cin>>l;
    bool flip=false;
    for (int i = 0; i < 2*l-1; ++i) {
        if (flip == false) {
            for (int k = 0; k < l - i; ++k) {
                cout << "  ";
            }
            for (int j = 1; j <= i; ++j) {
                cout << "* ";
                if (j == l) {
                    flip = true;
                    i = 0;
                    break;
                }

            }
            cout << endl;
        } else {
            for (int k = 0; k < i; ++k)
            {
                cout << "  ";
            }
            for (int j = l - i; j > 0; --j)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
}
void Q17()
{
    int l;
    cout<<"Enter a number"<<endl;
    cin>>l;
    bool flip=false;
    for (int i = 0; i < 2*l-1; ++i)
    {
        if(flip==false)
        {
            for (int j = 1; j <= i; ++j)
            {
                cout<<j<<" ";
                if(j==l)
                {
                    flip=true;
                    i=0;
                    break;
                }

            }
            cout<<endl;
        }
        else
        {
            for (int j = l-i,k=1; j >0 ; --j,k++)
            {
                cout<<k<<" ";
            }
            cout<<endl;
        }



    }
}
void Q18()
{
    int l;
    cout<<"Enter a number"<<endl;
    cin>>l;
    bool flip=false;
    for (int i = 0; i < 2*l-1; ++i) {
        if (flip == false) {
            for (int k = 0; k < l - i; ++k) {
                cout << "  ";
            }
            for (int j = 1; j <= i; ++j) {
                cout << j<<" ";
                if (j == l) {
                    flip = true;
                    i = 0;
                    break;
                }

            }
            cout << endl;
        } else {
            for (int k = 0; k < i; ++k)
            {
                cout << "  ";
            }
            for (int j = l - i,m=1; j > 0; --j,m++)
            {
                cout <<m<<" ";
            }
            cout << endl;
        }
    }
}
void Q19()
{

    int l;
    cout<<"Enter a number"<<endl;
    cin>>l;
    bool flip=false;
    for (int i = 0; i < 2*l-1; i++)
    {
        if(flip!=true)
        {
            //The left space
            for (int j = 1; j < l-i; ++j)
            {
                cout<<"  ";
            }

            for (int k = 0; k < 2*(i+1)-1; ++k)
            {
                cout<<"* ";

            }
            //The right space
            for (int m = 1; m < l-i; ++m)
            {
                cout<<"  ";
            }
            if(i==l-1)
            {
                flip=true;
                i=0;
                //break;
            }
            cout<<endl;

        }
        else if(flip==true)
        {
            for (int j = 0; j < i; ++j)
            {
                cout<<"  ";
            }
            for(int k=1;k<=2*l-1-(i*2);k++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }

    }
}
void Q20()
{
    int l;
    cout<<"Enter a number"<<endl;
    cin>>l;
    bool flip=false;
    for (int i = 1; i <= l; i++)
    {
        if(flip!=true)
        {
            //The left space
            for (int j = 1; j <=l-i; ++j)
            {
                cout<<"  ";
            }

            for (int k = 1; k <= i; ++k)
            {
                cout<<k<<" ";
            }
            for (int n = i-1; n >=1 ; --n)
            {
                cout<<n<<" ";
            }
            //The right space
            for (int m = 1; m < l-i; ++m)
            {
                cout<<"  ";
            }
            if(i==l)
            {
                flip=true;
                i=0;
                //break;
            }
            cout<<endl;

        }
        else if(flip==true)
        {
            for (int j = 0; j < i; ++j)
            {
                cout<<"  ";
            }
            for(int k=1,m=2*l-1-(i*2);k<=2*l-1-(i*2);k++,m--)
            {
                if(k>l-i)
                {
                    cout<<m<<" ";
                }
                else
                    cout<<k<<" ";

            }
            cout<<endl;
        }

    }
}
void PQ1()
{
	/*int n=28,i=0;
	while (i<=28)
	{
		cout<<i<<", ";
		i+=2;
	}*/
	int n=28,i=0;
	do
	{
		cout<<i<<" ,";
		i+=2;
	}while(i<=28);
}
void PQ2()
{
	int n;
	cout<<"Enter a positive number"<<endl;
	cin>>n;
	int i=1;
	/*while(i<=n)
	{
		cout<<i<<",";
		i++;
	}*/
	do
	{
		cout<<i<<",";
		i++;
	}while(i<=n);
}
void PQ3()
{
	srand(time(0));
	cout<<"Enter a number"<<endl;
	int n;
	cin>>n;
	int i=0;
	/*while(i<n)
	{
		int a=-10,b=10;
		int count = b-a+1;
		cout<<(rand()%count+a)<<endl;
		i++;
	}*/
	do
	{
		int a=-10,b=10;
		int count = b-a+1;
		cout<<(rand()%count+a)<<endl;
		i++;
	}while(i<n);
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
	/*Min=rand()%count+a;
	sum+=Min;
	pro*=Min;
	cout<<Min<<endl;*/
	int i=0;
	do
	{
		if(i==0)
		{
			Min=rand()%count+a;
			num=Min;
		}
		num=rand()%count+a;
		sum+=num;
		pro*=num;
		if(num<Min)
		{
			Min=num;
		}
		cout<<num<<endl;
		i++;
	}while(i<n);
	/*while(i<n-1)
	{
		num=rand()%count+a;
		sum+=num;
		pro*=num;
		if(num<Min)
		{
			Min=num;
		}
		cout<<num<<endl;
		i++;
	}*/
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
	cout<<num1<<" "<<num2<<endl;
	if(num1>num2)
	{
		int temp=num2;
		num2=num1;
		num1=temp;
	}
	int i=num1+1;

	/*while(i<num2)
	{
		cout<<i<<endl;
		i++;
	}*/
	do
	{
		cout<<i<<endl;
		i++;
	}while(i<num2);

	
}
void PQ6()
{
	int i=7;
	/*while(i%41!=0)
	{
		cout<<i<<endl;
		i=i+3;
	}
	i=7;*/
	do
	{
		cout<<i<<endl;
		i=i+3;
	}while(i%41!=0);
	//cout<<i<<endl;
	
}
void PQ7()
{
	int n=0,m=0;
	bool IsPrime=true;
	int i=2;
	//while(n<=2)
	//{
	//	cout<<"Enter a number greater than 2"<<endl;
	//	cin>>n;
	//}
	do
	{
		cout<<"Enter a number greater than 2"<<endl;
		cin>>n;
	}while(n<=2);
	/*while(i<n)
	{
		if(n%i==0)
		{
			IsPrime=false;

		}
		i++;
	}*/
	do
	{
		if(n%i==0)
		{
			IsPrime=false;

		}
		i++;
	}while(i<n);
	//
	if(IsPrime)
	{
		cout<<"The number is prime"<<endl;
	}
	else
		cout<<"The number is not prime"<<endl;
}
void Break_Test()
{
	cout<<"This program will generate a random number in the range [-15,20]"<<endl;
	cout<<"You task is to guess the random number"<<endl<<endl;
	int number= 6;//rand()%36-15;
	int guess,count=0;
	while (true)
	{
		cout<<"Enter your guess"<<endl;
		cin>>guess;
		count++;
		if(guess == number)
		{
			cout<<endl<<"You got it. Congratulations!"<<endl;
			//count++;
			break;
		}
		else if(guess > number)
		{
			cout<<"Too lager of guess"<<endl;
		}
		else
			cout<<"Too small of guess"<<endl;
		count++;
	}
	cout<<"You made "<<count << " guesses until you guessed right"<<endl;
	if(count<=6)
		cout<<"You are celver!"<<endl;
	else if(count <=36)
		cout<<"You are not that bad"<<endl;
	else 
		cout <<"You are error";
}	
int main()
{
   //Q6();
   //Q7();
   //Q8();
   //Q9();
   //Q10();
   //Q11();
   //Q12();
   Q13();
   //Q14();
   //Q15();
   //Q16();
   //Q17();
   //Q18();
   //Q19();
   //Q20();
	//Break_Test();
   system("Pause");
   return 0;
};
