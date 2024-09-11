#include <iostream>
#include <iomanip>

float bmi(float kg, float m){
	return (kg / (m*m));
}

int main(){
	
	int feet{}, inches{};
	float kg{}, m{}, lbs{}, minLBS{}, maxLBS{};

	std::cout << "Enter your height (in feet and inches):\nFeet: ";
	std::cin >> feet;
	std::cout << "Inches: ";
	std::cin >> inches;
	m = ((feet * 12) + inches) * 0.0254;
	std::cout << "(Your height in meters is " << std::setprecision(3) << m << " m)\n";

	std::cout << "Enter your weight (in pounds): ";
	std::cin >> lbs;
	kg = (lbs * .4536);
	std::cout << "(Your weight in kilos is " << std::setprecision(4) << kg << " kg)\n";
	std::cout << "Your BMI is " << std::setprecision(4) << bmi(kg,m) << "\n";

	minLBS = (18.5 * (m*m) * 2.205);
	maxLBS = (24.9 * (m*m) * 2.205);
	std::cout << "Your minimum healthy weight is " << std::setprecision(5) << minLBS << "\n";
	std::cout << "Your maximum healthy weight is " << std::setprecision(5) << maxLBS << "\n";




	return 0;
}
