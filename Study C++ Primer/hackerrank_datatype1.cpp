#include <iostream>
#include <iomanip>
#include <limits>
#include <string>

using namespace std;

int datatype1() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";



    // Declare second integer, double, and String variables.

    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.

    // Print the sum of both integer variables on a new line.

    // Print the sum of the double variables on a new line.

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    int i2;
    double d2 = 0.0;
    double sum = 0.0;
    string s2;
    std::cin >> i2;
    std::cout << i + i2 << std::endl;

    std::cin >> d2;
    sum = d + d2;
    std::cout.precision(1);
    std::cout << std::fixed << sum << std::endl;

    std::cin.ignore();
    std::getline(std::cin, s2);
    s.append(s2);
    std::cout << s;

    return 0;
}