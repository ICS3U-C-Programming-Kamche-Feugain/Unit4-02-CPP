// Copyright (c) 2026 Kamche All rights reserved.
// .
// Created by: Your Kamche
// Date: Nov 10, 2026
// This program asks the user
// to make a while loop program
// make the users number false.
#include <iostream>
#include <string>

int main() {
    int loop_counter = 0;
    int factorial_answer = 1;
    int user_num_int;
    int valid_entry = 0;
    double user_num_double;
    std::string user_num_str;

    do {
        // Get the user number
        std::cout << " Enter a positive whole number : " << std::endl;
        std::cin >> user_num_str;

        try {
            user_num_double = std::stod(user_num_str);

            if (user_num_int < 0 ||
                user_num_double != static_cast<int>(user_num_double)) {
                std::cout << user_num_str
                          << " is an invalid enter."
                          "Please enter a positive whole number."
                          << std::endl;
            } else {
                user_num_int = static_cast<int>(user_num_double);
                valid_entry = 1;
            }
        } catch (const std::invalid_argument&) {
            std::cout << user_num_str << " is an invalid entry."
                                         "Please enter a valid integer"
                                      << std::endl;
        }
    } while (valid_entry == 0);
        std::cout << std::endl;

    // replicate a do-while loop
    // Calculate the factorial using a loop
    do {
        loop_counter = loop_counter + 1;
        factorial_answer = factorial_answer * loop_counter;
        std::cout << "Tracking" << loop_counter
                  << "times through loop." << std::endl;
    } while (loop_counter < user_num_int);

    // Display the final answer
    std::cout << std::endl;
    std::cout << user_num_int << "!= " << factorial_answer << std::endl;
}
