#include <stdio.h>

double recursiveHermite(int n, double x){
    if(n == 0)
        return 1;
    if(n == 1)
        return 2*x;
    return 2*n*recursiveHermite(n-1, x) - 2*(n-1)*recursiveHermite(n-2,x);
}

double nonRecursiveHermite(int n, double x){
    if(n == 0)
        return 1;
    if(n == 1)
        return 2*x;
    int i = 2;
    double preprevious = 1, previous = 2*x, result;
    while(i <= n){
        result = 2*i*previous - 2*(i-1)*preprevious;
        preprevious = previous;
        previous = result;
        i++;
    }
    return result;
}

int main() {
    int n;
    double x, result1, result2;
    printf("insert the value for 'x' and 'n':\n");
    scanf("%lf %d", &x, &n);
    result1 = recursiveHermite(n, x);
    result2 = nonRecursiveHermite(n,x);
    printf("the recursive hermite polynomial value for %.2lf to the %dth power is: %.2lf\n", x,n, result1);
    printf("the non-recursive hermite polynomial value for %.2lf to the %dth power is: %.2lf", x,n, result2);

    return 0;
}