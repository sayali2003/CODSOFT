#include<iostream>
using namespace std;

int Addition(int a, int b) {
	return a+b;
}

int Subtraction(int a, int b) {
	return a-b;
}

int Multiplication(int a, int b) {
	return a*b;
}

int Division(int a, int b) {
	return a/b;
}

int main() {
	int x, y, ch;
	cout<<"Enter two values: ";
	cin>>x>>y;
	while(ch<=4) {
		cout<<"\nEnter the operation you wish to perform:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division "<<endl;
		cin>>ch;	
		switch(ch)  {
			case 1:
				cout<<"Addition is: "<<Addition(x,y);
				break;
			case 2:
				cout<<"Subtraction is: "<<Subtraction(x,y);
				break;
			case 3:
				cout<<"Multiplication is: "<<Multiplication(x,y);
				break;
			case 4:
				cout<<"Division is: "<<Division(x,y);
				break;
			default:
				cout<<"You entered the wrong choice. ";
				return 0;
		}
	}
	return 0;
}


