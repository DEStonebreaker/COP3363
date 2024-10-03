#include <iostream>
#include <cmath>

void armstrong(int n){
    int nDupe = n;
    int nthPower{0}, nSum{0};

    while (n != 0){
        n /= 10;
        nthPower++;
    }
    n = nDupe;
    
    for (int i = 0; i < nthPower; i++){
        int digit = nDupe % 10;
        nDupe /= 10;
        digit = pow(digit, nthPower);
        nSum += digit;
        digit /= 10;
    }
    if (nSum == n){
        std::cout << nSum << std::endl;
    }
};

int main(){
    int lb{1}, ub{0};

    while(lb >= ub || lb < 0){
        std::cout << "Enter left bound: ";
        std::cin >> lb;
        std::cout << "Enter right bound: ";
        std::cin >> ub;
        if (lb < ub && lb >= 0){ 
            std::cout << "ARMSTRONG NUMBERS FOUND IN [" << lb << "," << ub << ")" << std::endl;
            for (int i = lb; i < ub; i++){
                armstrong(i);
            } 
        }else{
            std::cout << "INVALID RANGE..." << std::endl;
        }        
    };

    return 0;
}
