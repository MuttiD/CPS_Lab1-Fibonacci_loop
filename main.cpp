#include "mbed.h" // using OS 5.15.2

Serial pc(USBTX, USBRX);

// counter
int i = 2;
// term value
int n = 10;
// first term
int i_1 = 0;
// second term
int i_2 = 1;

// adding main function
int main() {
    pc.printf("Fibonacci Using Simple Loops:(%d) \r\n", n);
    pc.printf("%d, ", i_1);
    pc.printf("%d, ", i_2);
    
    // loop 
    while (i < n) {
        int sum = i_1 + i_2;
        i_1 = i_2;
        i_2 = sum;
        i++;
        pc.printf("%d, ", sum);
    }

    while (true) {

    }
    
}


