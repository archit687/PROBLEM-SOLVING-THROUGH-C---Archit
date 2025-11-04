#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, result;

    printf("Armstrong Numbers between 1 and 1000 are:\n");

    for (num = 1; num <= 1000; num++) {
        original = num;
        result = 0;

        while (original != 0) {
            remainder = original % 10; // 153 % 10 = 3   15 % 10 = 5  5 % 10 = 0
            result = result + pow(remainder, 3); // 0 + 27 = 27   125 + 27 = 152  152 + 0 = 152
            original = original / 10; // 153 / 10 = 15   15 / 10 = 5
        } // 

        if (result == num)
            printf("%d\n", num);
    }

    return 0;
}
