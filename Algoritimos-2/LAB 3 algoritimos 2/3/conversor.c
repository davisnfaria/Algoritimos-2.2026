#include "conversor.h"

float celsius_fahrenheit(float c) {
    return (c * 9.0 / 5.0) + 32.0;
}

float fahrenheit_celsius(float f) {
    return (f - 32.0) * 5.0 / 9.0;
}