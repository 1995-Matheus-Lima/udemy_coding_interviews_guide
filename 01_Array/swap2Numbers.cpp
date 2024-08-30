#include <iostream>

using namespace std;

int main(){
	int a[2] = {3, 4};

	cout << "before swap" << endl;
	cout << "Primeiro: " << a[0] << endl << "Segundo: " << a[1] << endl;  
		
	int temp = a[0];
	a[0] = a[1];
	a[1] = temp;

	cout << "after swap" << endl;
	cout << "Primeiro: " << a[0] << endl << "Segundo: " << a[1] << endl;  

	return 0;
}
