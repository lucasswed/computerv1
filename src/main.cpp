#include "computerV1.hpp"

// Write a program that solves a polynomial second or lower degree equation. You will have
// to show at least:
// • The equation in its reduced form.
// • The degree of the equation.
// • It’s solution(s) and the polarity of the discriminant if it makes sens.

int main(int ac, char **av) {
    if (ac != 2)
    {
        std::cerr << "Error: wrong number of arguments" << std::endl;
        std::cerr << "Correct usage: ./computor <equation>" << std::endl;
        exit(1);
    }

    check_errors(av[1]);
    return (0);
}