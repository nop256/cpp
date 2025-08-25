#include <iostream>
#include <stdio.h>

int main(){

	int user_input;
	char name[] ="jeff";
	int five[5] = {123456};
	std::cout << "Please enter a number: ";
	std::cin >> user_input;
	if (user_input==69) std::cout << "Nice!\n";
	else std::cout << "You entered: " << user_input << "!\n";
	printf(name);

}
