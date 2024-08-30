#include <iostream>

using namespace std;

int main(){
	int a[10] = {14,3,4,7,6,7,8,12,13,2};

	int large = a[0];
	for(int i = 1; i < (sizeof(a)/sizeof(int)) ;i++){
		if(a[i] > large){
			large = a[i];
		}
	}

	cout << "the largest elementy in array is: " << large << endl;

	
	return 0;
}
