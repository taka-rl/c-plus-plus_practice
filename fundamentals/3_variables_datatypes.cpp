#include <iostream>
#include <vector>
using namespace std;
#include <string>

/*
Basci data types of C++

int: Integer numbers.
float: Floating-point numbers (single precision).
double: Double-precision floating-point numbers.
char: Character data type (1 byte).
bool: Boolean data type, storing true or false.
void: Represents the absence of type (used in functions).

Arrays:
    Fixed size: 
        Once an array is declared, its size is fixed. You can't resize it.
        Memory allocation is static(done at complile time).
    
    Memory management: 
        Memory for arrays is statically allocated. 
        This means that memory is reserved when the array is declared and cannot be freed or expand at runtime.(except for dynamic arrays created using new)
        You need to manually allocate and deallocate memory using new and delete if you want dynamic memory allocation with arrays.
        Ex:
            int* arr = new int[5];  // Dynamically allocated array
            delete[] arr;  // Must free the memory manually
    
    Ease of Use:
        You need to manually manage the size and ensure you don't exceed the array bounds.
        Ex: 
            // 1D Array
            int array_1d[5] = {1, 2, 3, 4, 5};

            // 2D Array
            int array_2d[2][5] = {
                {1, 2, 3, 4, 5},
                {6, 7, 8, 9, 10}
            };

    Safety: 
        Arrays do not have built-in bounds checking, so accessing an out-of-bounds index results in undefined behavior.
        Ex:
            int arr[3] = {1, 2, 3};
            std::cout << arr[5];  // Undefined behavior (out of bounds)

    Performance: 
        Arrays are generally faster when it comes to raw performance because they invlove less overhead.
        Since the memory is allocated contiguously and there is no resizing or bounds checking, arrays can be faster in certain situations.
        Arrays are more efficient if you know the exact size ahead of time and performance is critical.

    Element insertion/deletion:
        Inserting or removing elements in an array(especially in the middle) requires manually shifting elements,
        which can be cumbersome and error-prone.
        You can't dynamically add elements to a static array. If you need to increase the size,
        you must reallocate memory(for dynamic arrays).
        Ex: 
            int arr[5] = {1, 2, 4, 5};
            arr[2] = 3;  // Inserting requires manual shifting

Vectors: 
    Dynamic size: 
        A std:vector can grow or shrink as needed. You can add and remove elements without worring about the initial size.
        Memory allocation is dynamic(done at runtime).
    
    Memory management: 
        Memory management is automatic. The std::vector handles allocation, resizing, and deallocation internally.
        You don't need to manage memory manually.
        Vectors automatically grow when you add elements and shrink when you remove them.
        Ex: 
            std::vector<int> vec;
            vec.push_back(10);  // Memory is allocated automatically
    
    Ease of Use:
        Vectors are part of the Standard Template Library(STL) and offer a lot of useful member functions like these.
            push_back(), pop_back(), size(), clear(), etc....
        Vectors also handle bounds checking with functions like .at()(throws an exception if you access out-of-bounds elements).
        Ex:    
            std::vector<int> vec = {1, 2, 3};
            vec.push_back(4);   // Adds an element
            std::cout << vec.at(2);  // Safer element access with bounds checking

    Safety:
        Vectors provide safer access with .at(), which checks if the index is valid and throws an exception if it's out of bounds.
        However, accessing elements using [] works the same way as with arrays(no bounds checking).
        Ex:
            std::vector<int> vec = {1, 2, 3};
            std::cout << vec.at(3);  // Throws an exception (out of bounds)
    
    Performance:
        Vectors have additional overhead for features like dynamic resizing and bounds checking. 
        When a vector grows beyond its capacity, it may need to reallocate memory and copy the exisiting elements to the new location,
        which can slow down performance.
        However, vectors are still efficient for most use cases, and the convenience of automatic resizing often outweights the slight performance penalty.

    Element insertion/deletion:
        Vectors make inserting or deleting elements much easier with functions like insert() and erase().
        Adding or removing elements is handled internally, and the vector adjusts its size accordingly.
        Ex: 
            std::vector<int> vec = {1, 2, 4, 5};
            vec.insert(vec.begin() + 2, 3);  // Insert 3 at index 2
            vec.erase(vec.begin() + 1);  // Erase the element at index 1

*/

int main() {

    cout << "-------- Basic data types -------- " << endl;
    // Basic data types
    int int_num = 4;
    double double_num = 4.5;
    bool isValid = true;

    std::cout << "Int: " << int_num << std::endl;
    std::cout << "Double: " << double_num << std::endl;
    std::cout << "Bool: " << isValid << std::endl;

    cout << "-------- Char -------- " << endl;
    char letter = 'A';
    std::cout << "Character: " << letter << std::endl;

    cout << "-------- Integer Variants -------- " << endl;
    short short_num = 100;
    long long_num = 1000000;
    unsigned int unsigned_num = 150;
    long long long_long_num = 10000000000LL;

    std::cout << "Short: " << short_num << std::endl;
    std::cout << "Long: " << long_num << std::endl;
    std::cout << "Unsigned int: " << unsigned_num << std::endl;
    std::cout << "Long Long: " << long_long_num << std::endl;

    cout << "-------- Floating Point Variants -------- " << endl;
    float float_num = 3.14f;
    long double long_double_num = 3.14159265358979323846264338327950288L;

    std::cout << "Float: " << float_num << std::endl;
    std::cout << "Double: " << double_num << std::endl;
    std::cout << "Long Double: " << long_double_num << std::endl;

    cout << "-------- Enum -------- " << endl;
    enum Day {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
    Day today = Friday;

    std::cout << "Enum Day (Friday): " << today << std::endl;

    cout << "-------- Pointers -------- " << endl;
    int* ptr = &int_num;
    std::cout << "Pointer to int_num: " << ptr << std::endl;
    std::cout << "Value pointed by ptr: " << *ptr << std::endl;

    cout << "-------- References -------- " << endl;
    int& ref = int_num;
    std::cout << "Reference to int_num: " << ref << std::endl;

    cout << "-------- Constants -------- " << endl;
    const int constant_value = 42;
    std::cout << "Constant value: " << constant_value << std::endl;

    cout << "-------- String -------- " << endl;
    // String
    std::string greeting = "Hello, World!";
    std::cout << greeting << std::endl;

    cout << "-------- Array -------- " << endl;

    // 1D Array
    int array_1d[5] = {1, 2, 3, 4, 5};

    // 2D Array
    int array_2d[2][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10}
    };

    int val_1d_array = array_1d[2];   // Accessing 3rd element (index 2) in 1D array
    int val_2d_array = array_2d[1][4];  // Accessing element at row 1, column 4 (last element in the second row)

    std::cout << "1D array element: " << val_1d_array << std::endl;
    std::cout << "2D array element: " << val_2d_array << std::endl;

    // Manual memory allocation and deallocation
    int* arr = new int[5];  // Dynamically allocated array
    int size = 5;

    // Assign values to the array
    for(int i=0; i<size; i++){
        arr[i] = i + 1;
    }

    // Output the array contents and memory addresses
    std::cout << "Array contents and memory addresses:" << std::endl;
    for(int i=0; i<size; i++){
        std::cout <<"arr[" << i << "] = " << arr[i] << "at memory address: " << &arr[i] << std::endl;
    }

    // Calculate the total memory allocated
    std::cout << "Total memory allocated for array: " << static_cast<size_t>(size) * sizeof(int) << "byte" << std::endl;

    // Free the allocated memory
    delete[] arr;


    cout << "-------- Vector -------- " << endl;
    // 1D Vector
    std::vector<int> vec_1d = {1, 2, 3, 4, 5};  // List initialization
    int val_1d_vector = vec_1d[2];
    std::cout << "1D vector element: " << val_1d_vector << std::endl;
    std::vector<int> vec_1d_2(5, 0);  // Initializes 5 elements, all set to 0
    int val_1d_vector_2 = vec_1d_2[2];
    std::cout << "1D vector element after initializing with 0: " << val_1d_vector_2 << std::endl;
    
    // Add elements
    std::vector<int> vec_add = {1, 2, 3};
    vec_add.push_back(4);   // Adds an element
    std::cout << vec_add.at(2);  // Safer element access with bounds checking
    std::cout << vec_add.at(3);  // Safer element access with bounds checking

    // 2D Vector
        std::vector<std::vector<int>> vec_2d = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int val_2d_vec = vec_2d[1][1];
    std::cout << "2D vector element: " << val_2d_vec << std::endl;


    //push_back(), pop_back(), size(), clear(), etc....

    // Create a vector and dynamically add elements
    std::vector<int> vec;
    size_t numElements = 10;

    // Adding elements dynamically
    for(size_t i=0; i<numElements; i++){
        vec.push_back(static_cast<int>(i + 1));
        std::cout << "After adding element " << i + 1 << ":";
        std::cout << "Size = " << vec.size() << "Capacity = " << vec.capacity() << std::endl;  
    }

    // Output the vector contents and memory addresses
    std::cout << "\nVector contents and memory addresses: " << std::endl;
    for(size_t i=0; i<vec.size(); i++){
        std::cout << "vec[" << i << "] = " << vec[i] << "at memory address: " << &vec[i] << std::endl;
    }

    // insert and erase
    // std::vector<int> vec = {1, 2, 4, 5};
    //vec.insert(vec.begin() + 2, 3);  // Insert 3 at index 2
    //vec.erase(vec.begin() + 1);  // Erase the element at index 1


    return 0;
}
