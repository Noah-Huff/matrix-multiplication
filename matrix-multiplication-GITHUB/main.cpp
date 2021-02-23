//
//  main.c
//  matrix-multiplication-GITHUB
//
//  Created by Noah Huff on 2/23/21.
//


//array and answer for 2x2 array
// 1 7    3 3     38 17
// 2 4  * 5 2  =  26 14

/* array and answer for 4x4 array
 { 5, 7, 9, 10 },       { 3, 10, 12, 18 },      { 210, 267, 236, 271 }
 { 2, 3, 3, 8 },   *    { 12, 1, 4, 9 },    =   { 93, 149, 104, 149 }
 { 8, 10, 2, 3 },       { 9, 10, 12, 2 },       { 171, 146, 172, 268 }
 { 3, 3, 4, 8}          { 3, 12, 4, 10}         { 105, 169, 128, 169 }
 */
#include <stdio.h>
#define TWO_BY_TWO 2
#define FOUR_BY_FOUR 4

int array_size(int a[TWO_BY_TWO][TWO_BY_TWO]);
int array_size(int a[FOUR_BY_FOUR][FOUR_BY_FOUR]);
void multiply_array(int A[TWO_BY_TWO][TWO_BY_TWO], int B[TWO_BY_TWO][TWO_BY_TWO]);
void multiply_array(int A[FOUR_BY_FOUR][FOUR_BY_FOUR], int B[FOUR_BY_FOUR][FOUR_BY_FOUR]);


int main(int argc, const char * argv[]) {
    // insert code here...
    
    int array_A [TWO_BY_TWO] [TWO_BY_TWO] = {
        { 1, 7 },
        { 2, 4 }
    };
    int array_B [TWO_BY_TWO] [TWO_BY_TWO] = {
        { 3, 3 },
        { 5, 2 }
    };
    
    int array_C [FOUR_BY_FOUR][FOUR_BY_FOUR] = {
        { 5, 7, 9, 10 },
        { 2, 3, 3, 8 },
        { 8, 10, 2, 3 },
        { 3, 3, 4, 8}
    };
    int array_D [FOUR_BY_FOUR][FOUR_BY_FOUR] = {
        { 3, 10, 12, 18 },
        { 12, 1, 4, 9 },
        { 9, 10, 12, 2 },
        { 3, 12, 4, 10}
    };
    
    multiply_array(array_A, array_B);
    multiply_array(array_C, array_D);
    
    return 0;
}


//Array Size and standard multiplication for  2x2 matrix
int array_size(int array[TWO_BY_TWO][TWO_BY_TWO] ){
    int rows = (int)sizeof(*array)/(int)sizeof(*array[0]);
    printf("\ninside array size %d\n", array[0][1]);
    return rows;
}
void multiply_array(int A[TWO_BY_TWO][TWO_BY_TWO], int B[TWO_BY_TWO][TWO_BY_TWO]) {
    int dimension = array_size(A);
    int C[TWO_BY_TWO][TWO_BY_TWO];
    printf("Final result for standard matrix multiplication of size %d by %d:\nArray C =", dimension, dimension);
    for ( int i = 0; i < dimension; i++ ){
        printf("\n[");
        for ( int j = 0; j < dimension ; j++ ) {
            C[i][j] = 0;
            for ( int k = 0; k < dimension; k++ ) {
                C[i][j] = C[i][j] + (A[i][k] * B[k][j]);
                if ( k == dimension - 1 ) {
                    printf("%d ", C[i][j]);
                }
            }
        }
        printf("]");
    }
    printf("\n");
    
}

//array size and multiplication for 4x4 matrix
int array_size(int array[FOUR_BY_FOUR][FOUR_BY_FOUR] ){
    int rows = (int)sizeof(*array)/(int)sizeof(*array[0]);
    printf("\ninside array size %d\n", array[0][1]);
    return rows;
}

void multiply_array(int A[FOUR_BY_FOUR][FOUR_BY_FOUR], int B[FOUR_BY_FOUR][FOUR_BY_FOUR]) {
    int dimension = array_size(A);
    int C[FOUR_BY_FOUR][FOUR_BY_FOUR];
    printf("Final result for standard matrix multiplication of size %d by %d:\nArray C =", dimension, dimension);
    for ( int i = 0; i < dimension; i++ ){
        printf("\n[");
        for ( int j = 0; j < dimension ; j++ ) {
            C[i][j] = 0;
            for ( int k = 0; k < dimension; k++ ) {
                C[i][j] = C[i][j] + (A[i][k] * B[k][j]);
                if ( k == dimension - 1 ) {
                    printf("%d ", C[i][j]);
                }
            }
        }
        printf("]");
    }
    printf("\n");
    
}

