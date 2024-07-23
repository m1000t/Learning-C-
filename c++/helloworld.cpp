#include <iostream>
#include <vector>
#include <cmath>

int main(){
    double a;
    double b;  
    double c;

    std::cout << "Enter the side A: ";
    std::cin >> a;

    std::cout << "Enter the side B: ";
    std::cin >> b;

    std::cout << "Enter the side C: ";
    std::cin >> c;

    a = pow(a,2);
    b = pow(b,2);
    c = sqrt(a+b);

    std::cout<<"side c: "<< c;
    return 0;
}