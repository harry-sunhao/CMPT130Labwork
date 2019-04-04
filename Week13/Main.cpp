#include <iostream>

using namespace std;

void Q1()
{
    //Hip Hip Hurray
}
void cheers(int n)
{
    if (n == 1)
    {
        cout << "Hurray\n";
    }
    else
    {
        cout << "Hip ";
        cheers(n - 1);
    }
}
void Q2()
{
    /*
     * n=3  (3-1)+3 =6
     * n=2  (2-1)+2 =3
     * n=1  1
     * 3+2
     * */
    //6
}
int mystery(int n)
{
    if (n <= 1)
        return 1;
    else
        return mystery(n - 1) + n ;
}
void Q3()
{
    /*
     * 3
     * 2
     * 1
     * 0
     * */
}
void foo(int x)
{
    if (x <= 0)
        cout << 0 << endl;
    else
    {

        foo(x-1);
        cout << x << endl;
        foo(x-2);
    }
}
int seqSearch(const int A[], const int startIndex, const int lastIndex, const int searchValue)
{
    if (startIndex > lastIndex)
        return -1;
    else if (A[startIndex] == searchValue)
        return startIndex;
    else
    {
        int index=seqSearch(A, startIndex+1, lastIndex, searchValue);
        for (int i = startIndex + 1; i <= lastIndex; i++)
            cout << A[i] << " ";
        cout <<"]"<<startIndex<< endl;
        return index;
    }
}
void Q4()
{
    /*
        8 3 7 9 0 1 6 ]0
        3 7 9 0 1 6 ]1
        7 9 0 1 6 ]2
        9 0 1 6 ]3
        0 1 6 ]4
        0 is found in the array at index 5
     * */
    const int size = 8;
    int A[size] = {2, 8, 3, 7, 9, 0, 1, 6};
    int x=1;
    int index = seqSearch(A, 0, size-1, x);
    if (index == -1)
        cout << x << " is not found in the array." << endl;
    else
        cout << x << " is found in the array at index " << index << endl;
}
void Q5()
{
    /*
     * 0
     * 1
     * 2
     * 3
     * */
}
void Q6()
{
/*
 *  1 6 ]5
    0 1 6 ]4
    9 0 1 6 ]3
    7 9 0 1 6 ]2
    3 7 9 0 1 6 ]1
    8 3 7 9 0 1 6 ]0
    1 is found in the array at index 6
    */
}
void Q7()
{
    /*
     *  0   foo(1)
     *  1   foo(1)
     *  0   foo(1)
     *  2   foo(2)
     *  0   foo(2)
     *  3   foo(3)
     *  0   foo(3)
     *  1   foo(3)
     *  0   foo(3)
     * */
}
int binarySearch(const int A[], const int startIndex, const int lastIndex, const int searchValue)
{
    if (startIndex > lastIndex)
        return -1;
    else
    {
        int m = (startIndex + lastIndex) / 2;
        if (A[m] == searchValue)
            return m;
        else if (A[m] > searchValue)
        {
            int index= binarySearch(A, startIndex, m-1, searchValue);
            for (int i = startIndex; i < m; i++)
                cout << A[i] << " ";
            cout << endl;
            return index;
        }
        else
        {
            int index=binarySearch(A, m+1, lastIndex, searchValue);
            for (int i = m+1; i <= lastIndex; i++)
                cout << A[i] << " ";
            cout << endl;
            return index;
        }
    }
}
void Q8()
{
    /*
     * 21, 25, 30, 35
     * 21
     * 20  is not found in the array.
     * */
    const int size = 8;
    int A[size] = {3, 7, 12, 17, 21, 25, 30, 35};
    int x=20;
    int index = binarySearch(A, 0, size-1, x);
    if (index == -1)
        cout << x << " is not found in the array." << endl;
    else
        cout << x << " is found in the array at index " << index << endl;
}
void Q9()
{
/*
    21
    21 25 30 35
    20 is not found in the array.
   */
}
void Q10(int n)
{
    if(n==0)
        return;
    else
    {
        cout<<"* ";
        Q10(n-1);
    }

}
void Q11(int n)
{
    if(n==1)
        cout<<"1 "<<endl;
    else
    {
        cout<<n<<" ";
        Q11(n-1);
    }

}
void Q12(int n)
{
    if(n==1)
        cout<<"1 ";
    else
    {

        Q12(n-1);
        cout<<n<<" ";
    }
}
int Q13_recursiveSum(int n)
{
    int sum;
    if(n==1)
        sum= 1;
    else
    {
        sum=n+Q13_recursiveSum(n-1);
    }
    return sum;

}
int Q14_recursiveSumDifficult(int n)
{
    int sum;
    if(n==1)
        sum= 1;
    else
    {
        int num=Q14_recursiveSumDifficult(n-1);
        sum=n+num;
    }
    return sum;
}
void Q15(int n)
{
	bool a=true;
    if(n==0&&a==true)
		cout<<"0";
    else
    {
        cout<<n%10;
        Q15(n/10);
		a=false;
    }
}
int Q16(int x,int y)
{
    int sum=1;
    if(y==0)
        return 1;
    else
    {
        sum=x*Q16(x,y-1);
    }
    return sum;
}
int Q17(int n)
{
	int sum=0;
	if(n==0)
		sum=0;
	else if(n<0)
	{
		sum=n*n+Q17(n+1);
	}
	else if(n>0)
	{
		sum=n*n+Q17(n-1);
	}
	return sum;
}
int fib(int x)
{
	if((x==1)||(x==0)) 
	{
      return(x);
	}
	else 
	{
      return(fib(x-1)+fib(x-2));
	}
}
void Q18()
{
	cout<<"Input a number"<<endl;
	int x;
	cin>>x;
	fib(x);

}
int fib_19(int n) 
{ 
  
  int *f=new int [n];
  int i; 
  
  /* 0th and 1st number of the series are 0 and 1*/
  f[0] = 0; 
  f[1] = 1; 
  
  for (i = 2; i <= n; i++) 
  { 
      /* Add the previous 2 numbers in the series 
         and store it */
      f[i] = f[i-1] + f[i-2]; 
  } 
  int num=f[n];
  delete []f;
  return num; 
} 
void Q19()
{
	cout<<"Input a number"<<endl;
	int x;
	cin>>x;
	fib_19(x);
}
int Q21(int m, int n)
{
	if(m==0)
		return n+1;
	else if(m>0&&n==0)
		return Q21(m-1,1);
	else if(m>0&&n>0)
		return Q21(m-1,Q21(m,n-1));
}
bool seqSearch(const char A[], const int startIndex, const char searchValue)
{
	int index=startIndex;
    while(A[index]!='\0')
    {
        if(A[index]==searchValue)
            return true;
        index++;
    }
    return false;
}
void Q22()
{
	char a[]="abcde1fg";
	bool ans=seqSearch(a,2,'1');
	cout<<ans<<endl;
}
bool cStringBinarySearch(char a[],int startIndex,int lastIndex,char item)
{
    
    while(startIndex<=lastIndex)
    {
        int midIndex=(startIndex+lastIndex)/2;
        int Guess=a[midIndex];
        if(Guess==item)
        {
            return true;
        }
        else if(Guess>item)
            lastIndex=midIndex-1;
        else if(Guess<item)
            startIndex=midIndex+1;
    }
    return false;
}
void Q23()
{
	char a[]="abcdefghi";
	bool ans=cStringBinarySearch(a,0,9,'1');
	cout<<ans<<endl;
}
void recursiveBubbleSort()
{

}
int factorial(int n)
{
	if(n==0||n==1)
		return 1;
	else
		return n*factorial(n-1);
}
void printVertial(int n)
{
	if(n<10)
		cout<<n<<endl;
	else
	{
		int num=n,count=0;
		while(n>0)
		{
			n=n/10;
			count++;
		}
		count--;
		n=num;
		while(n>0)
		{
			int x=pow(10.0,count*1.0);
			cout<<n/x<<endl;
			n=n%x;
			count--;
		}
	}
	/*
	if(n==0)
		cout<<n<<endl;
	else
	{
		int k=log10(1.0*n);
		int m=pow(10.0,k);
		do
		{
			cout<<n/m<<endl;
			n=n%m;
			m=m/10;
		}while(m>0);
	}
	*/
}
void re_printVertial(int n)
{
	if(n<10)
		cout<<n<<endl;
	else
	{
		re_printVertial(n/10);
		cout<<n%10<<endl;
	}
}
void recursiveBubbleSort(int[] arr, int first, int last){

    if(first < last && last > 0){
        if(arr[first] > arr[first+1]){
            int temp = arr[first];
            arr[first] = arr[first+1];
            arr[first+1] = temp;
        }
        recursiveBubbleSort(arr, first+1, last);
        recursiveBubbleSort(arr, first, last-1);
    }
    else
        return;
}
int main()
{

	system("Pause");
    return 0;
}
