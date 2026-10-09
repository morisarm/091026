#include <stdio.h>

int main() {
    int n;
    
    printf("Type a number:\n");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
