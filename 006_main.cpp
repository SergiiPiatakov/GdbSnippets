#include <cstdlib>

struct Node // List node.
{
    Node () : data (42), p (reinterpret_cast <Node *> (42)) {}
    int data;
    Node * p;
};

int main (int argc, char ** argv)
{
    const size_t size = 1 * 1024 * 1024;

    // Allocate list.
    Node * head = new Node;
    size_t n = 0;
    Node * c = head;
    do {
        c->p = new Node;
        c    = c->p;
    } while (++n < size);

    // Init list.
    for (Node * c = head; c; c = c->p) {
        c->data = n--;
    }

    return EXIT_SUCCESS;
}
