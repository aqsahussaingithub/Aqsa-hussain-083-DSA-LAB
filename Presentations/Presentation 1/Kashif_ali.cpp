#include <iostream>
using namespace std;

class priority {
public:
    int arr[10];
    int size = 0;

    void insert() {
        int num;
        do{
        cout << "\nWhich Priority queue you want to make\n";
        cout << "1: Ascending\n2: Descending\n";
        cin >> num;
        if (num == 1) {
            cout << "Enter values for Ascending\n";
            for (int i = 0; i < 6; i++) {
                if (i == 0) {
                    cin >> arr[i];
                    size = i;
                } else {
                    cin >> arr[i];
                    size = i;
                    if (arr[i] < arr[i - 1]) {
                        cout << "Enter correct value for Ascending\n";
                        break;
                    }
                }
            }
            
           cout<<"your enter Ascending priority queue\n";
           int num1;
           cout<<"enter which operation you performed\n";
            cout<<"1: insertion\n2: deletion\n3: peek\n";
           cin>>num1;
        
           if(num1==1){
           	cout<<"\n_____________After insertion__________________\n";
           	insertelement();
           	display();
		   }
		   else if(num1==2){
		   	deletion();
		   	cout<<"\n____________After Deletion____________________\n";
		   	display1();
		   }
		   else if(num1==3){
		   	peak();
		   }
		   else{
		   	cout<<"enter correct number\n";
		   }
		   }

		else if(num == 2){
			cout << "Enter values for Descending\n";
            for (int i = 0; i < 6; i++) {
                if (i == 0) {
                    cin >> arr[i];
                    size = i;
                } else {
                    cin >> arr[i];
                    size = i;
                    if (arr[i] > arr[i - 1]) {
                        cout << "Enter correct value for Descending\n";
                        break;
                    }
                }
            }
            cout<<"your enter Descending priority queue\n";
           int num1;
           cout<<"enter which operation you performed\n";
           cout<<"1: insertion\n2: deletion\n3: peek";
           cin>>num1;
           if(num1==1){
           	cout<<"\n_____________After insertion__________________\n";
           	insertelement1();
           	display();
		   }
		   else if(num1==2){
		   	deletion();
		   	cout<<"\n____________After Deletion____________________\n";
		   	display1();
		   }
		   else if(num1==3){
		   	peak();
		   }
		   else{
		   	cout<<"enter correct number\n";
		   }
		}
		else {
            cout << "Enter correct number\n";
        }
    }while(num!=0);
}

    void insertelement() {
        cout << "\nEnter number for insert\n";
        cin >> arr[size + 1];
        if (size == 10) {
            cout << "\nArray is full, can't insert element\n";
        } else {
            size++;
            for (int i = size; i != 0 && parent(i) > arr[i];) {
                int a, b;
                a = parent1(i);
                b = arr[i];
                arr[i] = arr[a];
                arr[a] = b;

                i = parent1(i);
            }
        }
    }
    
    void insertelement1() {
        cout << "\nEnter number for insert\n";
        cin >> arr[size + 1];
        if (size == 10) {
            cout << "\nArray is full, can't insert element\n";
        } else {
            size++;
            for (int i = size; i != 0 && parent(i) < arr[i];) {
                int a, b;
                a = parent1(i);
                b = arr[i];
                arr[i] = arr[a];
                arr[a] = b;

                i = parent1(i);
            }
        }
    }

    void deletion() {
        if (size == 0) {
            cout << "\nHeap is empty, cannot delete element\n";
            return;
        }

        // Replace root with the last element
        arr[0] = arr[size];
        size--;

        int index = 0;
        while (true) {
            int leftChild = 2 * index + 1;
            int rightChild = 2 * index + 2;
            int smallest = index;

            if (leftChild <= size && arr[leftChild] < arr[smallest]) {
                smallest = leftChild;
            }

            if (rightChild <= size && arr[rightChild] < arr[smallest]) {
                smallest = rightChild;
            }

            if (smallest != index) {
                swap(arr[index], arr[smallest]);
                index = smallest;
            } else {
                break;
            }
        }
    }
    
    void peak(){
    	cout<<"Top element of priority queue is:";
    	cout<<" "<<arr[0];
	}

    void display(){
		for(int i=0; i<7; i++){
			cout<<arr[i]<<endl;
		}
	}
	
	void display1(){
		for(int i=0; i<5; i++){
			cout<<arr[i]<<endl;
		}
	}
	
private:
    int parent(int x) {
        int a = x - 1;
        return arr[a / 2];
    }

    int parent1(int x) {
        return (x - 1) / 2;
    }
};

int main() {
    priority m;
    cout<<"first enter priority queue\n";
   m.insert();

    return 0;
}

