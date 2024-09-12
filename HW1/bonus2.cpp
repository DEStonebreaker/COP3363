#include <iostream>
#include <cmath>
#define PI 3.14159265

float vectorLength(float x, float y, float z){
	return sqrt(x*x + y*y + z*z);
}

int main(){
	
	float ux{}, uy{}, uz{}, vx{}, vy{}, vz{};

	//User input
	std::cout << "Enter the [x, y, z] of vector \'u\' (Separated by spaces): ";
	std::cin >> ux >> uy >> uz;
	std::cout << "You have entered u = [" << ux << "," << uy << "," << uz << "]\n";

	std::cout << "Enter the [x, y, z] of vector \'v\' (Separated by spaces): ";
	std::cin >> vx >> vy >> vz;
	std::cout << "You have entered v = [" << vx << "," << vy << "," << vz << "]\n";
	std::cout << "==========================\n(a)\n==========================" << std::endl;

	//vector length(s)
	std::cout << "The length of u, ||u|| = " << vectorLength(ux,uy,uz) << std::endl;
	std::cout << "The length of v, ||v|| = " << vectorLength(vx,vy,vz) << std::endl;
	std::cout << "==========================\n(b)\n==========================" << std::endl;

	//Dot product
	float dotUV = ( ux*vx + uy*vy + uz*vz );
	std::cout << "The dot product of u and v, uv = " << dotUV << std::endl;
	std::cout << "==========================\n(c)\n==========================" << std::endl;

	//Cosine Similarities
	float radian = ( dotUV / (vectorLength(ux,uy,uz) * vectorLength(vx,vy,vz)) );
	float degree = acos (radian) * 180.0 / PI;
	std::cout << "The angle of u and v (in degrees) is: " << degree << std::endl;

	return 0;
}
