#include <iostream>
#include </home/janeyyl/Desktop/C++/Power.cpp>

double calculateAndPrint(double , double , double , char);
double power(double , int);
char clear(char);

int main() {
    double x; 
    double y; 
    double ans;
    char operand;
    char ce;
    int select;

    do {
        std::cout << "\nWhat function would you like to preform: \n"
              << "[0] Exit" << std::endl
              << "[1] Basic math " << std::endl
              << "[2] Calculate to the power of " "" << std::endl;
        std::cin >> select;

        switch (select){
            case 1 :
                std::cout << "enter the first number: ";
                std::cin >> x;
                std::cout << "PEMDAS: ";
                std::cin >> operand;
                std::cout << "enter the second number: ";
                std::cin >> y;

                calculateAndPrint(x , y , ans , operand);
                clear(ce);
            break;

            case 2 : std::cout << "Exeting application";
                return 0;
            break;
            
            case 0 : std::cout << "Exeting application";
                return 0;
        }
    } 
    
    while (select != 0);
    
}

double calculateAndPrint(double x , double y , double ans , char operand) {

    switch (operand) {
        case '+' : ans = x + y;
            break;
        case '-' : ans = x - y;
            break;
        case '*' : ans = x * y;
            break;
        case '/' : ans = x / y;
    }

    std::cout << x << ' ' << operand << ' ' << y << " = " << ans << std::endl;

    return EXIT_SUCCESS;
}

char clear(char ce) {
    double x; 
    double y; 
    double ans;
    char operand;
    
    std::cout << "\nDo you want to clear and continue? [Y/N]: ";
    std::cin >> ce;

    switch (ce) {
        case 'Y' : return 0;
            break;
        case 'y' : return 0;
            break;
        case 'N' : main();
            break;
        case 'n' : main();
    }
    
    return EXIT_SUCCESS;
}

/*
    cout = Console Output
    std = STANDARD
    return type 0, states everything ran smooth and had no issues
    iostream defines in/out stream 
    return 0 or EXIT_SUCCESS or no line at all
    return type is declaired in the main with "int" return type for this is EXIT_SUCCESS or 0 which is an int
*/
