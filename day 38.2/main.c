#include <stdio.h>

int main(void) {
    int a[10][10];
    int i, j, r, c, flag = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    if(r != c) {
        printf("Matrix is not symmetric.\n");
        return 0;
    }

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
        if(flag == 0) break;
    }

    if(flag)
        printf("Matrix is symmetric.\n");
    else
        printf("Matrix is not symmetric.\n");

    return 0;
}

