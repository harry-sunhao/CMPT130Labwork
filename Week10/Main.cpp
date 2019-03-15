#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>

using namespace std;
typedef int * IntPtr;
void Q1() {
    int R, C;
    int **M;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << *(*(M + i) + j) << "\t";
        }
        cout << endl;
    }
}
void Q2() {
    int R, C;
    int **M;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << *(M[i] + j) << "\t";
        }
        cout << endl;
    }
    cout << endl << endl;
}
void Q3()
{
    int R, C;
    int **M;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << (*(M+i))[j] << "\t";
        }
        cout << endl;
    }
}
void Q4()
{
    /*
     * Answer: 0 1 2 3 4 5 6 7 8 9
     */
    int *a = new int[10];
    int *p = a;
    int i;
    for (i = 0; i < 10; i++)
        a[i] = i;
    for (i = 0; i < 10; i++)
        cout << p[i] << " ";
    cout << endl;
    delete[] a;
    //0 1 2 3 4 5 6 7 8 9
}
void Q5()
{
    /*
     * Answer: 10 1 2 3 4 5 6 7 8 9
     */
    int array_size = 10;
    int *a;
    a = new int [array_size];
    int *p = a;
    int i;
    for (i = 0; i < array_size; i++)
        a[i] = i;
    p[0] = 10;
    for (i = 0; i < array_size; i++)
        cout << a[i] << " ";
    cout << endl;
    delete[] a;
    //10 1 2 3 4 5 6 7 8 9
}
void Q9()
{
    int arraySize;
    cout<<"Please enter the size of the array to be created: ";
    cin>>arraySize;
    int *arr=new int [arraySize];
    int l=0,r=50,count,odd=0,even=0;
    count=r-l+1;
    for (int i = 0; i < arraySize; ++i) {
        arr[i]=rand()%count+l;
    }
    for (int i = 0; i < arraySize; ++i) {
        if((*arr+i)%2==0)
            even++;
        else
            odd++;
    }
    cout<<even<<endl;
    cout<<odd<<endl;
    delete[] arr;
}
void Q10()
{
    int arraySize;
    cout<<"Please enter the size of the array to be created: ";
    cin>>arraySize;
    float *arr=new float [arraySize];
    double l=-1.0,r=1.0,count,pos=0,neg=0;
    count=r-l;
    for (int i = 0; i < arraySize; ++i) {
        arr[i]=rand()/RAND_MAX*count+l;
    }
    for (int i = 0; i < arraySize; ++i) {
        if((*arr+i)>0)
            pos++;
        else
            neg++;
    }
    cout<<pos<<endl;
    cout<<neg<<endl;
    delete[] arr;
}
void Q11()
{
    int arraySize;
    cout<<"Please enter the size of the array to be created: ";
    cin>>arraySize;
    int *arr=new int [arraySize];
    int l=-10,r=10,count,sum=0;
    count=r-l+1;
    for (int i = 0; i < arraySize; ++i) {
        arr[i]=rand()%count+l;
    }
    for (int i = 0; i < arraySize; ++i) {
        sum+=arr[i];
    }
    cout<<"The sum of all the elements is"<<sum<<endl;
    delete[] arr;
}
void Q12()
{
    int arraySize;
    cout<<"Please enter the size of the array to be created: ";
    cin>>arraySize;
    int *arr=new int [arraySize];
    int l=-10,r=10,count,sum=0;
    count=r-l+1;
    for (int i = 0; i < arraySize; ++i) {
        arr[i]=rand()%count+l;
    }
    for (int i = 0; i < arraySize; ++i) {
        sum+=arr[i];
    }
    cout<<"The average of all the elements is"<<sum*1.0/arraySize<<endl;
    delete[] arr;
}
void Q13()
{
    int arraySize;
    cout<<"Please enter the size of the array to be created: ";
    cin>>arraySize;
    int *arr=new int [arraySize];
    int l=-10,r=10,count,sum=0;
    count=r-l+1;
    for (int i = 0; i < arraySize; ++i) {
        arr[i]=rand()%count+l;
    }
    for (int i = 0; i < arraySize; ++i) {
        sum+=abs(arr[i]);
    }
    cout<<"The sum of the absolute values of all the elements is"<<sum<<endl;
    delete[] arr;
}
void Q14()
{
    int arraySize;
    cout<<"Please enter the size of the array to be created: ";
    cin>>arraySize;
    int *arr=new int [arraySize];
    int l=-10,r=10,count,sum=0;
    count=r-l+1;
    for (int i = 0; i < arraySize; ++i) {
        arr[i]=rand()%count+l;
    }
    for (int i = 0; i < arraySize; ++i) {
        sum+=arr[i];
    }
    cout<<"The absolute value of the sum of all the elements is"<<abs(sum)<<endl;
    delete[] arr;
}
void Q15()
{
    int arraySize;
    cout<<"Please enter the size of the array to be created: ";
    cin>>arraySize;
    int *arr=new int [arraySize];
    int l=-10,r=10,count,sum=1;
    count=r-l+1;
    for (int i = 0; i < arraySize; ++i) {
        arr[i]=rand()%count+l;
    }
    for (int i = 0; i < arraySize; ++i) {
        sum*=arr[i];
    }
    cout<<"The product of all the elements is"<<sum<<endl;
    delete[] arr;
}
void Q16()
{
    int arraySize;
    cout<<"Please enter the size of the array to be created: ";
    cin>>arraySize;
    int *arr=new int [arraySize];
    int l=-10,r=10,count,sum=1;
    count=r-l+1;
    for (int i = 0; i < arraySize; ++i) {
        arr[i]=rand()%count+l;
    }
    for (int i = 0; i < arraySize; ++i) {
        sum*=abs(arr[i]);
    }
    cout<<"The product of the absolute values of all the elements is"<<sum<<endl;
    delete[] arr;
}
void Q17()
{
    int arraySize;
    cout<<"Please enter the size of the array to be created: ";
    cin>>arraySize;
    int *arr=new int [arraySize];
    int l=-10,r=10,count,sum=1;
    count=r-l+1;
    for (int i = 0; i < arraySize; ++i) {
        arr[i]=rand()%count+l;
    }
    for (int i = 0; i < arraySize; ++i) {
        sum*=arr[i];
    }
    cout<<"The absolute value of the product of all the elements is"<<abs(sum)<<endl;
    delete[] arr;
}
void Q18()
{
    int arraySize;
    cout<<"Please enter the size of the array to be created: ";
    cin>>arraySize;
    int *arr=new int [arraySize];
    int l=-10,r=10,count;
    count=r-l+1;
    for (int i = 0; i < arraySize; ++i) {
        arr[i]=rand()%count+l;
    }
    int max=arr[0],min=arr[0];
    for (int i = 0; i < arraySize; ++i) {
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    cout<<"The maximum and minimum elements of the array is"<<max<<", "<<min<<endl;
    delete[] arr;
}
int FindTheNegative(int *A,int size)
{
    int sum=0;
    for (int i = 0; i < size; ++i) {
        if(A[i]<0)
            sum++;
    }
    if(sum>0)
    {
        return sum;
    }
    return -1;
}
void Q19()
{
    int arraySize;
    cout<<"Please enter the size of the array to be created: ";
    cin>>arraySize;
    int *arr=new int [arraySize];
    int l=-5,r=5,count;
    count=r-l+1;
    for (int i = 0; i < arraySize; ++i) {
        arr[i]=rand()%count+l;
    }
    if(FindTheNegative(arr,arraySize)==-1)
        cout<<"No negative number is found the array "<<endl;
    else
        cout<<"A negative number is found in the array"<<endl;
    delete[] arr;
}
bool isPrime(int a)
{
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
            return false;
    }
    return true;
}
int FindThePrime(int *A,int size)
{
    int sum=0;
    for (int i = 0; i < size; ++i) {
        if(isPrime(A[i]))
            sum++;
    }
    if(sum>0)
        return sum;
    return -1;
}
void Q20()
{
    int arraySize;
    cout<<"Please enter the size of the array to be created: ";
    cin>>arraySize;
    int *arr=new int [arraySize];
    int l=2,r=100,count;
    count=r-l+1;
    for (int i = 0; i < arraySize; ++i) {
        arr[i]=rand()%count+l;
    }
    if(FindTheNegative(arr,arraySize)==-1)
        cout<<"No prime number is found the array "<<endl;
    else
        cout<<"A prime number is found in the array"<<endl;
    delete[] arr;
}
int FindTheDigits(char *A,int size)
{
    int sum=0;
    for (int i = 0; i < size; ++i) {
        if(A[i]>='0'&&A[i]<='9')
            sum++;
    }
    if(sum>0)
        return sum;
    return -1;
}
void Q21()
{
    int arraySize;
    cout<<"Please enter the size of the array to be created: ";
    cin>>arraySize;
    char *arr=new char [arraySize];
    int l=48,r=122,count;
    count=r-l+1;
    for (int i = 0; i < arraySize; ++i) {
        arr[i]=rand()%count+l;
        cout<<arr[i]<<"\t";
    }
    if(FindTheDigits(arr,arraySize)==-1)
        cout<<"No Digits number is found the array "<<endl;
    else
        cout<<"A digits number is found in the array"<<endl;
    delete[] arr;
}
int FindTheLetter(char *A,int size)
{
    int sum=0;
    for (int i = 0; i < size; ++i) {
        if(A[i]>='a'&&A[i]<='z')
            sum++;
        else if(A[i]>='A'&&A[i]<='Z')
            sum++;
    }
    if(sum>0)
        return sum;
    return -1;
}
void Q22()
{
    int arraySize;
    cout<<"Please enter the size of the array to be created: ";
    cin>>arraySize;
    char *arr=new char [arraySize];
    int l=48,r=122,count;
    count=r-l+1;
    for (int i = 0; i < arraySize; ++i) {
        arr[i]=rand()%count+l;
        cout<<arr[i]<<"\t";
    }
    if(FindTheLetter(arr,arraySize)==-1)
        cout<<"No alphabet is found the array "<<endl;
    else
        cout<<"An alphabet is found the array"<<endl;
    delete[] arr;
}
int* Q23(int* A,int B[],int sizeA,int sizeB)
{
    int *C=new int [sizeA+sizeB];
    int i = 0;
    for (int j=0; i < sizeA; ++j) {
        C[i]=A[j];
        i++;
    }
    for (int k = 0; k < sizeB; ++k) {
        C[i]=B[k];
        i++;
    }
    return C;
}
float* Q24(float A[],int size)
{
    float *C=new float [size];
    int index=0;
    for (int i = size-1; i >=0; --i) {
        C[index]=A[i];
        index++;
    }
    return C;
}
void Q25(double *A,int size)
{
    for (int i = 0; i < size / 2; ++i) {
        double temp=A[i];
        A[i]=A[size-1-i];
        A[size-1-i]=temp;
    }
    for (int j = 0; j < size; ++j) {
        cout<<A[j]<<"\t";
    }
}
bool Q26_FindElements(int *A,int size,int e)
{
    for(int i=0;i<size;i++)
    {
        if(A[i]==e)
            return true;
    }

    return false;
}
bool Q27_ArrIdentical(int A[],int B[],int sizeA,int sizeB)
{
    if(sizeA!=sizeB)
        return false;
    for (int i = 0; i < sizeA; ++i) {
        if(A[i]!=B[i])
            return false;
    }
    return true;
}
int Q28_FoundBetweenAandB(int A[],int B[],int sizeA,int sizeB)
{
    int sum=0;
    for (int i = 0; i < sizeA; ++i) {
        for (int j = i; j < sizeB; ++j) {
            if(A[i]==B[j])
                sum++;
        }
    }
    return sum;
}
bool Q29_FoundChar(char A[],char B[],int sizeA,int sizeB)
{
    int sum=0;
    for (int i = 0; i < sizeA; ++i) {
        for (int j = i; j < sizeB; ++j) {
            if(A[i]==B[j])
                sum++;
        }
    }
    if(sum==0)
        return false;
    return true;
}
bool Q30_FoundInt(int A[],int B[],int sizeA,int sizeB)
{
    if(Q28_FoundBetweenAandB(A,B,sizeA,sizeB)==sizeA)
        if(Q28_FoundBetweenAandB(B,A,sizeB,sizeA)==sizeB)
            return true;

    return false;
}
int *Q31(int A[],int B[],int sizeA,int sizeB)
{
    int sum=0;
    for (int i = 0; i < sizeA; ++i) {
        for (int j = i; j < sizeB; ++j) {
            if(A[i]==B[j])
                sum++;
        }
    }
    int *C=new int [sum];
    int index=0;
    for (int i = 0; i < sizeA; ++i) {
        for (int j = i; j < sizeB; ++j) {
            if(A[i]==B[j])
            {
                C[index]=A[i];
                index++;
            }

        }
    }
    return C;
}

void printArray(const int *arr, const int arr_size)
{
    for (int i = 0; i < arr_size; i++)
        cout << "Element at " << i << " = " << arr[i] << endl;
}
void appendElement(IntPtr &A, int &size, const int newEntry)
{
    int *B = new int[size+1];
    for (int i = 0; i < size; i++)
        B[i] = A[i];
    B[size]=newEntry;
    delete [] A;
    A= B;
    size++;
}
int sequentialSearch(const int *arr, const int arr_size, const int e) {
    for (int i = 0; i < arr_size; i++)
        if (arr[i] == e)
            return i;
    return -1;
}
void deleteElement(IntPtr &arr, int &arr_size, const int e)
{
    int index = sequentialSearch (arr, arr_size, e);
    if (index != -1)
    {
        int *B = new int[arr_size-1];
        for (int i = 0; i < index; i++)
            B[i] = arr[i];
        for (int i = index+1; i < arr_size; i++)
            B[i-1] = arr[i];
        delete [] arr;
        arr_size--;
        arr = B;
    }
    return;
}
void Q32()
{
    int *A=new int[0];
    int size=0;
    appendElement(A,size,1);
    appendElement(A,size,2);
    cout<<size<<endl;
    printArray(A,size);
    deleteElement(A,size,1);
    printArray(A,size);
    if(size>0)
    {
        delete[] A;
    }
    else
        delete A;
}
void Q33()
{
    int R=3,C=4;
    int **M= new int *[R];
    for(int i=0;i<R;i++)
        M[i]=new int[C];
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            M[i][j]=8*i+(j+1)*2;
        }
    }
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            cout<<M[i][j]<<"\t";
        }
        delete [] M[i];
        cout<<endl;
    }
    delete[] M;
}
int Q34(int **A,int c,int r)
{
    int sum=0;
    for (int i = 0; i < c; ++i) {
        sum=sum+A[r][i];
    }
    return sum;
}
int Q35(int **A,int r,int c)
{
    int sum=0;
    for (int i = 0; i < r; ++i) {
        sum=sum+A[i][c];
    }
    return sum;
}
void Q36(int **A,int c,int r1,int r2)
{
    for (int i = 0; i < c; ++i) {
        int temp=A[r1][i];
        A[r1][i]=A[r2][i];
        A[r2][i]=temp;
    }
    return;
}
void Q37(int **A,int r,int c1,int c2)
{
    for (int i = 0; i < r; ++i) {
        int temp=A[i][c1];
        A[i][c1]=A[i][c2];
        A[i][c2]=temp;
    }
    return;
}
bool Q38(int **A,int r,int c)
{
    int pre_sum=0,sum=0;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            sum=sum+A[i][j];
        }
        if(pre_sum!=0&&sum!=pre_sum)
            return false;
        else
            pre_sum=sum;
    }
    return true;
}
bool Q39(int **A,int r,int c)
{
    int pre_sum=0,sum=0;
    for (int i = 0; i < c; ++i) {
        for (int j = 0; j < r; ++j) {
            sum=sum+A[i][j];
        }
        if(pre_sum!=0&&sum!=pre_sum)
            return false;
        else
            pre_sum=sum;
    }
    return true;
}
void Q40()
{
    int R, C;
    cout << "Enter matrix row and column sizes ";
    cin >> R >> C;
    //Create two matrices of equal size
    int **A = new int *[R];
    int **B = new int *[R];
    for	(int i = 0; i < R; i++)
    {
        A[i] = new int[C];
        B[i] = new int[C];
    }
    //Populate the elements of the matrices with random integers [1, 6]
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            A[i][j] = (rand() % 9) + -5;
            B[i][j] = (rand() % 9) + -5;
            cout<<"("<<R-i<<", "<<j<<")"<<"\t";
        }
        cout<<endl;
    }
    int sum=0;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            sum=sum+A[i][j]+B[i][j];
        }
    }
    cout << sum << endl;

    for (int i = 0; i < R; i++)
    {
        delete [] A[i];
        delete [] B[i];
    }
    delete [] A;
    delete [] B;
    return ;
}
bool Q41(int **A,int R,int C)
{
    if(R!=C)
        return false;
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            if(R==C)
            {
                if(A[i][j]!=1)
                    return false;
            } else
                if (A[i][j]==1)
                    return false;
        }
    }
    return true;
}
bool Q42(int **A,int R,int C)
{
    if(R!=C)
        return false;
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            if(R>C)
            {
                if(A[i][j]!=0)
                    return false;
            }
        }
    }
    return true;
}
bool Q43(int **A,int R,int C)
{
    if(R!=C)
        return false;
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            if(R<C)
            {
                if(A[i][j]!=0)
                    return false;
            }
        }
    }
    return true;
}
int Q44(int A[],int B[],int size)
{
   int sum=0;
    for (int i = 0; i < size; ++i) {

            sum=sum+A[i]*B[i];

    }
    return sum;
}

int main()
{
    srand(time(0));
    Q40();
    return 0;
}
