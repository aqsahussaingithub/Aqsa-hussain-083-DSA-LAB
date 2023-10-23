#include<iostream>
using namespace std;
int main(){
int arr[5]={1,2,3,4,5};
int *p;
p=arr; //Points to 0th element of the arr
cout<<*p;
cout<<endl;
p++;
cout<<*p;

int (*po)[5];
cout<<endl;
po=&arr; // Points to the whole array arr.
for (int k = 0; k < 5; k++)
          cout << *(arr+k) << "\t"<<arr[k]<<endl;
       cout <<"\n";


return 0;	
}
