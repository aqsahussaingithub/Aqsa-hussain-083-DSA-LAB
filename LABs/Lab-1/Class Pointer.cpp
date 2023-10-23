#include<iostream>
#include<string>
using namespace std;

class student{
	private:
		int n;
		string name;
	public:
		
		// simple input function
		void in()
		{   cout<<"Enter roll no in digits:\n";
			cin>>n;
			cout<<"Enter Name:\n";
			cin>>name;
			
		}
		
		// parametric input function
		void in(int a,string s)
		{
		   n=a;
		   name=s;
			
		}
		void show()
		{   cout<<"your registration no and name is :";
			cout<<n<<"\t"<<name;
		}
	
};

int main()
{   
	// student class object
	student s;
	s.in();
	s.show();
	
	// pointer
	student *ptr;
	ptr=&s;
	cout<<"\nshow output with (*ptr).show();\n";
	(*ptr).show();
	cout<<"\nshow output with ptr->show();\n";
	ptr->show();
	ptr->in(2,"yasmeen");
	cout<<"\nshow output with ptr->show(); by passing parameters to functions\n";
	ptr->show();
	return 0;
}
