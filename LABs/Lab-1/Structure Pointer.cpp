#include<iostream>
using namespace std;
struct  student{
	int Id;
	double cgpa;
	
};
int main()
{  //structure
student s;
s.Id=1;
s.cgpa=3.47;
cout<<"The address of s object is : "<<&s;
cout<<"\nStudent id is: "<<s.Id<<"\nStudent cgpa is: "<<s.cgpa;
// pointer to s object 
student *p;
p=&s;

cout<<"\nThe content in pointer p is : "<<p;
//cout<<"\nThe content in address pointed by pointer p is : "<<*p.id;
cout<<"\nThe content in address pointed by pointer p is : "<<(*p).Id;
cout<<"\nThe content in address pointed by pointer p is : "<<p->Id;

p->cgpa=3;
cout<<"\nThe content in address pointed by pointer p is : "<<p->cgpa;



	return 0;
}
