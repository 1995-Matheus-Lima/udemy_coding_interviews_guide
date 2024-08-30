#include <iostream>

using namespace std;

int main(){
	int n;
	cout << "type the array size: ";
	cin >> n;
	int a[n];
	for(int i = 0; i < n ; i++){
	cout << "input the " << i+1 << "° elementy: ";
	cin >> a[i];
	}
	int sum = 0;
	for(int i = 0; i < (sizeof(a)/sizeof(int)); i++){
		sum += a[i];
	}
	cout << "the Sum of all elements in array is: " << sum << endl;

		
	return 0;
}
