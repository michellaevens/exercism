#include "leap.h"
#include "stdio.h"


int year = 0;

bool leap_year(int year){
if (year % 100 == 0) {
  if (year % 400 == 0) {
    return true;
    }
    else {
        return false; 
    }
}
else if (year % 4 == 0) {
    return true;
}
else {
    return false;
}
}
