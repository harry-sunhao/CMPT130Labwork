#include <iostream>
#include <cmath>
#include <string>

using namespace std;
/*
   Just a Test
   write your code in this area
*/
void Test(int L,int a,int b)
{
	//Read in the bit pattern size
	//int L;
	do
	{
		cout << "Enter positive integer for the bit pattern size "<<L<<endl;
		//cin >> L;
	}while (L <= 0);

	//Read in two integers a and b 
	//int a, b;
	cout << "Enter an integer a "<<a<<endl;
	//cin >> a;
	cout << "Enter an integer b "<<b<<endl;
	//cin >> b;

	//Calculate the decimal arithmetic sum of a and b and print the result
	int c1 = a + b;
	cout << "In decimal " << a << " + " << b << " is " << c1 << endl;

	//Compute the two's complement representations of a and b
	//Each integer must be represented in L-bits pattern
	//Also these two's complement representations must be returned as string data types
	string A = decimalToTwosComplementString(a, L);
	string B = decimalToTwosComplementString(b, L);

	//Print the two's complement representations of a and b
	cout << "The two's complement of " << a << " is\t " << A << endl;
	cout << "The two's complement of " << b << " is\t " << B << endl;

	//Compute the binary sum of the two's complement representations of a and b
	//The result must be returned as L-bit pattern string data type
	string C = TwosComplementStringAddition(A, B);

	//Print the two's complement representation binary sum
	cout << "The binary sum of " << A << " and " << B << " is " << C << endl;

	//Convert the two's complement representation binary sum to decimal and print
	int c2 = twosComplementStringToDecimal(C);
	cout << "In two's complement arithmetic, " << a << " + " << b << " is " << c2 << endl;

	//Print some concluding results
	if (c1 == c2)
		cout << c1 << " is equal to " << c2 << ". Good Job!" << endl;
	else
	{
		cout << c1 << " is not equal to " << c2 << endl;
		cout << "Either " << c1 << " cannot be represented by the given bit pattern OR we have made a mistake!" << endl;
	}
	cout<<endl;
}
int main()
{
	int B[20]={35,30,18,-1,11,16,33,14,10,-27,-39,1,-11,-31,-17,42,-50,-11,-18,7};
	int A[20]={10,3,7,2,7,9,11,9,8,7,4,12,6,7,7,2,7,3,8,8};
	int C[20]={22,19,46,17,13,-26,21,2,-1,49,-25,-35,17,26,49,-15,45,-17,-13,21};
	for(int i=0;i<20;i++)
		Test(A[i],B[i],C[i]);

	
//	cout<<"------------------------------------"<<endl;
//	main();
	system("Pause");
	return 0;
}

