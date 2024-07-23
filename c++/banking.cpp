#include <iostream>


void showbalance(double balance);
double deposit();
double withdraw(double balance);


int main(){
    double balance = 0;
    int choice = 0;
do
{
    std::cout<<"enter your choice\n";
    std::cout<<"1. Balance \n";
    std::cout<<"2. Deposit\n";
    std::cout<<"3. Withdraw\n";
    std::cout<<"4. Exit\n";
    std::cin>>choice;
    switch (choice)
    {
    case 1:showbalance(balance);
        break;
    case 2: balance += deposit();
        showbalance(balance);
        break;
    case 3:
        balance -= withdraw(balance);
        showbalance(balance);
        break;  
    case 4: 
    std::cout<<"thx for visiting jewish bank of isreal";
        break;      
        
    default:
        break;
    }
    
    /* code */
} while (choice !=4);

    return 0;
}

void showbalance(double balance){
    std::cout<< "your balance is $"<< balance <<"\n";
}
double deposit(){
    double amount = 0;

    std::cout<<"enter amount to be deposit $";
    std::cin>> amount;

    if (amount > 0 ){
    return amount;
    }
    else{
        std::cout<<"that is not a right number \n";
        return 0;
    }
}
double withdraw(double balance){
    double amount = 0;
    std::cout<<"enter amount to withdraw";
    std::cin>> amount;

    if (amount > balance){
        std::cout<<"your acount doesnt have money\n";
        return 0;
    }
    else if  (amount < 0){
        std::cout<<"that isnt a valid number\n";
        return 0;
        
    }
    else{
        return amount;
    }
   
}
