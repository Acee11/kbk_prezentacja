#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char *name;
    int age;
}   user_t;

void some_function()
{
    system("echo asdfasdfsa");
}

int main()
{
    setbuf(stdout, NULL);

    user_t *user1, *user2;

    user1 = malloc(sizeof(user_t));
    user1->name = malloc(32*sizeof(char));
    user2 = malloc(sizeof(user_t));
    user2->name = malloc(32*sizeof(char));

    printf("Enter name for user 1: ");
    scanf("%s", user1->name);
    getchar();

    printf("Enter name for user 2: ");
    scanf("%s", user2->name);
    getchar();

    // .
    // .
    // .
    // .

    char some_string[32] = {0};
    scanf("%31s", some_string);
    int len = strlen(some_string);

    // .
    // .
    // .
    // .

    return 0;
}