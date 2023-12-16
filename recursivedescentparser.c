#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int E();
int Z();
int i = 0, len, result;
char input[20];

int main() {
    printf("The grammar is E->iZ\nZ->+iZ/e\n");
    printf("Enter the input string\n");
    scanf("%s", input);
    len = strlen(input);
    result = E();
    if (result == 1 && i == len) {
        printf("Input has been accepted\n");
    } else {
        printf("Input not accepted\n");
    }
    return 0;
}

int E() {
    if (input[i] == 'i') {
        i++;
        result = Z();
        if (result == 1) {
            return 1;
        } else {
            return -1;
        }
    }
    return -1;
}

int Z() {
    if (input[i] == '+' && input[i + 1] == 'i') {
        i = i + 2;
        result = Z();
        if (result == 1) {
            return 1;
        } else {
            return -1;
        }
    }
    return 1; // epsilon production
}
