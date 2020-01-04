#include <stdio.h>

#define MAX_SIZE 100

int solutions = 0; // number of solutions

void printSolution(int n, int table[MAX_SIZE][MAX_SIZE])
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            printf(" %2d ", table[i][j]);
        printf("\n");
    }
    for (int i = 0; i < n; ++i)
        printf(" -- ");
    printf("\n");
}

int isAvailable( int n, int x, int y, int table[MAX_SIZE][MAX_SIZE]){
    return x >= 0 && y >= 0 && x < n && y < n && table[x][y] == -1;
}

int findSolution( int n, int x, int y, int moves, int table[MAX_SIZE][MAX_SIZE], int xMove[], int yMove[]){
    int nextX, nextY;
    if(moves == n*n) {
        printSolution(n,table);
        solutions++;
    }
    for(int i = 0; i < 8; ++i){
        nextX = x + xMove[i];
        nextY = y + yMove[i];
        if(isAvailable(n,nextX,nextY,table)){
            table[nextX][nextY] = moves;
            if(findSolution(n,nextX, nextY, moves + 1, table, xMove, yMove))
                return 1;
            else
                table[nextX][nextY] = -1;
        }
    }
    return 0;
}

void solve (int n){
    int table[MAX_SIZE][MAX_SIZE];

    for(int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            table[i][j] = -1;
        }

    int xMove[8] = {  2, 1, -1, -2, -2, -1,  1,  2 };
    int yMove[8] = {  1, 2,  2,  1, -1, -2, -2, -1 };

    table[0][0] = 0;
    findSolution(n,0,0,1,table,xMove,yMove);
    if(solutions)
        printf("number of solutions is: %d\n", solutions);
    else
        printf("There is no solution!");

}

int main() {
    int n;
    printf("Insert the size of the table:\n");
    scanf("%d", &n);
    solve(n);
    return 0;
}