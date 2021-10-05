
// C++ program to demonstrate array of strings using
// array of strings.
#include <iostream>
#include <string>
 
int main()
{
    // Initialize String Array
    std::string colour[4] = { "Blue", "Red",
                              "Orange", "Yellow" };
 
    // Print Strings
    for (int i = 0; i < 4; i++)
        std::cout << colour[i] << "\n";
}


// C++ program to demonstrate vector of strings using
#include <iostream>
#include <vector>
#include <string>
 
int main()
{
    // Declaring Vector of String type
    // Values can be added here using initializer-list syntax
    std::vector<std::string> colour {"Blue", "Red", "Orange"};
 
    // Strings can be added at any time with push_back
    colour.push_back("Yellow");
 
    // Print Strings stored in Vector
    for (int i = 0; i < colour.size(); i++)
        std::cout << colour[i] << "\n";
}



// C++ program to demonstrate array of strings using
// 2D character array
#include <iostream>
 
int main()
{
    // Initialize 2D array
    char colour[4][10] = { "Blue", "Red", "Orange",
                           "Yellow" };
 
    // Printing Strings stored in 2D array
    for (int i = 0; i < 4; i++)
        std::cout << colour[i] << "\n";
 
    return 0;
}