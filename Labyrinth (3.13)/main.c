#include <stdio.h>

#define MAX_M 100
#define MAX_N 100

void getStartingPos(int *x, int *y, int m, int n, int labyrinth[MAX_M][MAX_N]){
    int valid;
    do {
        valid = 1;
        printf("Insert starting X and Y coordinates (line and column) in the labyrinth:\n");
        scanf("%d %d", &(*x), &(*y));
        if(labyrinth[*x][*y] != 1 && *x>=0 && *y>=0 && *x<m && *y<n)
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
    if(x>=0 && y>=0 && x<m && y<n){ // making sure the current pos is in the matrix
        if (solution(x, y, m, n) && labyrinth[x][y] == 1) { // verify if it's an exit
            labyrinth[x][y] = 7; // padding with '7's the path
            return 1;
        }
        if (labyrinth[x][y] == 1) {
            labyrinth[x][y] = 7;
            if (findPath(x - 1, y, m, n, labyrinth))
                return 1;
            if (findPath(x, y - 1, m, n, labyrinth))
                return 1;
            if (findPath(x + 1, y, m, n, labyrinth))
                return 1;
            if (findPath(x, y + 1, m, n, labyrinth))
                return 1;
            labyrinth[x][y] = 1;
            return 0;
        }
    }
    return 0;
}
int thereArePaths(int x, int y, int m, int n, int labyrinth[MAX_M][MAX_N]){
    return findPath(x+1,y,m,n,labyrinth) || findPath(x,y+1,m,n,labyrinth)
       || findPath(x-1,y,m,n,labyrinth) || findPath(x,y-1,m,n,labyrinth);
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
    getStartingPos(&startX, &startY, m, n, labyrinth);
    printMatrix(m,n,labyrinth);
    if(!thereArePaths(startX,startY,m,n,labyrinth))
        printf("The problem has no paths:\n");
    else{
        printf("The problem has the following unique paths:\n");
        while (thereArePaths(startX,startY,m,n,labyrinth));
    }
    printMatrix(m,n,labyrinth);
}

int main() {
    int m = 5, n = 6;
    int labyrinth[MAX_M][MAX_N] = {
            {0, 0, 1, 0, 0, 0},
            {0, 1, 1, 0, 1, 1},
            {0, 0, 1, 1, 1, 0},
            {0, 1, 1, 0, 1, 1},
            {0, 1, 0, 0, 1, 0},
    };
    solve(m,n,labyrinth);
    return 0;
}