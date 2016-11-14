#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    float a, b, c, d, root1, root2;

    if (argc > 2) {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        c = atoi(argv[3]);
    } else {
        puts("Please provide 3 integers as argument!");
        return -1;
    }

    d = b * b - 4 * a * c;

    if(d < 0){
        printf("Roots are complex number.\n");

        printf("Roots of quadratic equation are: ");
        printf("%.3f%+.3fi",-b/(2*a),sqrt(-d)/(2*a));
        printf(", %.3f%+.3fi",-b/(2*a),-sqrt(-d)/(2*a));

        return 0;
    }
    else if(d==0){
        printf("Both roots are equal.\n");

        root1 = -b /(2* a);
        printf("Root of quadratic equation is: %.3f ",root1);

        return 0;
    }
    else{
        printf("Roots are real numbers.\n");

        root1 = ( -b + sqrt(d)) / (2* a);
        root2 = ( -b - sqrt(d)) / (2* a);
        printf("Roots of quadratic equation are: %.3f , %.3f",root1,root2);
    }
}