/* HASSAAN ABDULLAH
BSCS-SECTION(D)*/
#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	char a;
	while(true)
	{	
	cout<<"ENTER_YOUR_FIRST_NUMBER : ";
	cin>>num1;
	cout<<"ENTER_YOUR_SECOND_NUMBER : ";
	cin>>num2;
	cout<<"ENTER_+_FOR_ADDITION "<<endl;
	cout<<"ENTER_-_FOR_SUBSTRACTION"<<endl;
	cout<<"ENTER_*_FOR_MULTIPLICATION"<<endl;
	cout<<"ENTER_/_FOR_QUOTIENT"<<endl;
	cout<<"ENTER_%_FOR_REMAINDER"<<endl;
	cout<<"ENTER_YOUR_SIGN : ";
	cin>>a;
	if(a=='+')
	cout<<"ADDITION_OF_YOUR_NUMBERS_IS : "<<num1+num2<<endl<<endl;
	else
	if(a=='-')
	cout<<"SUBSTRACTION_OF_YOUR_NUMBERS_IS : "<<num1-num2<<endl<<endl;
	else 
	if(a=='*')
	cout<<"MULTIPLICATION_OF_YOUR_NUMBERS_IS : "<<num1*num2<<endl<<endl;
	else
	if(a=='/')
	cout<<"QOUTIENT_OF_YOUR_NUMBERS_IS : "<<num1/num2<<endl<<endl;
	else
	if(a=='%')
	cout<<"REMINDER_OF_YOUR_NUMBERS_IS : "<<num1%num2<<endl;
	else
	cout<<"SIGN_IS_NOT_MATCH"<<endl<<endl;;
	break;		
 }
 cout<<"YOUR PROGRAM IS END";
 return 0;
}
