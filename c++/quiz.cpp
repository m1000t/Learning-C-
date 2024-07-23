#include <iostream>

int main(){

    std::string questions[] = {"1. What is my name ?",
                                "2. What year was c++ created ?",
                                "3. is the earth flat? ",
                                "4. When is canada day?"};
    
    std::string options[][4] = {{"A. Arnav", "B. lebron", "C. goat", "D. noir"},
                            {"A. 1969", "B. 1985", "C. 1975", "D. 2001"},
                            {"A. No", "B. Yes", "C. Sometimes", "D. IDK"},
                            {"A. July 1", "B. October 27", "C. IDK", "D. september 1st 2001"}};

    char answerkey[] = {'A','B','A','A'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;
    
    for (int i = 0; i < size; i++){
        std::cout<<"*************************************************"<<"\n";
        std::cout<<questions[i] <<"\n";
        std::cout<<"*************************************************"<<"\n";
        for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout<<options[i][j]<<"\n";

        }
        std::cin>>guess;
        guess = toupper(guess);
        if (guess == answerkey[i]){
            std::cout<<"Correct\n";
        }
        else {
            std::cout<<"Incorrect"<<"\n";
            std::cout<<"Answer:"<< answerkey[i] << "\n";
        }
    }

    return 0;
}