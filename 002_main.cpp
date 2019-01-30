#include <iostream>
#include <cstdlib>

int main (int, char **)
{
    char * greeting = "Hillo!";

    greeting [1] = 'e';

    std::cout << greeting << std::endl;

    return EXIT_SUCCESS;
}
