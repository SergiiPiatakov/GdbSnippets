#include <cstdlib>
#include <cstring>

struct T
{
    #if 0
    T & operator = (const T & that)
    {
        this->i  = that.i;
        this->c  = that.c;
        this->pf = that.pf;
        return * this;
    }
    #endif

    int     i;
    char    c;
    float * pf;
};

int main (int argc, char ** argv)
{
    T a;
    T b;
    std::memset (& a, 0x00, sizeof (T) );
    std::memset (& b, 0xff, sizeof (T) );
    b = a;

    const char * pa = reinterpret_cast <char *> (& a);
    const char * pb = reinterpret_cast <char *> (& b);
    for (int i = 0; i < sizeof (T); ++i) {
        if (* (pa + i) != * (pb + i) ) {
            return EXIT_FAILURE;
        }
    }

    return EXIT_SUCCESS;
}
