#include <stdio.h>

int is_leap(int y) {
    return (y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0));
}

int main(void) {
    int start, end;
    scanf("%d %d", &start, &end); // end >= start 已保證

    int in_line = 0;
    for (int y = end; y >= start; --y) {
        if (!is_leap(y)) continue;

        if (in_line > 0) printf(" ");
        printf("%d", y);
        in_line++;
        if (in_line == 5) {
            printf("\n");
            in_line = 0;
        }
    }
    if (in_line > 0) printf("\n");
    return 0;
}