// Copyright (c) 2021 Liam Csiffary All rights reserved.
//
// Created by: Liam Csiffary
// Date: May 20, 2021
// This program determines whether a year is a leap year or not

#include <iostream>

// make variables
int counter = 0;
int total = 0;
int userNum;

int main() {
    // make the string version of the var
    std::string userNumString;

    // get the number from the user
    std::cout << "Input any positive whole number: ";
    std::cin >> userNumString;

    try {
        // try to turn it into a integer
        userNum = std::stoi(userNumString);

        // make sure number is positive
        if (userNum >= 0) {
            // while counter is less than the users number
            while (counter < userNum) {
                counter = counter + 1;
                total = total + counter;
            }

            // when the loop is over
            std::cout << "\nThe sum of " << userNum <<
            " plus all the preceding numbers is down to 0 is \n" << total;

        // if the number was negative
        } else {
            std::cout << "The number must be positive";
        }

    // if could not turn into integer
    } catch (std::invalid_argument) {
        std::cout << "This is not a valid number";
    }
}
