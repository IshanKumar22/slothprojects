#include "stdio.h"
#include "string.h"
#include "stdlib.h"

void move(char** _s) {
    char* s = *_s;
    char c;
    for(int i = 0; i < strlen(s); i++) {
        c = (int) s[i];
        if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
            s[i] = (char) (c + 1);
        }
    }
}

int main() {
    char *s;
    int len = 0;

    printf("Enter the length of the string: ");
    scanf("%d", &len);

    if(len <= 0) {
        printf("Invalid length");
        return -1;
    }

    s = (char*) malloc(len + 1);

    printf("Enter the string: ");
    fgets(s, len + 1, stdin);

    if(strlen(s) == 1) fgets(s, len + 1, stdin);

    move(&s);

    printf("Moved string: %s\n", s);

    free(s);
    return 0;
}
