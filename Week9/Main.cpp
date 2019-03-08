#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>

using namespace std;
#include <iostream>
using namespace std;
void figure_me_out(int& x, int y, int& z)
{
    cout << "Entering function: " << x << ", " << y << ", " << z << endl;
    //Entering function:  10, 20, 30
    x = 1;
    y = 2;
    z = 3;
    cout << "Exiting function: " << x << ", " << y << ", " << z << endl;
    //Entering function:  1, 2, 3
}
int Q1()
{
    int a = 10, b = 20, c = 30;
    cout << "Main Program before function call: " << a << ", " << b << ", " << c << endl;
    //Main Program before function call: 10, 20, 30
    figure_me_out(a, b, c);
    cout << "Main Program after function call: " << a << ", " << b << ", " << c << endl;
    //Main Program before function call: 1, 20, 3
    return 0;
}
void Q2()
{
    int a = 1, b = 2, c =3;
    int *d = &a, *e = &b, *f = &c;
    int &g = a;
    int &h = b;
    int &k = c;
    *e = k;
    e = &h;
    *d = h;
    cout << g << ", " << b << ", " << *f << endl;
}
void magic(int &a, int *b, int c)
{
    //a=8
    //b=6
    //c=10
    c = a;//c=8
    *b = a + c;//b=16
    a = c * *b;//128
}
int Q3()
{
    int x = 6, y = 8, z = 10;
    cout << x << " " << y << " " << z << endl;
    //6 8 10
    magic(y, &x, z);
    cout << x << " " << y << " " << z << endl;
    //16 128 10
    system("Pause");
    return 0;
}
void magic_Q4(int &a, int *b, int c)
{
    //a=8 b=6 c=10
    c = a;
    *b = a + c;
    a = c * *b;
}
int Q4()
{
    int a = 6, b = 8, c = 10;
    cout << a << " " << b << " " << c << endl;
    //6 8 10
    magic_Q4(b, &a, c);
    cout << a << " " << b << " " << c << endl;
    //16 128 10
    system("Pause");
    return 0;
}
void foo(int &m, int n, int *x, int *y)
{
    x = y;
    *y = 7;//b=7
    m = 8;//a=8
    n = *x;//n=7
    cout << m << ", " << n << ", " << *x << ", " << *y << endl;
    //8, 7, 7, 7
    return;
}
int Q5()
{
    int a = 3, b = 5;
    int *p = &a, *q = &b;
    cout << *p << ", " << *q << endl;
    //3, 5
    foo(a, b, p, q);
    cout << a << ", " << b << endl;
    //8, 7
    return 0;
}
/*
6. What is the output of the following code fragment assuming the address of variable a is 4F and the
address of variable p is C9. Assume the code fragment is embedded in a valid C++ main program.
*/
void Q6()
{
    int a = 8;
    int&b= a;
    int* p = &a; //p=4F
    int* &q = p; //Be careful! Is q reference to a? NO. q=C9
    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;
    cout << "The address of a is " << &a << endl;
    cout << "The address of b is " << &b << endl;
    cout << "The value of de-referenced p is " << *p << endl;
    cout << "The value of p is " << p << endl;
    cout << "The address of p is " << &p << endl;
    cout << "The value of q is " << q << endl;
    cout << "The value of dereference of q is " << *q << endl;
    cout << "The memory address of q is " << &q << endl;
}

/*
 Answer:
 The value of a is 8
 The value of b is 8
 The address of a is 4F
 The address of B is 4F
 The value of de-referenced p is 8
 The value of p is 4F
 The address of p is C9
 The value of q is 4F
 The value of dereference of q is 8
 The memory address of q is C9
 */
int Q7()
{
    int a = 6, b = 8;
    int *p = &a, *q = &b, **r = &p;
    *p = *q;
    **r = 10;
    cout << a << ", " << b << ", " << *p << ", " << *q << ", " << **r << endl;
    //10, 8, 10, 8, 10
    *q = 12;
    *p = **r;
    cout << a << ", " << b << ", " << *p << ", " << *q << ", " << **r << endl;
    //10, 12, 10, 12, 10
    return 0;
}
void Q9()
{
    typedef int* IntPtr;
    int a = 5, b = 10, c = 15;
    IntPtr arr[ ] = {&a, &b, &c};
    //arr{5,10,15}
    for (int i = 0; i < 3; i++)
        cout << *(arr[i]) << "\t\t" << arr[i] << endl;
    return;
    //5     AA
    //10    AB
    //15    AC
}
int Q10()
{
    int *a = new int(7);//assume the heap memory has address 4F
    int *p;
    p = a;
    cout << a << endl;
    cout << p << endl;
    cout << *a << endl;
    cout << *p << endl;
    *p = 10;
    cout << *a << endl;
    //delete p;
    delete a;
    return 0;
    //4F
    //4F
    //7
    //7
    //10
}
int* magic()
{
    int *p = new int(7); //assume the heap memory has address 4F
    cout << p << endl;
    cout << *p << endl;
    //delete p;
    return p;
}
int Q11()
{
    int *a;
    a = magic();
    cout << a << endl;
    cout << *a << endl;
    delete a;
    *a = 6;
    cout << *a << endl;
    return 0;
    //4F
    //7
    //4F
    //7
    //6
}
int& foo(int *p)
{
    *p = 7;
    return *p;
}
int Q12()
{
    int x = 5;
    int y = foo(&x);
    cout << x << ", " << y << endl;
    //7, 7
    x = 12;
    cout << x << ", " << y << endl;
    //12, 7
    y = 15;
    cout << x << ", " << y << endl;
    //12, 15
    system("Pause");
    return 0;
}
int& magic_Q13(int &a, int *b, int c)
{
    c = a;
    *b = a + c;
    a = c * *b;
    return a;
}
int Q13()
{
    int x = 6, y = 8, z = 10;
    cout << x << " " << y << " " << z << endl;
    //6 8 10
    z = magic_Q13(y, &x, z);
    //16 128 128
    cout << x << " " << y << " " << z << endl;
    system("Pause");
    return 0;
}

int Q14()
{
    int x = 5;
    int& y = foo(&x);
    cout << x << ", " << y << endl;
    //7, 7
    x = 12;
    cout << x << ", " << y << endl;
    //12, 12
    y = 15;
    cout << x << ", " << y << endl;
    //15, 15
    system("Pause");
    return 0;
}
int& foo_Q15(int *p)
{
    int* q = new int;
    *q = *p;
    return *q;
}
int Q15()
{
    int x = 5;
    int& y = foo_Q15(&x);
    cout << x << ", " << y << endl;
    //5, 5
    x = 12;
    cout << x << ", " << y << endl;
    //12, 5
    y = 15;
    cout << x << ", " << y << endl;
    //12, 15
    delete &y; //This will delete the heap memory created in foo function
    return 0;
}
int& foo_Q16(int *p)
{
    *p = 7;
    int q = *p;
    return q;
}
int Q16()
{
    int x = 5;
    int y = foo_Q16(&x);
    cout << x << ", " << y << endl;
    //7, 7
    return 0;
}
int Q17()
{
    int x = 5;
    int& y = foo_Q16(&x);
    cout << x << ", " << y << endl;
    //7, 7
    return 0;
}
int main()
{
    Q17();
    return 0;
}
