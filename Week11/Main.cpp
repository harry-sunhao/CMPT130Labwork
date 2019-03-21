#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>

using namespace std;
int stringLength(char A[])
{
    int index =0;
    while(A[index]!='\0')
    {
        index++;
    }
    return index;
}
int Q2_findCharacter(char A[],char x)
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
int Q3_findLastCharacter(char A[],char x)
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
bool Q4_doesContainDigit(char a[])
{
    int size=stringLength(a);
    for (int i = 0; i < size; ++i) {
        if(a[i]>=48&&a[i]<=57)
        {
            return true;
        }
    }
    return false;
}
bool Q5_doesContainLower(char a[])
{
    int size=stringLength(a);
    for (int i = 0; i < size; ++i) {
        if(a[i]>=97&&a[i]<=122)
        {
            return true;
        }
    }
    return false;
}
bool Q6_doesContainUpper(char a[])
{
    int size=stringLength(a);
    for (int i = 0; i < size; ++i) {
        if(a[i]>=65&&a[i]<=90)
        {
            return true;
        }
    }
    return false;
}
bool Q7_doesContainAlphabet(char a[])
{
    if(Q6_doesContainUpper(a))
        return true;
    if(Q5_doesContainLower(a))
        return true;
}
bool Q8_isLower(char a[])
{
    int size=stringLength(a);
    for (int i = 0; i < size; ++i) {
        if(a[i]<97||a[i]>122)
        {
            return false;
        }
    }
    return true;
}
bool Q9_isUpper(char a[])
{
    int size=stringLength(a);
    for (int i = 0; i < size; ++i) {
        if(a[i]<65||a[i]>90)
        {
            return false;
        }
    }
    return true;
}
bool Q10_isNumber(char a[])
{
    int size=stringLength(a);
    for (int i = 0; i < size; ++i) {
        if(a[i]<48||a[i]>57)
        {
            return false;
        }
    }
    return true;
}
bool Q11_isAlphabet(char a[])
{
    int size=stringLength(a);
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
int Q12_countLowerAlohabets(char a[])
{
    int size=stringLength(a),count=0;
    for (int i = 0; i < size; ++i) {
        if(a[i]>=97&&a[i]<=122)
        {
            count++;
        }
    }
    return count;
}
char * Q13_getLowerAlphabets(char a[])
{
    int len=Q12_countLowerAlohabets(a),index=0,size=stringLength(a);
    char *b=new char[len+1];
    for (int i = 0; i < size; ++i) {
        if(a[i]>=97&&a[i]<=122)
        {
            b[index]=a[i];
            index++;
        }
    }
    b[len]='\0';
    return b;

}
int Q14_countUpperAlohabets(char a[])
{
    int size=stringLength(a),count=0;
    for (int i = 0; i < size; ++i) {
        if(a[i]>=65&&a[i]<=90)
        {
            count++;
        }
    }
    return count;
}
char * Q15_getUpperAlphabets(char a[])
{
    int len=Q14_countUpperAlohabets(a),index=0,size=stringLength(a);
    char *b=new char[len+1];
    for (int i = 0; i < size; ++i) {
        if(a[i]>=65&&a[i]<=90)
        {
            b[index]=a[i];
            index++;
        }
    }
    b[len]='\0';
    return b;

}
int Q16_countDigits(char a[])
{
    int size=stringLength(a),count=0;
    for (int i = 0; i < size; ++i) {
        if(a[i]>=48&&a[i]<=57)
        {
            count++;
        }
    }
    return count;
}
char * Q17_getDigits(char a[])
{
    int len=Q16_countDigits(a),index=0,size=stringLength(a);
    char *b=new char[len+1];
    for (int i = 0; i < size; ++i) {
        if(a[i]>=48&&a[i]<=57)
        {
            b[index]=a[i];
            index++;
        }
    }
    b[len]='\0';
    return b;

}
int Q18_countAlphabets(char a[])
{
    int size=stringLength(a),count=0;
    for (int i = 0; i < size; ++i) {
        if(a[i]>=65&&a[i]<=90)
        {
            count++;
        }
        if(a[i]>=97&&a[i]<=122)
        {
            count++;
        }
    }
    return count;
}
char * Q19_getAlphabets(char a[])
{
    int len=Q16_countDigits(a),index=0,size=stringLength(a);
    char *b=new char[len+1];
    for (int i = 0; i < size; ++i) {
        if(a[i]>=65&&a[i]<=90)
        {
            b[index]=a[i];
            index++;
        }
        if(a[i]>=97&&a[i]<=122)
        {
            b[index]=a[i];
            index++;
        }
    }
    b[len]='\0';
    return b;
}
bool Q20_isPalindrome(char a[])
{
    int len=stringLength(a);
    char *b=new char [len+1];
    for (int i = 0,j=len-1; i < len; ++i,--j)
    {
        b[i]=a[j];
    }
    b[len]='\0';
    return strcmp(a,b)==0?true:false;
}
/*int Q22_countCharacter(char a[],char x)
{
    int index=0;
    while(a[index]!='\0')
    {
        if(a[index]==x)
            return index;
        index++;
    }
    return index;
}*/
int Q23_countCharacters(char a[],char b[])
{
    int size1=stringLength(a),size2=stringLength(b),count=0;
    for (int i = 0; i < size1; ++i) {
        for (int j = i; j < size2; ++j) {
            if (a[i]==b[j])
            {
                count++;
                break;
            }


        }
    }
    return count;
}
bool isFound(char A[],char x)
{
    int index=0;
    while(A[index]!='\0')
    {
        if(A[index]==x)
            return true;
        index++;
    }
    return false;
}
bool Q24_isContained(char a[], char b[])
{
    int size=stringLength(a);
    for (int i = 0; i < size; ++i) {
        if(isFound(b,a[i])== false)
        {
            return false;
        }
    }
    return true;
}
int Q25_countCharactersUpTo(char a[],char x,int k)
{
    int len=stringLength(a);
    if(k>len)
        k=len;
    int count=0;
    for (int i = 0; i <= k; ++i) {
        if(a[i]==x)
            count++;
    }
    return count;
}
int Q26_countDistinctChars(char a[])
{
    int len=stringLength(a),count=0;
    for(int i=0;i<len;i++)
    {
        //cout<<Q25_countCharactersUpTo(a,a[i],i)<<endl;
        if(Q25_countCharactersUpTo(a,a[i],i)==1)
            count++;
    }
    return count;
}
char* Q27_getDistinctChars(char a[])
{
    int len=Q26_countDistinctChars(a),index=0,size=stringLength(a);
    char *b=new char[len+1];
    for (int i = 0; i < size; ++i) {
        if(Q25_countCharactersUpTo(a,a[i],i)==1)
        {
            b[index]=a[i];
            index++;
        }
    }
    b[len]='\0';
    return b;
}
int Q28_stringCompare(char a[],char b[])
{
    while( ( *a != '\0' && *b != '\0' ) && *a == *b )
    {
        a++;
        b++;
    }

    if(*a == *b)
    {
        return 0; // strings are identical
    }

    else
    {
        if( (*a - *b)>0)
            return 1;
        else
            return -1;
    }
}
void Q29_TestQ28()
{
    char a[]="Apples";
    char b[]="Applesssss";
    cout<<Q28_stringCompare(a,b)<<", and the strcmp result in cstdlib is"<<strcmp(a,b)<<endl;
}
void Q30_stringCopy(char s1[],char s2[])
{
    int s1_len=stringLength(s1),s2_len=stringLength(s2),i=0;
    if(s2>=s1)
    {
        while (s1[i]!='\0')
        {
            s2[i]=s1[i];
            i++;
        }
        s2[i]='\0';
    }
}
void Test_Q30()
{
    char S1[]="BLABLABLABLA";
    int len=stringLength(S1);
    cout<<"The C-string S1 is"<<S1<<endl;
    cout<<"The length is "<<len<<endl;
    cout<<"Test 1. S2 < S1"<<endl<<endl;
    char *s2=new char[3];
    for (int i = 0; i < 2; ++i) {
        s2[i]='A';
    }
    s2[2]='\0';
    cout<<"The C-string S2 is"<<s2<<endl;
    Q30_stringCopy(S1,s2);
    cout<<"After, The C-string S2 is"<<s2<<endl;


    delete[](s2);

    cout<<"Test 2. S2 = S1"<<endl<<endl;
    s2=new char[len+1];
    for (int i = 0; i < len; ++i) {
        s2[i]='A';
    }
    s2[2]='\0';
    cout<<"The C-string S2 is"<<s2<<endl;
    Q30_stringCopy(S1,s2);
    cout<<"After, The C-string S2 is"<<s2<<endl;
    delete[](s2);

}
int main()
{
    Test_Q30();

    srand(time(0));
    char a[]="massachussettes";
    char* b=Q27_getDistinctChars(a);
    cout<<b<<endl;
    delete []b;
    return 0;
}
