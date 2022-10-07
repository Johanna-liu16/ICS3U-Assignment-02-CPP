// Copyright (c) 2022 Johanna Liu All rights reserved
//
// Created by: Johanna Liu
// Created on: Oct 2022
// This program calculates the volume of a cone

#include <cmath>
#include <iostream>

int main() {
    // this function calculates the circumference of a circle
    const double PI = 3.14159265359;
    int radius;
    int height;
    double volume;

    // input
    std::cout << "The formula for the volume of a cone is V = πr²h÷3.";
    std::cout << std::endl;
    std::cout << "Enter radius of the cone (cm): ";
    std::cin >> radius;
    std::cout << "Enter height of the cone (cm): ";
    std::cin >> height;

    // process
    volume = round(PI * pow(radius,2) * height / 3 * 100) / 100;

    // output
    std::cout
        << "" << std::endl;
    std::cout << "The cost is " << volume << " cm³.";
    std::cout << "\nDone." << std::endl;
}