#include "operations.h"
#include <iostream>
#include <cmath>
using namespace std;

double add(double a, double b) {
  return a + b; 
}
double subtract(double a, double b) {
  return a - b; 
}

double multiply(double a, double b) { 
  return a * b; 
}
double divide(double a, double b) {
if (b != 0) return a / b;
else {
cout << "Error: División por cero\n";
return 0;
}
}
double logarithm(double a, double b) {
if (a > 0 && b > 0 && b != 1)
return log(a) / log(b);
else {
cout << "Error: valores inválidos para logaritmo\n";
return 0;
}
}
