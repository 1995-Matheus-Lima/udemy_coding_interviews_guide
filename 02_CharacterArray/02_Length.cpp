#include <iostream>

using namespace std;

int len(char* string){
	int count = 0;
	while(string[count] != '\0'){
		count++;
	}
	
	return count;

}

int main(){
	
	char  string[100];
	cin >> string;

	cout <<"the size of " << string <<" is " <<len(string)<< endl;

	return 0;
}
