#include <stdio.h>
#include <stdlib.h>

#define MAX_M 100
#define MAX_N 100

void getStartingPos(int *x, int *y, int labyrinth[MAX_M][MAX_N]){
    int valid = 1;
    do {
        printf("Insert starting X and Y coordinates in the labyrinth:\n");
        scanf("%d %d", &(*x), &(*y));
        if(labyrinth[*x][*y] != 1)
            valid = 0;
    }while(!valid);
    labyrinth[*x][*y] = 5; // '5' meaning start in the labyrinth

}
int solution(int x, int y, int m, int n){
    if(x == 0 || y == 0 || x == m-1 || y == n-1)
        return 1;
    return 0;
}
int findPath(int x, int y, int m, int n, int labyrinth[MAX_M][MAX_N]){
    if(solution(x,y,m,n) && labyrinth[x][y] == 1){
        labyrinth[x][y] = 8; // padding with '8's the path
        return 1;
    }
    if(labyrinth[x][y] && x>=0 && y>=0 && x<m && y<n){
            labyrinth[x][y] = 8;
        if(findPath(x-1,y,m,n,labyrinth))
            return 1;
        if(findPath(x,y-1,m,n,labyrinth))
            return 1;
        if(findPath(x+1,y,m,n,labyrinth))
            return 1;
        if (findPath(x,y+1,m,n,labyrinth))
            return 1;
            labyrinth[x][y] = 1;
        return 0;
    }
    return 0;
}
void printMatrix(int m, int n, int labyrinth[MAX_M][MAX_N]){
    printf("\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
            printf("%d ",labyrinth[i][j]);
        printf("\n");
    }
    printf("\n");
}

void solve(int m, int n, int labyrinth[MAX_M][MAX_N]){
    int startX, startY;
    getStartingPos(&startX, &startY, labyrinth);
    printMatrix(m,n,labyrinth);
    findPath(startX+1,startY,m,n,labyrinth);
    findPath(startX,startY+1,m,n,labyrinth);
    findPath(startX-1,startY,m,n,labyrinth);
    findPath(startX,startY-1,m,n,labyrinth);
    printMatrix(m,n,labyrinth);
}

int main() {
    int m = 5, n = 6;
    int labyrinth[MAX_M][MAX_N] = {
            {0, 0, 0, 1, 0, 0},
            {1, 1, 0, 1, 1, 0},
            {0, 0, 1, 0, 1, 0},
            {0, 1, 1, 1, 1, 0},
            {0, 0, 1, 0, 0, 0},
    };
    solve(m,n,labyrinth);
    return 0;
}