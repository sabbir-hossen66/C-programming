/* 
Given two numbers N
, M
 and a 2D array of size N
 * M
. Print the inverted array that appeared in the mirror.

Input
First line contains two numbers N
, M
 (1≤N,M≤100)
 N
 donates number of rows and M
 donates number of columns.

Each of the next N
 lines will contain M
 numbers (1≤Ai,j≤109)
.
*/
#include<stdio.h>
int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    int arr[N][M];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = M - 1; j >= 0; j--){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}