#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char *name;
    int age;
}   user_t;

void print_menu()
{
    puts("----------------------------");
    puts("1. change name");
    puts("2. view name");
    puts("3. exit");
    puts("----------------------------");
}

int main()
{
    setbuf(stdout, NULL);

    user_t *user1, *user2;

    user1 = malloc(sizeof(user_t));
    user1->name = malloc(32*sizeof(char));
    user2 = malloc(sizeof(user_t));
    user2->name = malloc(32*sizeof(char));

    memset(user1->name, 0, 32);
    memset(user2->name, 0, 32);

    while(1)
    {
        print_menu();

        int option;
        scanf("%d", &option);
        getchar();

        if(option == 1)
        {
            printf("Enter user number(1 or 2): ");
            int user_num;
            scanf("%d", &user_num);
            getchar();

            if(user_num == 1)
            {
                printf("Enter name for user 1: ");
                scanf("%s", user1->name);
                getchar();
            }
            else if(user_num == 2)
            {
                printf("Enter name for user 2: ");
                scanf("%s", user2->name);
                getchar();
            }
        }
        else if(option == 2)
        {
            printf("Enter user number(1 or 2): ");
            int user_num;
            scanf("%d", &user_num);
            getchar();

            if(user_num == 1)
                printf("%s\n", user1->name);
            else if(user_num == 2)
                printf("%s\n", user2->name);
        }   
        else if(option == 3)
        {
            puts("Bye!");
            break;
        }
    }

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