#include <iostream>
#include <ctime>
int main(){

    srand(time(NULL));
    int num = (rand() % 6)+1;
    int num1 = (rand() % 6)+1;
    int num2 = (rand() % 6)+1;

    std::cout<<num;
    std::cout<<num1;
    std::cout<<num2;
    return 0;
}