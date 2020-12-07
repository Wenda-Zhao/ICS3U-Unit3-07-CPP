// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Wenda Zhao
// Created on: Dec 2020
// This program uses a compound booleam statement

#include <iostream>

int main() {
    // this fuction uses a compound booleam statement
    int age;

    // input
    std::cout << "Enter your age: ";
    std::cin >> age;

    // process & output
    if (age > 25 && age < 40) {
        std::cout << "Congratulations, you got a date!";
    } else {
        std::cout << "Sorry, to get a date, you must be over 25 and under 40.";
    }
}
