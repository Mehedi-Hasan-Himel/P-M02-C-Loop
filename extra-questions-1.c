// Write a c program to print 8’s time table to 200

#include <stdio.h>

int main() {
    
    int i;
    int multiply = 8;
    for(i = 1; multiply * i <=200; i++){
        printf("%d * %d = %d\n", multiply, i,multiply * i);
    }

    return 0;
}
