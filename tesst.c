#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define n 50
#define n1 100
#define n2 150
#define n3 200

void matrix_multiply(int A[][n], int B[][n], int C[][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void matrix_multiply_100(int A[][n1], int B[][n1], int C[][n1]) {
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n1; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void matrix_multiply_150(int A[][n2], int B[][n2], int C[][n2]) {
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < n2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n2; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void matrix_multiply_200(int A[][n3], int B[][n3], int C[][n3]) {
    for (int i = 0; i < n3; i++) {
        for (int j = 0; j < n3; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    // Khởi tạo bộ sinh số ngẫu nhiên
    srand(time(NULL));

    // Khởi tạo ma trận 
    int A[n][n];
    int B[n][n];
    int C[n1][n1];
    int D[n1][n1];
    int E[n2][n2];
    int F[n2][n2];
    int G[n3][n3];
    int H[n3][n3];

    // Khởi tạo giá trị cho ma trận A và B
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = rand() % 201 - 100; // Giá trị từ -100 đến 100
            B[i][j] = rand() % 201 - 100; // Giá trị từ -100 đến 100
        }
    }

    // Khởi tạo giá trị cho ma trận C và D
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n1; j++) {
            C[i][j] = rand() % 201 - 100; // Giá trị từ -100 đến 100
            D[i][j] = rand() % 201 - 100; // Giá trị từ -100 đến 100
        }
    }
    
    // Khởi tạo giá trị cho ma trận E và F
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < n2; j++) {
            E[i][j] = rand() % 201 - 100; // Giá trị từ -100 đến 100
            F[i][j] = rand() % 201 - 100; // Giá trị từ -100 đến 100
        }
    }

    // Khởi tạo giá trị cho ma trận G và H
    for (int i = 0; i < n3; i++) {
        for (int j = 0; j < n3; j++) {
            G[i][j] = rand() % 201 - 100; // Giá trị từ -100 đến 100
            H[i][j] = rand() % 201 - 100; // Giá trị từ -100 đến 100
        }
    }

    // Khởi tạo ma trận để lưu kết quả
    int res[n][n];
    int res1[n1][n1];
    int res2[n2][n2];
    int res3[n3][n3];

    // tính thời thanh chạy cho ma trận vuông 50
    clock_t start_time = clock();
    matrix_multiply(A, B, res);
    clock_t end_time = clock();
    double runtime = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("Thoi gian chay C ma tran vuong 50: %.20f giay\n", runtime);

    // tính thời gian chạy cho ma trận vuông 100
    clock_t start_time1 = clock();
    matrix_multiply_100(C, D, res1);
    clock_t end_time1 = clock();
    double runtime1 = (double)(end_time1 - start_time1) / CLOCKS_PER_SEC;
    printf("Thoi gian chay C ma tran vuong 100: %.10f giay\n", runtime1);

    // tính thời gian chạy cho ma trận vuông 150
    clock_t start_time2 = clock();
    matrix_multiply_150(E, F, res2);
    clock_t end_time2 = clock();
    double runtime2 = (double)(end_time2 - start_time2) / CLOCKS_PER_SEC;
    printf("Thoi gian chay C ma tran vuong 150: %.10f giay\n", runtime2);

    // tính thời gian chạy cho ma trận vuông 200
    clock_t start_time3 = clock();
    matrix_multiply_200(G, H, res3);
    clock_t end_time3 = clock();
    double runtime3 = (double)(end_time3 - start_time3) / CLOCKS_PER_SEC;
    printf("Thoi gian chay C ma tran vuong 200: %.10f giay\n", runtime3);

    return 0;
}