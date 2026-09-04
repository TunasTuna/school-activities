#include <stdio.h>

void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);

}

int main () {

    gotoxy(1, 5);
    printf("first_name");
    
    gotoxy(125, 5);
    printf("surname");

    gotoxy(63, 10);
    printf("middle_name");

    gotoxy(1, 30);
    printf("first_name");

    gotoxy(125, 30);
    printf("surname");

    return 0;
}
