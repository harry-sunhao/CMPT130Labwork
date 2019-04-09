#include <iostream>

using namespace std;


int main()
{
    int row =3,cow=3;
    int **A=new int* [row];
    for(int i=0;i<row;i++)
    {
        A[i]=new int [cow];
    }
    int num=1;
    for(int i=0;i<cow;i++)
    {
        for(int j=0;j<row;j++)
        {
            A[j][i]=num;
            num+=2;
        }
    }
    for(int i=0;i<cow;i++)
    {
        for(int j=0;j<row;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<row;i++)
    {
        delete [] A[i];
    }
    delete []A;
    return 0;
}
