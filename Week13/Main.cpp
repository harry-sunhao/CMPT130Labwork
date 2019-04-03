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
int main()
{
    Q8();
    system("Pause");
    return 0;
}
