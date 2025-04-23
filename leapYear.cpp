// Copyright 2025 Viviana Hurtado
// Created by: Viviana Hurtado
// Date: April, 2025
// This program asks the user to enter a year
// and then tells the user if it is a "leap" year.
// It also handles invalid input to avoid crashing.

#include <iostream>
#include <string>

int main() {
    // Enter a year
    std::string year_str;
    std::cout << "Enter a year: ";
    std::cin >> year_str;

    try {
        // TryCatch string to an integer
        int year = std::stoi(year_str);

        // Check leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            std::cout << "Leap year" << std::endl;  // It's a leap year
        } else {
            std::cout << "Not a leap year" << std::endl;  // Not leap year
        }
    } catch (...) {
        // If error message
        std::cout << year_str << " is not an integer" << std::endl;
}
}
