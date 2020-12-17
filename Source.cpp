#include <iostream>

double calculateAndPrint(double , double , double , char);
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
              << "[1] Basic math " << std::endl;
        std::cin >> select;

        //originally i had this set to if and elif statements but i was told switch case is a good way to initalize a menu screen
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

    //i copied this switch case from the very sad calculator i built using Java
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
        case 'Y' : return 0; //these do nothing yet, i want to make it loop back to case 1 from the main()
            break;
        case 'y' : return 0;
            break;
        case 'N' : main(); //i wanted "no" to take you back to the main app menu rather than close the app completely
            break;
        case 'n' : main();
    }
    
    return EXIT_SUCCESS;
}

/* My notes :L

    cout = Console Output
    std = STANDARD
    return type 0, states everything ran smooth and had no issues
    iostream defines in/out stream 
    return 0 or EXIT_SUCCESS or no line at all
    return type is declaired in the main with "int" return type for this is EXIT_SUCCESS or 0 which is an int
    
*/
