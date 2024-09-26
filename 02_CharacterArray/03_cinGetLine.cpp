/* 
 * When we write char string[4]
 * 	we can't do string = "abcd"  because the last character should be the special character '\0'
 *	
 *	if we use cin >> string ( and input "abcd"), and then cout << string, we will print abcd and the garbage values  until the character '\0' be founded on those values, 
 *	it may also crash our program, bacause it could try to acess some memory that don't was alocated to our program, and doing that it will get a "segmentation fault" error or other erros as that.
 * */

#include <iostream>

using namespace std;

int main(){
	char string[100];
	cout << "enter a string: ";
	//cin >> string;
  	//one limitation of cin, is that it stop when it see "space", "\n" or "tabs"
	//cin.getline("string name", "lenght", "optionals params")
	cin.getline(string,100,'q');
	// the optional parameter of cin.getlit() is the delimiter, that has "\n" as defeault value;
	cout << string<< endl;

	return 0;
}

