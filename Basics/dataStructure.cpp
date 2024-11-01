#include <string>
#include <iostream>
// practise common data strucutures
void main()
{
    // give me an integer
    int x = 5;
    // give me a string
    std::string name = "John";
    // give me a float
    float pi = 3.14;
    // give me a double
    double e = 2.71828;
    // give me a char
    char c = 'a';
    // give me a boolean
    bool isTrue = true;
    // give me an array
    int arr[5] = {1, 2, 3, 4, 5};
    // give me a Set or object
    struct
    {
        std::string brand;
        std::string model;
        int year;
    } myCar1, myCar2; // We can add variables by separating them with a comma here

    // Put data into the first structure
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    // Put data into the second structure
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;

    // Print the structure members
    std::cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    std::cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
}