#include <stdio.h>

int bottles = 99;
void bottlesOfBeer();
void takeABottle();
void buyMoreBeer();
void bottlesOnWall() ;

int main(void) {
    puts("Song: \n");
    bottlesOfBeer();
}

void bottlesOfBeer() {
    for (int i = bottles; i > 0; i--) {
        bottlesOnWall();
        takeABottle();
        puts("\n");
    }
    bottlesOnWall();
}

void bottlesOnWall() {
    if (bottles > 0) {
        printf("%d bottles of beer on the wall, %d bottles of beer.\n", bottles, bottles);
    } else {
        puts("No more bottles of beer on the wall, no more bottles of beer.");
        buyMoreBeer();
    }
}

void takeABottle() {
    printf ("Take one down and pass it around, ");
    bottles--;
    printf("%d bottles of beer on the wall.", bottles);
}

void buyMoreBeer() {
    printf("Go to the store and buy some more, ");
    bottles = 99;
    printf("%d bottles of beer on the wall.", bottles);
}