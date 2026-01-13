#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "utils.h"

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <operation> <num1> <num2>\n", argv[0]);
        printf("Operations: add, sub\n");
        return 1;
    }

    char *operation = argv[1];
    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);
    int result = 0;

    if (strcmp(operation, "add") == 0) {
        result = add(num1, num2);
        printf("%d\n", result);
    } else if (strcmp(operation, "sub") == 0) {
        result = subtract(num1, num2);
        printf("%d\n", result);
    } else {
        printf("Unknown operation: %s\n", operation);
        return 1;
    }

    return 0;
}
