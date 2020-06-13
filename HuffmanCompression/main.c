#include "List.h"

struct HLeaf{
    int freq;
    unsigned char key;
    struct HLeaf *left;
    struct HLeaf *right;
};



void createRTree();

int main()
{
    printf("Started\n");
    Add(45,'t');
    Add(15,'o');
    Add(23,'a');
    Add(78,'z');
    printf("freq:key\n");
    //struct list *temp=head;
    Rem(2);
    display();
    //next(temp);
    return 0;
}
