#include <iostream>
#include <iomanip>

int main(){
	
	int num{}, numRev{}, sum{0};
	
	std::cout << "Please enter a number (1000 - 9999): ";
	std::cin >> num;


	for (int i = 0; i < 4; i++){
	
	int digit = num % 10;
	sum += digit;
	numRev = numRev * 10 + digit;
	num = num / 10;	
	}

	std::cout << "Number of reversed digits: " << std::setw(4) << std::setfill('0') << numRev << std::endl;	
	std::cout << "Sum of the digits: " << sum << std::endl;
	return 0;
}
