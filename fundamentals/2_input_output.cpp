# include <iostream>


int main(){
    int number;
    // Input/Output in C++:
    // Instead of printf and scanf (from C), C++ uses cout and cin for input/output
    
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout <<"You entered: " << number << std::endl;
    
    return 0;
}

