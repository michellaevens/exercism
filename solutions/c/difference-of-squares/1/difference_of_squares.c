#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number) {
unsigned int n1 = 1;
unsigned int total1 = 0;

while (n1 <= number) {
    total1 = total1 + (n1*n1);
    n1++;
}
return(total1);
}

unsigned int square_of_sum(unsigned int number) {
unsigned int n = 1;
unsigned int total = 0;
while (n <= number) {
    total = total + n;
    n++;
}
total = (total*total);
return(total);
}

unsigned int difference_of_squares(unsigned int number) {
return((square_of_sum(number))-(sum_of_squares(number)));
}
