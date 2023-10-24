//self referential node
#include<stdio.h>
struct node{
    int data;
    char ch;
    struct node *ptr;
};

int main()
{
    struct node a,b,c;

    a.data = 65;
    a.ch = 'A';
    a.ptr = NULL;

    b.data = 97;
    b.ch = 'a';
    b.ptr = NULL;

    //printf("A data: %d, char: %c",a.data, a.ch);
    //printf("\nB data: %d, char: %c",b.data, b.ch);

    a.ptr = &b;
    b.ptr = &a;

    printf("\nA data: %d,char: %c",b.ptr->data, b.ptr->ch);
}
