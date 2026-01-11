#include <stdio.h>

// Function prototypes
void inputMatrix(int matrix[10][10], int m, int n);
void displayMatrix(int matrix[10][10], int m, int n);
void multiplyMatrix(int A[10][10], int B[10][10], int result[10][10], int m, int n);

int main()
{
    int A[10][10], B[10][10], product[10][10];
    int m, n;

    // Input dimensions for matrices
    printf("Enter rows and columns for Matrix A (m n): ");
    scanf("%d %d", &m, &n);

    // Input matrices
    printf("Enter elements of Matrix A (%dx%d):\n", m, n);
    inputMatrix(A, m, n);
    printf("Enter elements of Matrix B (%dx%d):\n", m, n);
    inputMatrix(B, m, n);

    // Multiply matrices
    multiplyMatrix(A, B, product, m, n);

    // Display result
    printf("\nProduct of Matrix A and Matrix B:\n");
    displayMatrix(product, m, n);

    return 0;
}

// Function to input matrix elements
void inputMatrix(int matrix[10][10], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[10][10], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrix(int A[10][10], int B[10][10], int result[10][10], int m, int n)
{
    // Initialize result matrix to zero
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] = 0;
        }
    }

    // Perform multiplication
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}