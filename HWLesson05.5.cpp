#include <stdio.h>

int main()
{
    int arr[10][10];
    int order;
    printf("Enter order of square matrix: ");
    scanf_s("%i", &order);
    printf("Enter square matrix elements: \n");
    for (int j = 0; j < order; j++) {
        for (int i = 0; i < order; i++) {
            scanf_s("%i", &arr[j][i]);
        }
    }
    printf("Square matrix: \n");
    for (int j = 0; j < order; j++) {
        for (int i = 0; i < order; i++) {
            printf("%2i", arr[j][i]);
        }
        printf("\n");
    }
    printf("\n");
    int n = 0;
    for (int j = 0; j < order; j++) {
        for (int i = n; i < order; i++) {
            int j2 = i;
            int i2 = j;
            if (i != j) {
                int temp = arr[j][i];
                arr[j][i] = arr[j2][i2];
                arr[j2][i2] = temp;
            }
        }
        n++;
    }
    printf("Transposed matrix: \n");
    for (int j = 0; j < order; j++) {
        for (int i = 0; i < order; i++) {
            printf("%2i", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}