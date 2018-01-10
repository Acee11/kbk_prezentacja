#include <stdio.h>
#include <unistd.h>
#include <string.h>

void vulnerable_function() 
{
    
    char buf[128];
    read(STDIN_FILENO, buf, 512);
}

int main(void) 
{
    vulnerable_function();

    return 0;
}