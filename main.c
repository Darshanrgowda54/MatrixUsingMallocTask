#include <stdio.h>
#include <stdlib.h>

    int main() {

        int rows , columns;
        printf("enter the number of rows :");
        scanf("%d",&rows);
        printf("enter the number of coloumns :" );
        scanf("%d",&columns);

        int **matrix = (int **)malloc(rows * sizeof(int *));

        for (int i = 0; i < rows; i++)
        {
            matrix[i] = (int *)malloc(columns * sizeof(int));
           *(matrix +i) = (int *)malloc(columns * sizeof(int));
            printf("%p\n",matrix[i]);
            printf("%p*\n",&matrix[i]);
        }

        // printf("%d\n%d\n", *matrix[0], *matrix[1]);
        // printf("%d\n%d\n", *matrix[0] + 1, *matrix[1] + 1);


        if (matrix == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }

        printf("Enter elements of the  matrix:\n");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                printf("Element [%d][%d]: ", i, j);
                scanf("%d", &matrix[i][j]);
            }
        }

        printf("The  matrix is:\n");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }

        free(matrix);

        return 0;
    }


// #include <stdio.h>

// int main()
// {
//     int x =10;
//     int *p =&x;
//     int **pp =&p;
//     printf("%d %d %d %p\n",x,*p,*pp,pp);
//     printf("%p %p %p %p\n",&x,&p,&pp,pp);
//     return 0;
// }
