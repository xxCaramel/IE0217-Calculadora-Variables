#ifndef VARIABLE_USER_INPUT
#define VARIABLE_USER_INPUT

float get_variable_input(string variable) {

    float input_var;

    std::cout << "Enter value for (" <<variable << "): ";
    std::cin >> input_var;

    return input_var;

}

#endif
