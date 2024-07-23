#include <iostream>

int getdigit(const int number);
int sumOddDigits(const std::string cardnumber);
int sumEvenDigits(const std::string cardnumber);


int main(){
    std::string cardnumber;
    int result = 0;

    std::cout<<"Enter your credit card number"<<"\n";
    std::cin>> cardnumber;
    
    result = sumEvenDigits(cardnumber) + sumOddDigits(cardnumber);
    
    if (result% 10  == 0){
        std::cout<<cardnumber<<" is valid";
    }
    else{
        std::cout<<cardnumber<<" not valid";

    }
    return 0;
}

int getdigit(const int number){
    return number % 10 + (number/10%10);

}
int sumOddDigits(const std::string cardnumber){
    int sum = 0;
    for(int i = cardnumber.size()-1; i >=0; i-=2){
        sum += (cardnumber[i] - '0');
    }
    return sum;

}
int sumEvenDigits(const std::string cardnumber){
    int sum = 0;

    for(int i = cardnumber.size()-2; i >=0; i-=2){
        sum += getdigit((cardnumber[i] - '0')*2);
    }

    return sum;

}
