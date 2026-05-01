#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char ch;
   
    fptr = fopen("example.txt", "r");
    if (fptr == NULL) {
        printf("Error: Could not open file.\n");
        exit(1);
    }
    printf("File Content:\n");
    while ((ch = fgetc(fptr)) != EOF) {
        printf("%c", ch);
    }
    fclose(fptr);

    return ;
}

