#include <iostream>
#include <cmath>
#include <random>
using namespace std;

double distance(double x, double y){
    return sqrt(x*x + y*y);
};

void monte_carlo_pi(double n){
    double x, y, pi{0}; 
    int inside{0};
    
    //GIVEN IN ASSIGNMENT, unif(0.0,1.0)//
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> distribFloat(0.0,1.0);
    
    for (int i = 0; i < n; i++){
    x = distribFloat(gen);
    y = distribFloat(gen);
        if (distance(x,y) <= 1){
               inside++;
        }

    }

    pi = (4 * inside) / n;
    cout << "Estimated pi = " << pi << endl;
};

int main(){
    double n;
    cout << "Enter the number of Monte-Carlo samples: ";
    cin >> n;

    monte_carlo_pi(n);

    return 0;
};
