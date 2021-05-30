#ifndef VARIABLE_USER_INPUT
#define VARIABLE_USER_INPUT

double get_variable_input(string variable) {

    double input_var;

    std::cout << "Enter value for (" <<variable << "): ";
    std::cin >> input_var;

    return input_var;

}

#endif
