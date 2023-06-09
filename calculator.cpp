#include <iostream>
#include <thread>
#include <cmath>

using namespace std;

// Set functions
void arithmetic();
void geometry();
/*void statistics();
void exponents();
void percentages();
void conversions();*/

int main()
{
    system("clear");

    cout << "What would you like to do?" << endl;
    cout << "1. Arithmetic" << endl;
    cout << "2. Geometry" << endl;
    cout << "3. Statistics" << endl;
    cout << "4. Exponents" << endl;
    cout << "5. Percentages" << endl;
    cout << "6. Conversions" << endl;
    cout << "7. Exit" << endl;
    
    int input;
    cin >> input;

    switch (input) {
        case 1:
            arithmetic();
            break;
        case 2:
            geometry();
            break;
        /*case 3:
            statistics();
            break;
        case 4:
            exponents();
            break;
        case 5:
            percentages();
            break;
        case 6:
            conversions();
            break;*/
        case 7:
            cout << "Exiting..." << endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            system("clear");
            break;
        default:
            system("clear");
            cout << "Invalid input!" << endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            system("clear");
            main();
            break;
    }
}

void arithmetic() 
{
    system("clear");
    char operatorInput;
    string arithmeticInput;
    double firstNumber;
    double secondNumber;

    cout << "Enter your arithmetic question." << endl;
    cout << "Example: 1 + 1" << endl;
    cout << "Type 'back' to return to main menu." << endl;
    cin >> arithmeticInput;

    // Grab operator
    size_t operatorIndex = arithmeticInput.find_first_of("+-*/");
    operatorInput = arithmeticInput.substr(operatorIndex, 1)[0];

    // Perform arithmetic
    switch (operatorInput) {
        case '+':
            firstNumber = stod(arithmeticInput.substr(0, operatorIndex));
            secondNumber = stod(arithmeticInput.substr(operatorIndex + 1, arithmeticInput.length()));
            cout << firstNumber + secondNumber << endl;
            break;
        case '-':
            firstNumber = stod(arithmeticInput.substr(0, operatorIndex));
            secondNumber = stod(arithmeticInput.substr(operatorIndex + 1, arithmeticInput.length()));
            cout << firstNumber - secondNumber << endl;
            break;
        case '*':
            firstNumber = stod(arithmeticInput.substr(0, operatorIndex));
            secondNumber = stod(arithmeticInput.substr(operatorIndex + 1, arithmeticInput.length()));
            cout << firstNumber * secondNumber << endl;
            break;
        case '/':
            firstNumber = stod(arithmeticInput.substr(0, operatorIndex));
            secondNumber = stod(arithmeticInput.substr(operatorIndex + 1, arithmeticInput.length()));
            cout << firstNumber / secondNumber << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
            break;
    }

    // Return to main menu
    if (arithmeticInput == "back") {
        main();
    }
}

// Geometry
void area();
void perimeter();
void volume();
void surfaceArea();

void geometry()
{
    system("clear");
    cout << "What would you like to do?" << endl;
    cout << "1. Area" << endl;
    cout << "2. Perimeter" << endl;
    cout << "3. Volume" << endl;
    cout << "4. Surface Area" << endl;
    cout << "5. Back" << endl;

    int input;
    cin >> input;

    switch (input) {
        case 1:
            area();
            break;
        case 2:
            perimeter();
            break;
        case 3:
            volume();
            break;
        case 4:
            surfaceArea();
            break;
        case 5:
            main();
            break;
        default:
            system("clear");
            cout << "Invalid input!" << endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            system("clear");
            geometry();
            break;
    }

}

void area() 
{
    system("clear");
    cout << "What shape would you like to find the area of?" << endl;
    cout << "1. Square" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "4. Circle" << endl;
    cout << "5. Back" << endl;

    int input;
    cin >> input;

    switch (input) {
        case 1:
            system("clear");
            cout << "Formula: s^2" << endl;
            cout << "Enter the length of one side." << endl;
            double side;
            cin >> side;
            cout << side * side << endl;
            break;
        case 2:
            system("clear");
            cout << "Formula: l * w" << endl;
            cout << "Enter the length of one side." << endl;
            double side1;
            cin >> side1;
            cout << "Enter the length of the other side." << endl;
            double side2;
            cin >> side2;
            cout << side1 * side2 << endl;
            break;
        case 3:
            system("clear");
            cout << "Formula: 1/2 * b * h" << endl;
            cout << "Enter the length of the base." << endl;
            double base;
            cin >> base;
            cout << "Enter the height." << endl;
            double height;
            cin >> height;
            cout << base * height / 2 << endl;
            break;
        case 4:
            system("clear");
            cout << "Formula: pi * r^2" << endl;
            cout << "Enter the radius." << endl;
            double radius;
            cin >> radius;
            cout << 3.14159265359 * radius * radius << endl;
            break;
        case 5:
            geometry();
            break;
        default:
            system("clear");
            cout << "Invalid input!" << endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            system("clear");
            area();
            break;
    }
}

void perimeter()
{
    system("clear");
    cout << "What shape would you like to find the perimeter of?" << endl;
    cout << "1. Square" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "4. Circle" << endl;
    cout << "5. Back" << endl;

    int input;
    cin >> input;

    switch (input) {
        case 1:
            system("clear");
            cout << "Formula: 4 * s" << endl;
            cout << "Enter the length of one side." << endl;
            double side;
            cin >> side;
            cout << 4 * side << endl;
            break;
        case 2:
            system("clear");
            cout << "Formula: 2 * l + 2 * w" << endl;
            cout << "Enter the length of one side." << endl;
            double side1;
            cin >> side1;
            cout << "Enter the length of the other side." << endl;
            double side2;
            cin >> side2;
            cout << 2 * side1 + 2 * side2 << endl;
            break;
        case 3:
            system("clear");
            cout << "Formula: s1 + s2 + s3" << endl;
            cout << "Enter the length of the first side." << endl;
            double side3;
            cin >> side3;
            cout << "Enter the length of the second side." << endl;
            double side4;
            cin >> side4;
            cout << "Enter the length of the third side." << endl;
            double side5;
            cin >> side5;
            cout << side3 + side4 + side5 << endl;
            break;
        case 4:
            system("clear");
            cout << "Formula: 2 * pi * r" << endl;
            cout << "Enter the radius." << endl;
            double radius;
            cin >> radius;
            cout << 2 * 3.14159265359 * radius << endl;
            break;
        case 5:
            geometry();
            break;
        default:
            system("clear");
            cout << "Invalid input!" << endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            system("clear");
            perimeter();
            break;
    }
}

void volume()
{
    system("clear");
    cout << "What shape would you like to find the volume of?" << endl;
    cout << "1. Cube" << endl;
    cout << "2. Rectangular Prism" << endl;
    cout << "3. Sphere" << endl;
    cout << "4. Cylinder" << endl;
    cout << "5. Cone" << endl;
    cout << "6. Back" << endl;

    int input;
    cin >> input;

    switch (input) {
        double radius;
        double height;
        case 1:
            system("clear");
            cout << "Formula: s^3" << endl;
            cout << "Enter the length of one side." << endl;
            double side;
            cin >> side;
            cout << side * side * side << endl;
            break;
        case 2:
            system("clear");
            cout << "Formula: l * w * h" << endl;
            cout << "Enter the length of one side." << endl;
            double side1;
            cin >> side1;
            cout << "Enter the length of the other side." << endl;
            double side2;
            cin >> side2;
            cout << "Enter the length of the other side." << endl;
            double side3;
            cin >> side3;
            cout << side1 * side2 * side3 << endl;
            break;
        case 3:
            system("clear");
            cout << "Formula: 4/3 * pi * r^3" << endl;
            cout << "Enter the radius." << endl;
            cin >> radius;
            cout << 4/3 * 3.14159265359 * radius * radius * radius << endl;
            break;
        case 4:
            system("clear");
            cout << "Formula: pi * r^2 * h" << endl;
            cout << "Enter the radius." << endl;
            cin >> radius;
            cout << "Enter the height." << endl;
            cin >> height;
            cout << 3.14159265359 * radius * radius * height << endl;
            break;
        case 5:
            system("clear");
            cout << "Formula: 1/3 * pi * r^2 * h" << endl;
            cout << "Enter the radius." << endl;
            cin >> radius;
            cout << "Enter the height." << endl;
            cin >> height;
            cout << 1/3 * 3.14159265359 * radius * radius * height << endl;
            break;
        case 6:
            geometry();
            break;
    }
}

void surfaceArea()
{
    system("clear");
    cout << "What shape would you like to find the surface area of?" << endl;
    cout << "1. Cube" << endl;
    cout << "2. Rectangular Prism" << endl;
    cout << "3. Sphere" << endl;
    cout << "4. Cylinder" << endl;
    cout << "5. Cone" << endl;
    cout << "6. Back" << endl;

    int input;
    cin >> input;

    switch (input) {
        double radius;
        double height;
        case 1:
            system("clear");
            cout << "Formula: 6 * s^2" << endl;
            cout << "Enter the length of one side." << endl;
            double side;
            cin >> side;
            cout << 6 * side * side << endl;
            break;
        case 2:
            system("clear");
            cout << "Formula: 2 * (l * w + l * h + w * h)" << endl;
            cout << "Enter the length of one side." << endl;
            double side1;
            cin >> side1;
            cout << "Enter the length of the other side." << endl;
            double side2;
            cin >> side2;
            cout << "Enter the length of the other side." << endl;
            double side3;
            cin >> side3;
            cout << 2 * (side1 * side2 + side1 * side3 + side2 * side3) << endl;
            break;
        case 3:
            system("clear");
            cout << "Formula: 4 * pi * r^2" << endl;
            cout << "Enter the radius." << endl;
            cin >> radius;
            cout << 4 * 3.14159265359 * radius * radius << endl;
            break;
        case 4:
            system("clear");
            cout << "Formula: 2 * pi * r * h + 2 * pi * r^2" << endl;
            cout << "Enter the radius." << endl;
            cin >> radius;
            cout << "Enter the height." << endl;
            cin >> height;
            cout << 2 * 3.14159265359 * radius * height + 2 * 3.14159265359 * radius * radius << endl;
            break;
        case 5:
            system("clear");
            cout << "Formula: pi * r * (r + sqrt(h^2 + r^2))" << endl;
            cout << "Enter the radius." << endl;
            cin >> radius;
            cout << "Enter the height." << endl;
            cin >> height;
            cout << 3.14159265359 * radius * (radius + sqrt(height * height + radius * radius)) << endl;
            break;
        case 6:
            geometry();
            break;
    }
}

