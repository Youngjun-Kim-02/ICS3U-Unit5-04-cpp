// Copyright (c) 2021 Youngjun Kim rights reserved
//
// Created by: Youngjun Kim
// Created on: May 2021
// This program uses user defined functions

#include <iostream>
#include <cmath>

int calculateVolume(int radius, int height) {
    // this function calculates volume of a cylinder
    int volume;

    volume = M_PI * radius * radius * height;

    return volume;
}


int main() {
    // this function gets radius and height

	int radiusValue;
	int heightValue;
	int calculatedVolume;

	// input
	std::cout << "Enter the radius of a cylinder: ";
	std::cin >> radiusValue;
	std::cout << "Enter the height of a cylinder: ";
	std::cin >> heightValue;
	std::cout << std::endl;

	// call functions
	calculatedVolume = calculateVolume(radiusValue, heightValue);

	// output
	std::cout << "The volume is " << calculatedVolume << " cm³" << std::endl;
}
