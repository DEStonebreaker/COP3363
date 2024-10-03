#include <iostream>
#include <cmath>
#include <random>
using namespace std;

double gridWalk(double n){
    int x{0}, y{0};

    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> distribFloat(0.0,1.0);

    for (int i = 0; i < n; i++){
    double compare = distribFloat(gen);
        if (compare <= .25){y++;}
        else if (compare <= .50){y--;}
        else if (compare <= .75){x++;}
        else {x--;}
    }

    return sqrt(x*x + y*y);
};

int main(){
    double steps, trials, sumDistance{0.0};
    cout << "ENTER NUMBER OF STEPS: ";
    cin >> steps;
    cout << "ENTER NUMBER OF TRIALS: ";
    cin >> trials;
    
    for (int i = 0; i < trials; i++){
        sumDistance += gridWalk(steps);
    }    

    cout << "EXPECTED DISTANCE: " << sumDistance / trials << endl;
    cout << "THEORETICAL DISTANCE: " << sqrt(steps) << endl;

    return 0;
}
