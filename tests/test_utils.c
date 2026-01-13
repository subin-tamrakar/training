#include <stdio.h>
#include <assert.h>
#include "../src/utils.h"

void test_add() {
    assert(add(2, 3) == 5);
    assert(add(-1, 1) == 0);
    assert(add(0, 0) == 0);
    printf("test_add passed\n");
}

void test_subtract() {
    assert(subtract(5, 3) == 2);
    assert(subtract(1, 1) == 0);
    assert(subtract(0, 5) == -5);
    printf("test_subtract passed\n");
}

int main() {
    test_add();
    test_subtract();
    printf("All tests passed!\n");
    return 0;
}
