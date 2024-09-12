#include <iostream>


int main(){

	//Initialization of a,b
	int a{}, b{};
	std::cout << "Enter the first number (a): ";
	std::cin >> a;
	std::cout << "Enter the second number (b): ";
	std::cin >> b;

	//swaps the values
	a = (a*2) + b;
	b = (a - b)/2;
	a = (a - (b*2));

	//output
	std::cout << "\nAfter swapping:\na = " << a << "\nb = " << b << std::endl;


	return 0;
}
