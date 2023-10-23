#include<iostream>
using namespace std;
int main()
{  //simple varible
	float x;
	x=10.01;
	cout<<"value of x:  "<<x<<endl;
//	
//	// pointer variable
	float *p;
	cout<<"value of p: "<<p<<endl;
		
	// address of x variable
	cout<<"address of x:  "<<&x<<endl;
	
	// address of p variable
	cout<<"address of p: "<<&p<<endl;
	
	p=&x;
	
	// address of p variable
	cout<<"address of p: "<<&p<<endl;
	cout<<"value of p: "<<p<<endl;
	cout<<"value at address pointed by p: "<<*p<<endl;
//	--------------------------------------------------------------------------//
//	int * p;
//    int x;
//	x=10;
//	cout<<"value of x:  "<<x<<endl;
//	cout<<"value of p: "<<p<<endl;
//	cout<<"address of x:  "<<&x<<endl;
//	cout<<"address of p: "<<&p<<endl;	
//	p=&x;
//	cout<<"After assigning the address of x to p\n";
//	cout<<"address of p: "<<&p<<endl;
//	cout<<"value of p: "<<p<<endl;
//	cout<<"value at address pointed by p: "<<*p<<endl;
	
	return 0;
}
