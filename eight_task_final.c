#include <stdio.h>

int main() {
    float pi = 3.14;      // hardcoded pi
    float Max = 1.0;      // max volume in m^3
    float Volume = 0.0;

    for (int i = 1; ; i++) {
        float Radius = i * 0.01f;  // Convert integer step to float radius

        Volume = (4.0f / 3.0f) * pi * Radius * Radius * Radius;

        if (Volume > Max)
            break;

        printf("Radius: %.2f m -> Volume: %.6f m^3\n", Radius, Volume);
    }

    return 0;
}
