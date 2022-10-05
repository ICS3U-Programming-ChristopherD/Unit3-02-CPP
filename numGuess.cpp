// Copyright (c) 2022 Chris Di Bert All rights reserved.
// .
// Created by: Chris Di Bert
// Date: Oct.3, 2022
// This program adds the Albertan sales tax to orders.

#include <iostream>

int main() {
    const int NUMBER = 3;
    float guess;
    std::cout << "Try and guess my secret number. \n\n";
    std::cout << "It is within the range of 0-9 \n" << std::endl;
    std::cout << ">> ";
    std::cin >> guess;
    std::cout << "\n";
    if (guess == NUMBER) {
        std::cout << "You guessed correctly! \n";

    } else {
        std::cout << "You guessed incorrectly. \n";
    }
}
