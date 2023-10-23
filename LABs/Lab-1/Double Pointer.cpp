#include<iostream>
using namespace std;
int main()
{   
	int x=10;
	int *p=&x;
//	cout<<"x: "<<x<<endl;
//	cout<<"&x: "<<&x<<endl;
	cout<<"p: "<<p<<endl;
	cout<<"&p: "<<&p<<endl;
//	cout<<"*p: "<<*p<<endl;
	
	int **dp=&p;
	cout<<"dp: "<<dp<<endl;
	cout<<"&dp: "<<&dp<<endl;
	cout<<"**dp: "<<**dp<<endl;
	cout<<"*dp: "<<*dp<<endl;
	
	**dp=1;
	
	cout<<"**dp: "<<**dp<<endl;
	
	
	return 0;
}
