// Unbound memory access.
// $ clang++ 008_main.cpp -g -o 008_main
// $ ./008_main
// One possible output:
// $ uname -rvo
// 4.4.0-185-generic #215-Ubuntu SMP Mon Jun 8 21:53:19 UTC 2020 GNU/Linux
// $ clang --version
// clang version 3.8.0-2ubuntu4 (tags/RELEASE_380/final)
// $ ./008_main
// Segmentation fault (core dumped)

#include <cstdlib>
#include <cstring>

int main (int argc, char ** argv)
{
    double * d = new double;
    int data [16];
    std::memset (data, 0x00, 64 + 12);
    * d = 42;
    delete d;

    return EXIT_SUCCESS;
}
