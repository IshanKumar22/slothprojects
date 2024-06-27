#include "stdio.h"
#include "stdlib.h"

char* makeBox(int n) {
    char *s;
    char c;

    s = (char*) malloc(n * (n + 1));

    for(int j = 0; j < n; j++) {
        for(int i = 0; i <= n; i++) {
            if(i == n) {
                if(j == n - 1) {
                    c = '\0';
                } else {
                    c = '\n';
                }
            } else {
                if(i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                    c = '#';
                } else {
                    c = ' ';
                }
            }
            s[i + j * (n + 1)] = c;
        }
    }

    return s;
}

int main() {
    int n;
    char* s;

    printf("Enter the dimension: ");
    scanf("%d", &n);

    s = makeBox(n);
    puts(s);

    free(s);
    return 0;
}
