#include <iostream>
#include <string>
#include <cmath>


void arithmetic() // does the basic add, sub, mult, and div calcs
{
    double input1, input2, answer;
    std::string operation;
    std::cout << "\n\nInclude the first operand, followed by the operator, and then the second operand." << std::endl;
    std::cin >> input1 >> operation >> input2;

    if(operation == "+") {
        answer = input1 + input2;
        std::cout << "Your answer is: " << answer << std::endl;
    } else if(operation == "-") {
        answer = input1 - input2;
        std::cout << "Your answer is: " << answer << std::endl;
    } else if(operation == "*" || operation == "x") {
        answer = input1 * input2;
        std::cout << "Your answer is: " << answer << std::endl;
    } else if(operation == "/") {
        answer = input1 / input2;
        std::cout << "Your answer is: " << answer << std::endl;
    } else
        std::cout << "Incorrect input method; ensure (+ - * /) use." << std::endl;
}


void trigonometry() // deals with simple trigonometric functions (in rads... I think)
{
    int choice;
    double input, answer;
    std::cout << "\n\nChoose from the following trigonometric functions:\n0: sin()\t1: arcsin()\t||\t6: sinh()\t7: arcsinh()\n2: cos()\t3: arccos()\t||\t8: cosh()\t9: acosh()\n4: tan()\t5: arctan()\t||\t10: tanh()\t11: arctanh()\n" << std::endl;
    std::cin >> choice;

    switch(choice)
    {
        case 0:
            std::cout << "Type in your input: ";
            std::cin >> input;
            answer = sin(input);
            std::cout << "Your answer is: " << answer << std::endl;
            break;
        case 1:
            std::cout << "Type in your input: ";
            std::cin >> input;
            answer = asin(input);
            std::cout << "Your answer is: " << answer << std::endl;
            break;
        case 2:
            std::cout << "Type in your input: ";
            std::cin >> input;
            answer = cos(input);
            std::cout << "Your answer is: " << answer << std::endl;
            break;
        case 3:
            std::cout << "Type in your input: ";
            std::cin >> input;
            answer = acos(input);
            std::cout << "Your answer is: " << answer << std::endl;
            break;
        case 4:
            std::cout << "Type in your input: ";
            std::cin >> input;
            answer = tan(input);
            std::cout << "Your answer is: " << answer << std::endl;
            break;
        case 5:
            std::cout << "Type in your input: ";
            std::cin >> input;
            answer = atan(input);
            std::cout << "Your answer is: " << answer << std::endl;
            break;
    }
}


void percentDecimal() // converts from decimal to percentage and from percentage to decimal
{
    int choice;
    double input, answer;
    std::cout << "\n\nChoose which conversion you'd like to make:\n0: Percent >> Decimal\n1: Decimal >> Percent\n";
    std::cin >> choice;

    switch(choice)
    {
        case 0:
            std::cout << "Type in the Percentage which you need to convert to a Decimal number: ";
            std::cin >> input;
            answer = input / 100;
            std::cout << "The decimal number is: " << answer << std::endl;
            break;
        case 1:
            std::cout << "Type in the Decimal number which you need to convert to Percentage: ";
            std::cin >> input;
            answer = input * 100;
            std::cout << "The percentage is: " << answer << "%" << std::endl;
            break;
    }
}


void modulus() // takes the modulus of two arguments, ie) remainder
{
    int input1, input2, answer;
    std::cout << "Enter the first input of the modulus followed by the second; ie, first input modulo second input\n";
    std::cin >> input1 >> input2;
    answer = input1 % input2;
    std::cout << "The modulus of " << input1 << "mod" << input2 << " is: " << answer << std::endl;
}


void logarithmic() // computes logarithm with base 10, 3
{
    int choice;
    double base, argument, answer;
    std::cout << "0: Logarithm (Base 10)\t 1: Logarithm (Base e)\t 2: Logarithm (Custom Base)\n";
    std::cin >> choice;

    switch(choice)
    {
        case 0:
            std::cout << "Enter the argument which you want to take the natural logarithm of\n";
            std::cin >> argument;
            answer = log10(argument);
            std::cout << "The common base logarithm of " << argument << " is: " << answer << std::endl;
            break;
        case 1:
            std::cout << "Enter the argument which you want to take the natural logarithm of\n";
            std::cin >> argument;
            answer = log(argument);
            std::cout << "The natural logarithm of " << argument << " is: " << answer << std::endl;
            break;
        case 2:
            std::cout << "Enter the base followed by the argument for which you want to take the logarithm of\n";
            std::cin >> base >> argument;
            answer = log(argument) / log(base);
            std::cout << "The logarithm of " << argument << " with base " << base << " is: " << answer << std::endl;
            break;
    }
}


void exponential() // takes a base and an exponent and provides a power 
{
    int choice, base, exponent, answer;
    std::cout << "0: Custom base\t1: Natural number\n";
    std::cin >> choice;

    switch(choice)
    {
        case 0:
            std::cout << "Enter in a base followed by an exponent to raise it to\n";
            std::cin >> base >> exponent;
            answer = pow(base, exponent);
            std::cout << base << " raised to " << exponent << " is: " << answer << std::endl;
            break;
        case 1:
            std::cout << "Enter in a power you want to raise e to\n";
            std::cin >> exponent;
            answer = exp(exponent);
            std::cout << "e raised to " << exponent << " is: " << answer << std::endl;
            break;
    }
}


void comparison() // compares two values and returns which one is greater than or less than the other
{
    double input1, input2;
    std::cout << "Enter the first value followed by the second value\n";
    std::cin >> input1 >> input2;

    if(input1 == input2)
        std::cout << input1 << " is equal to " << input2 << std::endl;
    else if(input1 > input2)
        std::cout << input1 << " is greater than " << input2 << std::endl;
    else if(input1 > input2)
        std::cout << input1 << " is greater than " << input2 << std::endl;
    else
        std::cout << "Input incorrect" << std::endl;
}


int main() // main function
{
    int choice;
    do
    {
        std::cout << "0. Quit\n1. Arithmetic\n2. Trigonometric\n3. Percent / Decimal Conversion\n4. Modulus\n5. Logarithmic\n6. Exponential\n7. Comparison\n\n";
        std::cout << "I would like to... ";
        std::cin >> choice;
        
        switch(choice)
        {
            case 0:
                std::cout << "All's well that ends well.\n";
                return 0;
            case 1:
                arithmetic();
                break;
            case 2:
                trigonometry();
                break;
            case 3:
                percentDecimal();
                break;
            case 4:
                modulus();
                break;
            case 5:
                logarithmic();
                break;
            case 6:
                exponential();
                break;
            case 7:
                comparison();
                break;
            case 8:
                areaShapes
        }

    } while(choice != 0);

    return 0;
}