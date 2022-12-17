// SIMPLE CALCULATOR
#include <iostream>

double division(double, double);
double pro(double, double);
double add(double, double);
double sub(double, double);
double input();

int main()
{
    double operand1{ input() };
    char oper{};
    std::cout << "operator: ";
    std::cin >> oper;
    double operand2{ input() };
    double sum{};

    switch (oper)
    {
    case '/':
        std::cout << division(operand1, operand2);
        break;

    case '*':
        std::cout << pro(operand1, operand2);
        break;

    case '+':
        std::cout << add(operand1, operand2);
        break;
        

    case '-':
        std::cout << sub(operand1, operand2);
        break;

    default:
        break;
    }
}

double input()
{
    std::cout << "Enter Number: ";
    double num{};
    std::cin >> num;
    return num;
}

double division(double operand1, double operand2)
{
    return operand1 / operand2;
}

double pro(double operand1, double operand2)
{
    return operand1 * operand2;
}

double add(double operand1, double operand2)
{
    return operand1 + operand2;
}

double sub(double operand1, double operand2)
{
    return (operand1 - operand2);
}