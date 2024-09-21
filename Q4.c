// Sum of Elements in Row & Column of 2D Array  

#include <stdio.h>

int main() {
    int rows, cols, i, j, rowSum = 0, colSum = 0, selectedRow, selectedCol;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter the elements of the 2D array:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter the row number (0 to %d) to find the sum: ", rows - 1);
    scanf("%d", &selectedRow);
    printf("Enter the column number (0 to %d) to find the sum: ", cols - 1);
    scanf("%d", &selectedCol);

    printf("\nThe 2D array is:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for(j = 0; j < cols; j++) {
        rowSum += arr[selectedRow][j];
    }

    for(i = 0; i < rows; i++) {
        colSum += arr[i][selectedCol];
    }

    printf("\nThe sum of elements in row %d is: %d\n", selectedRow, rowSum);
    printf("The sum of elements in column %d is: %d\n", selectedCol, colSum);

    return 0;
}
