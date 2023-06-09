#include <iostream>
#include <thread>

using namespace std;

// Set functions
void arithmetic();
/*void geometry();
void statistics();
void exponents();
void percentages();
void conversions();*/

int main()
{
    std::cout << "What would you like to do?" << endl;
    std::cout << "1. Arithmetic" << endl;
    std::cout << "2. Geometry" << endl;
    std::cout << "3. Statistics" << endl;
    std::cout << "4. Exponents" << endl;
    std::cout << "5. Percentages" << endl;
    std::cout << "6. Conversions" << endl;
    std::cout << "7. Exit" << endl;
    
    int input;
    cin >> input;

    switch (input) {
        case 1:
            system("clear");
            arithmetic();
            break;
        /*case 2:
            system("clear");
            geometry();
            break;
        case 3:
            system("clear");
            statistics();
            break;
        case 4:
            system("clear");
            exponents();
            break;
        case 5:
            system("clear");
            percentages();
            break;
        case 6:
            system("clear");
            conversions();
            break;*/
        case 7:
            system("clear");
            std::cout << "Exiting..." << endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::system("clear");
            break;
        default:
            system("clear");
            std::cout << "Invalid input!" << endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::system("clear");
            main();
            break;
    }
}

void arithmetic() 
{
    char operatorInput;
    string arithmeticInput;
    double firstNumber;
    double secondNumber;

    std::cout << "Enter your arithmetic question." << endl;
    cin >> arithmeticInput;

    // Grab operator
    size_t operatorIndex = arithmeticInput.find_first_of("+-*/");
    operatorInput = arithmeticInput.substr(operatorIndex, 1)[0];

    // Perform arithmetic
    switch (operatorInput) {
        case '+':
            firstNumber = stod(arithmeticInput.substr(0, operatorIndex));
            secondNumber = stod(arithmeticInput.substr(operatorIndex + 1, arithmeticInput.length()));
            std::cout << firstNumber + secondNumber << endl;
            break;
        case '-':
            firstNumber = stod(arithmeticInput.substr(0, operatorIndex));
            secondNumber = stod(arithmeticInput.substr(operatorIndex + 1, arithmeticInput.length()));
            std::cout << firstNumber - secondNumber << endl;
            break;
        case '*':
            firstNumber = stod(arithmeticInput.substr(0, operatorIndex));
            secondNumber = stod(arithmeticInput.substr(operatorIndex + 1, arithmeticInput.length()));
            std::cout << firstNumber * secondNumber << endl;
            break;
        case '/':
            firstNumber = stod(arithmeticInput.substr(0, operatorIndex));
            secondNumber = stod(arithmeticInput.substr(operatorIndex + 1, arithmeticInput.length()));
            std::cout << firstNumber / secondNumber << endl;
            break;
        default:
            std::cout << "Invalid operator" << endl;
            break;
    }

    // Return to main menu
    if (arithmeticInput == "exit") {
        std::cout << "Exiting..." << endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));
        system("clear");
        main();
    }
}