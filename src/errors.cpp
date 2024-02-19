#include "computerV1.hpp"

static bool is_char_allowed(char c) {
    std::string const allowed_chars = "0123456789*+-/=^ .X";
    auto found = allowed_chars.find(c);
    if (found == std::string::npos)
        return (false);
    return true;
}

static bool check_chars(std::string const& str) {
    bool equal_sign = false;
    int x_count = 0;
    for (int i = 0; str[i]; i++) {
        if (!is_char_allowed(str[i])) {
            std::cout << str[i] << std::endl;
            return (false);
        }
        if (str[i] == '=')
            equal_sign = true;
        if (str[i] == 'x' || str[i] == 'X')
            x_count++;
    }
    if (!equal_sign)
    {
        std::cerr << "Error: missing the equal sign!" << std::endl;
        exit(1);
    }
    if (!x_count)
    {
        std::cerr << "Error: missing variables in the equation!" << std::endl;
        exit(1);
    }
    return (true);
}

void check_errors(std::string const& equation) {
    if (equation.empty())
    {
        std::cerr << "Error: empty argument!" << std::endl;
        exit(1);
    }

    if (!check_chars(equation))
    {
        std::cerr << "Error: equation includes non valid charecters!" << std::endl;
        exit(1);
    }

    // if (!check_order)
}
