#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

struct result
        {
            float x,y,d;
            int num;
        };

bool isEven(int x)
{
    return x%2==0;
}
void PrintIncreasingOrder(float x, float y, float z)
{
    float temp;
    while(x>y||y>z||x>z)
    {
        if(x>y)
        {
            temp=x;
            x=y;
            y=temp;
            if(y>z)
            {
                temp=y;
                y=z;
                z=temp;
            }
        }
        if(y>z)
        {
            temp=y;
            y=z;
            z=temp;
        }
    }

   cout<<x<<" "<<y<<" "<<z<<endl;

}
bool isDigit(char x)
{
    return x>=48&&x<=57;
}

int successiveSum(int n)
{
    int sum=0;
    for (int i = 0; i < n; ++i) {
        sum+=i+1;
    }
    return sum;
}
int successiveProduct(int n)
{
    int sum=1;
    for (int i = 0; i < n; ++i) {
        sum*=i+1;
    }
    return sum;
}
void printReverse(int n)
{
    while(n/10>0)
    {
        cout<<n%10<<" ";
        n=n/10;
    }
    cout<<n;
}
void reversedInterger(int n)
{
    int sum,num=n;
    bool a=false;
    if(n<0)
    {
        a=true;
        n=n*-1;
    }

    while(n/10>0)
    {
        n=n/10;
        sum++;
    }
    n=num;
    num=0;
    for (int i = sum-1; i >=0 ; --i)
    {

        num+=pow(10,i)*(n%10);
        n=n/10;

    }

    cout<<num<<endl;
}
bool isComposite(int n)
{
    for (int i = 2; i < n; ++i)
    {
        if(n%i==0)
            return true;
    }
    return false;
}
bool isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
bool isPrime2(int n)
{
    return !isComposite(n);
}
void printPrimes(int n)
{
    for (int i = 2; i < n; ++i) {
        if(isPrime(i))
            cout<<i<<" ";
    }
}
bool allEven(int n)
{
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        int num=rand()%1000;
        if(isEven(num)== false)
            return false;
    }
    return true;
}
bool allPrime(int n)
{
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        int num=rand()%100;
        cout<<num<<endl;
        if(isPrime(num)== false)
            return false;
    }
    return true;
}
int quadraticTester(float a, float b, float c)
{
    float d=b*b-4*a*c;
    if(d>0)
        return 2;
    else if(d<0)
        return 0;
    return 1;
}
int quadraticSolver(float a, float b, float c, float *x1,float *y1)
{
    float d = pow(b,2)-4*a*c;
    if(d<0)
    {
        return 0;
    }
    else if(d>0)
    {
        * x1=(-b+d)/(2*a);
        * y1=(-b+d)/(2*a);
        return 2;
    }
    * x1=-b/2*a;
    return 1;


}

/*result quadraticSolver(float a, float b, float c) // use struct
{
    result result;

    result.d=b*b-4*a*c;
    if(result.d<0)
    {
        result.num=0;
    }
    else if(result.d==0)
    {
        result.x=(-b+result.d)/(2*a);
        result.num=1;
    }
    else
    {
        result.x=(-b+result.d)/(2*a);
        result.y=(-b+result.d)/(2*a);
        result.num=2;

    }
    return result;
}*/
bool allIncreasing(int n)
{
    srand(time(0));
    int min=rand()%100;
    cout<<min<<endl;
    for (int i = 1; i < n; ++i) {
        int num=rand()%100;
        cout<<num<<endl;
        if(num<min)
            return false;
        else
            min=num;
    }
    return true;
}

char Q19(char c)
{
    int n=c+10;
    cout<<n<<endl;
    if(n>122)
    {
        n=96+(n-122);
    }
    c=n;
    return c;
}
double triangleArea(double a,double b,double c)
{
    double s,area;
    if(a + b >= c && a + c >= b && b + c >= a)
    {
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));

    }
    else
    {
        cout<<"Error,this three sides can not inequality holds"<<endl;
        return 0;
    }
    return area;
}
double vectorLength(double x1,double x2,double y1,double y2)
{
    double s=sqrt((x1 - x2)*(x1 - x2) + (y1 - y2) * (y1 - y2));
    return s;
}
double areaOfTriangle(double x1,double x2,double x3,double y1,double y2,double y3)
{
    double l1,l2,l3;
    l1=vectorLength(x1,x2,y1,y2);
    l2=vectorLength(x1,x3,y1,y3);
    l3=vectorLength(x2,x3,y2,y3);
    return triangleArea(l1,l2,l3);
}
float accruedTotal(float amount, float year)
{
    float rate;
    if(amount<=0||year<=0)
    {
        cout<<"Error,please enter the correct value."<<endl;
        return 0;
    }
    else if(amount<1000)
    {
        rate=0.25;
    }
    else if(amount<10000)
    {
        rate=0.20;
    }
    else if(amount<100000)
    {
        rate=0.15;
    }
    else
        rate=0.1;
    return amount*(1.0+rate*year);
}
float f(float a,float b,float c,float d,float x)
{
    return a*pow(x,3)+b*pow(x,2)+c*x+d;
}
double mySquareRoot(double x)
{
    if(x==0||x==1)
        return x;
    double l=0,r=x+1,mid=(x+1)/2,eps=0.0001;
    //cout<<fabs(l-r);
    while (fabs(l-r)>eps)
    {
        //cout<<"mid: "<<mid<<endl;

        if(pow(mid,2)<x)
        {
            l=mid;
        }
        else
            r=mid;
        //cout<<"l: "<<l<<endl;
        //cout<<"r: "<<r<<endl;
        mid=(l+r)/2;
    }
    return mid;
}

void PQ1()
{
    cout<<"Enter a number"<<endl;
    int x;
    cin>>x;
    if(isEven(x))
    {
        cout<<"The number is even"<<endl;
    }
    else
        cout<<"The number is odd"<<endl;
}
void PQ2()
{
    srand(time(0));
    for (int i = 0; i < 10; ++i) {
        int x= rand()%100+1;
        if(isEven(x))
        {
            cout<<"The number "<<x<<" is even"<<endl;
        }
        else
            cout<<"The number "<<x<<" is odd"<<endl;
    }
}
void PQ3()
{
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; ++i) {
        float x=(float)rand()/RAND_MAX*1000;
        float y=(float)rand()/RAND_MAX*1000;
        float z=(float)rand()/RAND_MAX*1000;
        PrintIncreasingOrder(x,y,z);
    }

}
void PQ4()
{
    cout<<"Enter a character"<<endl;
    char x;
    cin>>x;
    cout<<boolalpha<<isDigit(x)<<endl;
}
void Q17()
{
    float x1,y1;
    int num;
    num= quadraticSolver(1,1,1,&x1,&y1);
    if(num==0)
    {
        cout<<"There is no real solution!"<<endl;
    }
    else if(num==1)
        cout<<"There is one real solution is "<<x1<<endl;
    else
        cout<<"There are two real solutions , they are "<<x1<<" ,"<<y1<<endl;
}
int main()
{
   cout<<mySquareRoot(40);
   //system("Pause");
   return 0;
};
