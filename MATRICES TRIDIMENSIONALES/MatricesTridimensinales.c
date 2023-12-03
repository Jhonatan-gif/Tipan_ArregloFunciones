#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Ingrese el número de matrices tridimensionales: ");
    scanf("%d", &n);

    int matrices[100][100][100];

    for (int i = 0; i < n; i++) {
        int dim1, dim2, dim3;
        printf("Ingrese las dimensiones de la matriz %d:\n", i + 1);
        printf("Dimensión 1: ");
        scanf("%d", &dim1);
        printf("Dimensión 2: ");
        scanf("%d", &dim2);
        printf("Dimensión 3: ");
        scanf("%d", &dim3);

        printf("\nMatriz %d:\n", i + 1);
        for (int j = 0; j < dim1; j++) {
            for (int k = 0; k < dim2; k++) {
                for (int l = 0; l < dim3; l++) {
                    matrices[i][j][k] = rand() % 101;
                    printf("%d \t", matrices[i][j][k]);
                }
                printf("\n");
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}