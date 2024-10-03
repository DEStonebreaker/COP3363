#include <iostream>
#include <cmath>


bool is_prime(int n) {
    if (n <= 1){return false;}

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    int lb{1}, ub{0}, count{0};
    
    //USER INPUT//
    while (lb >= ub || lb < 0 || lb == 0){
        std::cout << "Lower bound: ";
        std::cin >> lb;
        std::cout << "Upper bound: ";
        std::cin >> ub;
        if (lb < ub && lb > 0){
            std::cout << "PRIMES IN [" << lb << "," << ub << ")" << std::endl;
            for (int i = lb; i < ub; i++){
                if (is_prime(i) == true){
                    std::cout << i << std::endl;
                    count++;
                }
            }
        }else{
            std::cout << "INVALID RANGE..." << std::endl;
        }
    }
    std::cout << count << " PRIMES FOUND IN RANGE." << std::endl;

    return 0;
}
