#include <iostream>
#include <cstdlib>

int main (int argc, char ** argv)
{
    for (int i = 0; i <= argc; ++i) {
        for (int j = 0; argv [i][j]; ++j) {
            std::cout << argv [i][j];
        }
        std::cout << std::endl;
    }

    return EXIT_SUCCESS;
}
