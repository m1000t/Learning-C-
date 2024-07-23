#include <iostream>
#include <vector>
#include <cmath>

int main(){

    char op;
    double num1;
    double num2;

    std::cout<<"This is calc short for calculator \n";
    std::cout<<"enter either (+,-,/,*): \n";
    std::cin>> op;

    std::cout<< "enter a number \n";
    std::cin>> num1;
    
    std::cout<< "enter another number \n";
    std::cin>> num2;

    switch(op){
        case '+':
            std::cout<<(num1+num2);
        break;
        case '-':
            std::cout<<(num1-num2);
        break;
        case '*':
            std::cout<<(num1*num2);
        break;
        case '/':
            std::cout<<(num1/num2);
        break;
        default:
            std::cout<<"please only enter (+,-,/,*)";   
        break;
    }

    return 0;
}