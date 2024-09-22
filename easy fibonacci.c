#include <stdio.h>

int main() {
    int a=0, b=1,c,d;
    scanf("%d", &d);
    printf("%d %d", a, b);

    for (int i=1; i<d-1; i++) {
        c = a + b;
        printf(" %d", c);
        a = b;
        b = c;
    }

    printf("\n");
    return 0;
}
