#include <stdio.h>

int main() {
    int i, j, k;
    int n;  // number of rows

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        k = 1;
        for (j = 1; j <= 2 * n - 1; j++) {
            // Boundary condition (centered pyramid)
            if (j >= n + 1 - i && j <= n - 1 + i) {
                printf("%d", k);
                
                // Increase on left half, decrease on right half
                if (j < n)
                    k++;
                else
                    k--;
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
