#include <iostream>
using namespace std;

bool isleapyear(int year){
	if((year%4==0&&year%100!=0)||(year%400==0)){
		return true;
	}else 
		return false;
}
int count(int y1,int m1,int m2,int d1,int d2){
	int temp=0,i;
		for(i=m1;i<=m2;i++){
			if(i==m2){
				temp+=d2;
			}else if(i==m1){
				switch(i){
				case 1:case 3:case 5:case 7:case 8:case 10: case 12:
						temp+=31-d1+1;break;
				case 4:case 6:case 9:case 11:
						temp+=30-d1+1;break;
				case 2:
					if(isleapyear(y1)){
						temp+=29-d1+1;
					}else{
						temp+=28-d1+1;
					}
					break;
				}
			}else{
				switch(i){
				case 1:case 3:case 5:case 7:case 8:case 10: case 12:
						temp+=31;break;
				case 4:case 6:case 9:case 11:
						temp+=30;break;
				case 2:
					if(isleapyear(y1)){
						temp+=29;
					}else{
						temp+=28;
					}
					break;
				}
			}	
		}
	return temp;
}
double Q11()
{
	cout<<"Please input the height and base of a triangle:";
	double h,b;
	cin>>h>>b;
	//cout<<endl;
	cout<<"The area is "<<h*b/2<<endl;
	return h*b/2;
}
double Q12()
{
	cout<<"Please input the a b c for ax^2+bx+c"<<endl;
	double a,b,c,result;
	result=sqrt(b*b-4*a*c);
	cout<<"This discriminant of the quadratic equation is"<<result<<endl;
	return result;
}
double Q13()
{
	cout<<"Please input the principal amount,interest rate, and the number of years";
	double result,amount,rate;
	int year;
	result=amount+rate*amount*year;
	cout<<"The amount is "<<result<<endl;
	return result;
}

int Q14()
{
	int a,b;
	cout<<"Please input two days"<<endl;
	cin>>a>>b;
	
	/*fix the negative 
	if(a<b){
		int temp=a;
		a=b;
		b=temp;
	}
	if(a<0 || a>31)
	{
		cout<<"Invalid value"<<endl;
		return -1;
	}
	if(b<0 || b>31)
	{
		cout<<"Invalid value"<<endl;
		return -1;
	}
	*/
	int result=a-b;
	cout<<"There are "<<result<<" days between day "<<b<<" and day "<<a<<endl;
	//system("Pause");
	return result;
}
int Q15(){
	int a,b;
	cout<<"Please input two months"<<endl;
	cin>>a>>b;
	if(a<b){
		int temp=a;
		a=b;
		b=temp;
	}
	int result=(a-b)*30;
	/*
	//fix negative and each month days
	//we know 1,3,5,7,8,10,12 have 31days
	result=0;
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	for(int i=b;i<a;i++){
	result=result+month[i-1];
	}
	*/
	cout<<"There are "<<result<<" days between month "<<b<<" and month "<<a<<endl;
	//system("Pause");
	return result;
}
int Q16(){
	int a,b;
	cout<<"Please input two years"<<endl;
	cin>>a>>b;
	if(a<b){
		int temp=a;
		a=b;
		b=temp;
	}
	int result=(a-b)*360;
	/*
	//fix the negative and fix the correct days
	result=0;
	for(int i=b;i<a;i++){
		if((i % 4 == 0 && i % 100 !=0)||(i % 400 ==0 )){
			result+=366;
		}
		else result+=365;
	}
	*/
	cout<<"There are "<<result<<" days between year "<<b<<" and year "<<a<<endl;
	//system("Pause");
	return result;
}
int Q17(){
	int y1,m1,d1,y2,m2,d2,year,mon,day,result;
	cout<<"Please input child1's birthday"<<endl;
	cin>>y1>>m1>>d1;
	cout<<"Please input child2's birthday"<<endl;
	cin>>y2>>m2>>d2;
	year=y2-y1;
	mon=m2-m1;
	day=d2-d1;
	result=mon*30+year*360+day;
	cout<<"There are"<<result<<" between the birth dates of the two children"<<endl;
	/*int i,result=0;
	if(year==0&&mon==0){
		if(d1>d2){
			int temp=d2;
			d2=d1;
			d1=temp;
		}
		day=d2-d1+1;
		result=day;
		cout<<result;

	}else if(year==0){
		if(m1>m2){
			int temp=m2;
			m2=m1;
			m1=temp;
			temp=d2;
			d2=d1;
			d1=temp;
		}
		result=count(y1,m1,m2,d1,d2);
		cout<<result<<endl;
 
	
	}else{
		if(y1>y2){
		int temp=y2;
			y2=y1;
			y1=temp;
			temp=m2;
			m2=m1;
			m1=temp;
			temp=d2;
			d2=d1;
			d1=temp;
		}
		for(i=y1;i<=y2;i++){
			if(i==y1){
				result+=count(y1,m1,12,d1,31);
			}else if(i==y2){
				result+=count(y2,1,m2,1,d2);
			}else {
				if(isleapyear(i)){
					result+=366;
				}else {
					result+=365;
				}
			}
		}
		cout<<result<<endl;
	}
	*/
	return result;
}
void Q18(){
	int result=Q17();
	int year=result/365;
	int month=(result-year*365)/30;
	int day=result-year*365-month*30;
	cout<<year<<month<<day<<endl;
}
void Q19(){
	int a[8], n, i;    
    cout<<"Enter the number to convert:";    
    cin>>n;    
    for(i=0; n>0; i++)    
    {    
        a[i]=n%2;    
        n= n/2;  
    }    
    cout<<"Binary of the given number:";    
    for(i=i-1 ;i>=0 ;i--)    
    {    
        cout<<a[i];    
    }
}
void Q20(){
	int a[8], n, i,divisor;    
    cout<<"Enter the number to convert:";    
    cin>>n;    
    for(i=0; n>0; i++)    
    {    
		divisor= n/2; 
        a[i]=n-divisor*2;
		n=divisor;
         
    }    
    cout<<"Binary of the given number:";    
    for(i=i-1 ;i>=0 ;i--)    
    {    
        cout<<a[i];    
    }
}
void Q21(){
	double money;
	cout<<"Please input your money"<<endl;
	cin>>money;
	/*
	toonie (2 dollar coin), loonie (one dollar coins),quarter (25 cents), dime (10 cents), nickel (5 cents) and penny (1 cent).
	So, 1 toonie= 2 loonie= 4 quarter= 20 dime= 40 nickel= 200 penny
	*/

	int sum=money*100;
	int toonie= sum/200;
	int loonie= (sum-200*toonie)/100;
	int quarter=(sum-200*toonie-100*loonie)/25;
	int dime=(sum-200*toonie-100*loonie-quarter*25)/10;
	int nickle=(sum-200*toonie-100*loonie-quarter*25-dime*10)/5;
	int penny=sum-200*toonie-100*loonie-quarter*25-dime*10-nickle*5;
	cout<<"toonie:"<<toonie<<" loonie:"<<loonie<<" quarter:"<<quarter<<" dime:"<<dime<<" nickle:"<<nickle<<" penny:"<<penny;

}
int main(){
	Q15();
	system("Pause");
	return 0;
}
