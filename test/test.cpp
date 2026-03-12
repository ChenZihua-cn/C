// in cpp what is the difference between the ` int a; int &a; int *a`

#include <iostream>

using namespace std;

void check_value( int a){
	cout << "this is int a" << a << endl;
	cout << " the a in this function" << &a << endl;
}

void swap_value( int *a){
	cout << " This is int *a" << " " << *a << " And this is the a " << a << endl; 
	cout << " The a' in this function" << a << endl;
}

void query_value( int &a){
	cout << " this is int &a " << &a << " and a is " << a < endl;
}	

int main(void){
	int a = 1;
	cout << " the a out  of the function" << &a << endl;
	cout << &a << endl;
	check_value(a);
	swap_value(&a);
	query_value(a);	
	return 0;
}