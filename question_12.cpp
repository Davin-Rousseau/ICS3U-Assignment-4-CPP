// Copyright (c) 2019 Davin Rousseau All rights reserved
//
// Created by: Davin Rousseau
// Created on October 2019
// This program asks user to enter classes held and attended
// and tells them if they can write an exam or not

#include <iostream>
#include <string>
#include <iomanip>  // library for set pricision(limits decimal place)

int main() {
    // this function determines if a person can date a granddaughter
    std::string integer;
    std::string integer2;
    float classes_held;
    float classes_attended;
    float percentage;


    // input
    std::cout << "Enter number of classes held: ";
    std::cin >> integer;
    std::cout << "Enter number of classes attended: ";
    std::cin >> integer2;
    std::cout << "" << std::endl;

    // process
    try {
        classes_held = std::stoi(integer);
        classes_attended = std::stoi(integer2);

        percentage = (classes_attended / classes_held) * 100;
        std::cout << "The percentage of attendance is: "
                    << std::setprecision(5)
                    << percentage << "%" << std::endl;

        if (percentage >= 75.0) {
            std::cout << "You may take the exam." << std::endl;

        } else {
            std::cout << "You may not take the exam." << std::endl;
        }
        return 0;
    }
     catch (std::invalid_argument) {
        std::cout << "Invalid input.";
    }
}
