#include <iostream>
#include <vector>
#include <cmath>

int main(){
    double temp;
    char unit;

    std::cout<<"Temp converter\n";
    std::cout << "you can convert farenheit or celsius\n";
    std::cout << "F= farenheit or C = celsius\n";

    std::cout<< "what unit would you like to convert to \n";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout<<"enter the temp";
        std::cin>> temp;
        temp = (1.8*temp) +32.0;
        std::cout<< "The temp is " << temp << " F";
}
    else if (unit == 'C' || unit == 'c'){
        std::cout<<"enter the temp";
        std::cin>> temp;
        temp = (temp-32)/1.8;
        std::cout<< "The temp is " << temp << " C";
    }
    else {
        std::cout<<"only enter C or F";
    }
    
    return 0;
}