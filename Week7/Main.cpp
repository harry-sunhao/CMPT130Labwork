#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;
/*
 * Counting Problems
 */
void p1()
{
    srand((unsigned)time(NULL));
    int a[10],odd=0,even=0;
    for (int i = 0; i < 10; ++i) {
        int n=rand()%1000+1;
        a[i]=n;
        if(n%2==0)
            even++;
        else
            odd++;
    }
    cout<<endl<<"There are "<<even<<" even numbers and "<<odd<<" odd numbers"<<endl;
}
bool IsPrime(int x)
{
    for (int i = 2; i < x; ++i) {

        if(x%i==0)
            return false;
    }
    return true;
}

void p2()
{
    srand((unsigned)time(NULL));
    int a[10],Prime=0,NotPrime=0;
    for (int i = 0; i < 10; ++i) {
        int n=rand()%1000+1;
        a[i]=n;
        if(IsPrime(n))
            NotPrime++;
        else
            Prime++;
    }
    cout<<endl<<"There are "<<NotPrime<<" NotPrime numbers and "<<Prime<<" Prime numbers"<<endl;
}
void p3()
{
    srand((unsigned)time(NULL));
    float a[10];
    int c_n=0,c_p=0;
    for (int i = 0; i < 10; ++i) {
        float n=(double)rand()/RAND_MAX*2-1;
        a[i]=n;
        if(n>0)
           c_p++;
        else
            c_n++;
    }
    cout<<endl<<"There are "<<c_p<<" postivate numbers and "<<c_n<<" negative numbers"<<endl;

}
int evenCounter(int a[],int length)
{
    int count=0;
    for(int i=0;i<length;i++)
    {
        if(a[i]%2==0)
        {
            count++;
        }
    }
    return count;
}
int primeCounter(int a[],int size)
{
    int count=0;
    for (int i = 0; i < size; ++i) {
        if(IsPrime(a[i]))
        {
            count++;
        }
    }
    return count;
}
bool IsExistInArray(char a[],int size,char n)
{
    for (int i = 0; i < size; ++i) {
        if(a[i]==n)
        {
            return true;
        }
    }
    return false;
}

int VowelCounter(char a[],int size)
{
    char Vo[10]={'a','e','i','o','u','A','E','I','O','U'};
    int count=0;
    for (int i = 0; i < size; ++i) {
        if(IsExistInArray(Vo,10,a[i]))
        {
            count++;
        }
    }
    return count;
}

int countElements(int a[],int size,int n)
{
    for (int i = 0; i < size; ++i) {
        if(a[i]==n)
        {
            return i;
        }
    }
}
int countElementsFromIndex(int a[],int size,int n,int index)
{
    int count=0;
    for (int i = index; i < size; ++i) {
        if(a[i]==n)
        {
            count++;
        }
    }
    return count;
}
int countCommonElements(int a[],int a_size,int b[],int b_size)
{
    int count=0;
    for (int i = 0; i < a_size; ++i) {
        for (int j = 0; j < b_size; ++j) {
            if(a[i]==b[j])
                count++;
        }
    }
    return count;
}
bool distinctElementsArray(int a[],int size)
{
    for (int i = 0 ; i < size; ++i) {

        for (int j = i+1; j < size; ++j) {
            cout<<a[i]<<" "<<a[j]<<endl;
            if(a[i]==a[j])
            {
                return false;
            }
        }
    }
    return true;
}
/*
 * Squeezing Problems
 */
void P11()
{
    srand((unsigned)time(NULL));
    int a[10];
    int r=10,l=-10,count=0,sum=0;
    count=r-l+1;
    for (int i = 0; i < 10; ++i) {
        int n=rand()%count+l;
        a[i]=n;
        sum+=n;
    }
    cout<<"The sum of this array is "<<sum<<endl;
}
void P12()
{
    srand((unsigned)time(NULL));
    int a[10];
    int r=10,l=-10,count=0,sum=0;
    count=r-l+1;
    for (int i = 0; i < 10; ++i) {
        int n=rand()%count+l;
        a[i]=n;
        sum+=abs(n);
    }
    cout<<"The absolute sum of this array is "<<sum<<endl;
}
void P13()
{
    srand((unsigned)time(NULL));
    int a[10];
    int r=10,l=-10,count=0,sum=0;
    count=r-l+1;
    for (int i = 0; i < 10; ++i) {
        int n=rand()%count+l;
        a[i]=n;
        sum+=n;
    }
    cout<<"The sum of this array is "<<abs(sum)<<endl;
}
void P14()
{
    srand((unsigned)time(NULL));
    int a[10];
    int r=10,l=-10,count=0,sum=1;
    count=r-l+1;
    for (int i = 0; i < 10; ++i) {
        int n=rand()%count+l;
        a[i]=n;
        sum*=n;
    }
    cout<<"The product of this array is "<<sum<<endl;
}
void P15()
{
    srand((unsigned)time(NULL));
    int a[10];
    int r=10,l=-10,count=0,sum=1;
    count=r-l+1;
    for (int i = 0; i < 10; ++i) {
        int n=rand()%count+l;
        a[i]=n;
        sum*=abs(n);
    }
    cout<<"The product of this array is "<<sum<<endl;
}
void P16()
{
    srand((unsigned)time(NULL));
    int a[10];
    int r=10,l=-10,count=0,sum=1;
    count=r-l+1;
    for (int i = 0; i < 10; ++i) {
        int n=rand()%count+l;
        a[i]=n;
        sum*=n;
    }
    cout<<"The product of this array is "<<abs(sum)<<endl;
}
void P17()
{
    srand((unsigned)time(NULL));
    int a[10];
    int r=10,l=-10,count,min=0,max=0,size=10;
    count=r-l+1;
    for (int i = 0; i < size; ++i) {
        a[i]=rand()%count+l;
        cout<<a[i]<<endl;
    }
    for (int i = 0; i < size; ++i) {
        for (int j = i; j < size; ++j) {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    min=a[0];
    max=a[size-1];
    cout<<min<<" "<<max<<endl;
}
int maxElement(int a[],int size)
{
    for (int i = 0; i < size; ++i) {
        for (int j = i; j < size; ++j) {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    return a[size-1];
}
int minElement(int a[],int size)
{
    for (int i = 0; i < size; ++i) {
        for (int j = i; j < size; ++j) {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    return a[0];
}
float sumArray(float a[],int size)
{
    float sum=0;
    for (int i = 0; i < size; ++i) {
        sum+=a[i];
    }
    return sum;
}
float productArray(float a[],int size)
{
    float sum=1;
    for (int i = 0; i < size; ++i) {
        sum*=a[i];
    }
    return sum;
}
bool isFound(int a[],int size,int n)
{
    for (int i = 0; i < size; ++i) {
        if(a[i]==n)
        {
            return true;
        }
    }
    return false;
}
bool isFoundFromIndex(int a[],int size,int n,int index)
{
    for (int i = index; i < size; ++i) {
        if(a[i]==n)
        {
            return true;
        }
    }
    return false;
}
bool containsEven(int a[],int length)
{
    for(int i=0;i<length;i++)
    {
        if(a[i]%2==0)
        {
            return true;
        }
    }
    return false;
}
bool containsDigit(char a[],int size)
{
    for (int i = 0; i < size; ++i) {
        if(a[i]>=48&&a[i]<=57)
        {
            return true;
        }
    }
    return false;
}
bool containsVowel(char a[],int size)
{
    char Vo[10]={'a','e','i','o','u','A','E','I','O','U'};
    int count=0;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < 10; ++j) {
            if(a[i]==Vo[j])
                return true;
        }
    }
    return false;
}
bool containsLowerCase(char a[],int size)
{
    for (int i = 0; i < size; ++i) {
        if(a[i]>=97&&a[i]<=122)
        {
            return true;
        }
    }
    return false;
}
bool containsUperCase(char a[],int size)
{
    for (int i = 0; i < size; ++i) {
        if(a[i]>=65&&a[i]<=90)
        {
            return true;
        }
    }
    return false;
}
bool isAlpha(char a[],int size)
{
    for (int i = 0; i < size; ++i) {
        if(a[i]<65)
        {
            return false;
        }
        if(a[i]>90&&a[i]<97)
            return false;
        if(a[i]>122)
            return false;
    }
    return true;
}
bool isAlphaNumeric(char a[],int size)
{
    for (int i = 0; i < size; ++i) {
        if(a[i]<48)
        {
            return false;
        }
        if(a[i]>57&&a[i]<65)
            return false;
        if(a[i]>90&&a[i]<97)
            return false;
        if(a[i]>122)
            return false;
    }
    return true;
}
bool containsPrime(int a[],int size)
{
    for (int i = 0; i < size; ++i) {
        if(a[i]==1)
            continue;
        bool pd=true;
        for (int j = 2; j < a[i]; ++j) {
            cout<<a[i]<<" "<<j<<endl;
            if(a[i]%j==0)
            {
                pd=false;
                break;
            }
        }
        if(pd==true)
        {
            return true;
        } //cout<<a[i]<<endl;
    }
    return false;
}
bool containsComposite(int a[],int size)
{
    for (int i = 0; i < size; ++i) {
        if(a[i]==1)//||a[i]==2)
            continue;
        for (int j = 2; j < a[i]; ++j) {
            cout<<a[i]<<" "<<j<<endl;
            if(a[i]%j==0)
            {
                return true;
            }
        }
    }
    return false;
}
void P33()
{
    srand((unsigned)time(NULL));
    int a[10];
    int r=10,l=-10,count=0;
    count=r-l+1;
    for (int i = 0; i < 10; ++i) {
        int n=rand()%count+l;
        a[i]=n;
        if (n<0)
        {
            cout<<"a negative number foundin the array"<<endl;
            return;
        }
    }
    cout<<"No negative number found in the array"<<endl;
    return;
}
void P34()
{
    srand((unsigned)time(NULL));
    int a[10];
    int r=10,l=-10,count=0;
    count=r-l+1;
    for (int i = 0; i < 10; ++i) {
        int n=rand()%count+l;
        a[i]=n;
        if(a[i]==1)
            continue;
        bool pd=true;
        for (int j = 2; j < a[i]; ++j) {
            cout<<a[i]<<" "<<j<<endl;
            if(a[i]%j==0)
            {
                pd=false;
                break;
            }
        }
        if(pd==true)
        {
            cout<<"a prime number found in the array"<<endl;
            return;
        } //cout<<a[i]<<endl;
    }
    cout<<"No prime number found in the array"<<endl;
}
void P35()
{
    srand((unsigned)time(NULL));
    char a[10];
    int r=33,l=126,count=0;
    count=r-l+1;
    for (int i = 0; i < 10; ++i) {
        int n=rand()%count+l;
        a[i]=n;
        if(n>=48&&n<=57)
        {
            cout<<"a digit found in the array"<<endl;
            return;
        }

    }
    cout<<"No digit found in the array"<<endl;
    return;
}
void P36()
{
    srand((unsigned)time(NULL));
    char a[10];
    int r=33,l=126,count=0;
    count=r-l+1;
    for (int i = 0; i < 10; ++i) {
        int n=rand()%count+l;
        a[i]=n;
        if(n>=65&&n<=122)
        {
            if(n<=90||n>=97)
            {
                cout<<"an alphabet found in the array"<<endl;
                return;
            }

        }

    }
    cout<<"No alphabet found in the array"<<endl;
    return;
}
int main()
{

    int a[10]={2,232,230,40,50,60,70,80,90,10};
    cout<<boolalpha<<containsComposite(a,3);
   //system("Pause");
   return 0;
};
