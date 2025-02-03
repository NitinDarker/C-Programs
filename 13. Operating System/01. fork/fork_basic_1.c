#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) {
    fork();
    printf("Unix System Programming\n");
    exit(0);
}