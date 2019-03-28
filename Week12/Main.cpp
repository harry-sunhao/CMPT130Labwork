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
    if(A[0]>=B[0]&&A[stringLength(A)]<=A[stringLength(B)])
        return true;
    return false;
}
void printarr(int a[],int size)
{
    for (int i = 0; i < size; ++i) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void selectionsort(int a[],int size)
{
    for (int i = 0; i < size; ++i) {
        int index=i;
        for (int j = i+1; j < size; ++j) {
            if(a[j]<a[index])
                index=j;
            cout<<"i: "<<i<<" j: "<<j<<" index: "<<index<<" ]";
            printarr(a,size);
        }
        int temp=a[i];
        a[i]=a[index];
        a[index]=temp;
    }
}
void Bubblesort(int a[],int size)
{
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size-1-i; ++j) {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            cout<<"i: "<<i<<" j: "<<j<<" ]";
            printarr(a,size);
        }
    }
}
void insertionsort(int a[],int size)
{
    for(int i=1;i<size;i++){
        int key=a[i];
        int j=i-1;
        while((j>=0) && (key<a[j])){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;

    }
}
void Q5()
{
    //9 2 3 5 7 6
    //selection sort
    /*
        i: 0 j: 1 index: 1 ]9 2 3 5 7 6
        i: 0 j: 2 index: 1 ]9 2 3 5 7 6
        i: 0 j: 3 index: 1 ]9 2 3 5 7 6
        i: 0 j: 4 index: 1 ]9 2 3 5 7 6
        i: 0 j: 5 index: 1 ]9 2 3 5 7 6
        i: 1 j: 2 index: 2 ]2 9 3 5 7 6
        i: 1 j: 3 index: 2 ]2 9 3 5 7 6
        i: 1 j: 4 index: 2 ]2 9 3 5 7 6
        i: 1 j: 5 index: 2 ]2 9 3 5 7 6
        i: 2 j: 3 index: 3 ]2 3 9 5 7 6
        i: 2 j: 4 index: 3 ]2 3 9 5 7 6
        i: 2 j: 5 index: 3 ]2 3 9 5 7 6
        i: 3 j: 4 index: 4 ]2 3 5 9 7 6
        i: 3 j: 5 index: 5 ]2 3 5 9 7 6
        i: 4 j: 5 index: 4 ]2 3 5 6 7 9
     */
    //Bubble sort
    /*
        i: 0 j: 0 ]2 9 3 5 7 6
        i: 0 j: 1 ]2 3 9 5 7 6
        i: 0 j: 2 ]2 3 5 9 7 6
        i: 0 j: 3 ]2 3 5 7 9 6
        i: 0 j: 4 ]2 3 5 7 6 9
        i: 1 j: 0 ]2 3 5 7 6 9
        i: 1 j: 1 ]2 3 5 7 6 9
        i: 1 j: 2 ]2 3 5 7 6 9
        i: 1 j: 3 ]2 3 5 6 7 9
        i: 2 j: 0 ]2 3 5 6 7 9
        i: 2 j: 1 ]2 3 5 6 7 9
        i: 2 j: 2 ]2 3 5 6 7 9
        i: 3 j: 0 ]2 3 5 6 7 9
        i: 3 j: 1 ]2 3 5 6 7 9
        i: 4 j: 0 ]2 3 5 6 7 9
     */
    //Insert sort
    /*
     *  i: 1 j: -1 ]9 9 3 5 7 6
        i: 2 j: 0 ]2 9 9 5 7 6
        i: 3 j: 1 ]2 3 9 9 7 6
        i: 4 j: 2 ]2 3 5 9 9 6
        i: 5 j: 3 ]2 3 5 7 9 9
        i: 5 j: 2 ]2 3 5 7 7 9
     */
    int a[6]={9,2,3,5,7,6};
    //selectionsort(a,6);
    //Bubblesort(a,6);
    insertionsort(a,6);

}
void Q6()
{
    //Nothing code just a example
    // 9 8 7 6 5 4 3 2 1 0

}
void Q7()
{
    //Nothing code just a example
    // 1 2 3 4 5 6 7 8 9
}
void Q8()
{
    //Nothing code just a example
    // 9 8 7 6 5 4 3 2 1 0

}
int BinarySearch(int a[],int size,int item)
{
    int startIndex=0,lastIndex=size-1;

    while(startIndex<=lastIndex)
    {
        int midIndex=(startIndex+lastIndex)/2;
        int Guess=a[midIndex];
        if(Guess==item)
        {
            return midIndex;
        }
        else if(Guess>item)
            lastIndex=midIndex-1;
        else if(Guess<item)
            startIndex=midIndex+1;
    }
    return -1;
}
int SequentialSearch(int a[],int size,int item)
{
    for (int i = 0; i < size; ++i) {
        if(a[i]==item)
            return i;
    }
    return -1;
}
int *Q10(int n)
{
    int a=1,b=n;
    int count=b-a+1;
    int *arr=new int [n];
    for (int i = 0; i < n; ++i) {
        while(true)
        {
            int num=rand()%count+a;
            if(SequentialSearch(arr,n,num)==-1)
            {
                arr[i]=num;
                break;
            }
        }
    }
    insertionsort(arr,n);
    printarr(arr,n);
    delete []arr;
}

int Q11_c_str_sequentialSearch(char A[],char x)
{
    int index=0;
    while(A[index]!='\0')
    {
        if(A[index]==x)
            return index;
        index++;
    }
    return -1;
}
int Q12_reverseSequentialSearch(int a[],int size,int x)
{
    for (int i = size-1; i >=0; ++i) {
        if(a[i]==x)
            return i;
    }
    return -1;
}
int Q13_reverse_c_str_SequentialSearch(char A[],char x)
{
    int index=stringLength(A);
    while(A[index]!='\0')
    {
        if(A[index]==x)
            return index;
        index--;
    }
    return -1;
}
int Q14_c_str_BinarySearch(char a[],int startIndex,int lastIndex,char item)
{
    
    while(startIndex<=lastIndex)
    {
        int midIndex=(startIndex+lastIndex)/2;
        int Guess=a[midIndex];
        if(Guess==item)
        {
            return midIndex;
        }
        else if(Guess>item)
            lastIndex=midIndex-1;
        else if(Guess<item)
            startIndex=midIndex+1;
    }
    return -1;
}
int main()
{
    srand(time(0));
    Q10(1);
    //system("Pause");
    return 0;
}
