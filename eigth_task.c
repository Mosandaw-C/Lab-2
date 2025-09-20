#include <stdio.h>

int main() {
    float pi = 3.14;  // we hardcode pi
    float Max = 1;    // we hardcode the maximum volume
    float Volume = 0; // we define volume and initialize with a value
    float Radius = 0.01; // we define radius and initialize it with a value

    while (1) {

        Volume = (4.0 / 3.0) * pi * Radius * Radius * Radius;

        if (Volume > Max)
            break;

        printf("%.6f m^3,  \n", Volume);

        Radius = Radius + 0.01;
    }

    return 0;
}

