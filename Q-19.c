#include <stdio.h>

#define VALUE 100

int main() {
    printf("VALUE before undef: %d\n", VALUE);

    #undef VALUE  // Undefine the macro VALUE

    // Now, VALUE is no longer defined, so redefining it
    #define VALUE 200

    printf("VALUE after undef and redefine: %d\n", VALUE);

    return 0;
}