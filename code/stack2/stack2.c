#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
    char info[128];
    char name[32];
} user_t;

void do_something_with_info(user_t *user)
{
    char info_cpy[128];
    // strncpy nie potrzebne, kontrolujemy dlugosc wejscia
    strcpy(info_cpy, user->info);

    // .
    // .
    // .
}

int main(void)
{
    setbuf(stdout, NULL);

    user_t user;
    puts("Please say something about yourself:");
    scanf("%128s", user.info);
    getchar();
    puts("Please enter your name:");
    scanf("%32s", user.name);
    getchar();

    printf("name: %s\ninfo: %s\n", user.name, user.info);

    do_something_with_info(&user);

    return 0;
}
