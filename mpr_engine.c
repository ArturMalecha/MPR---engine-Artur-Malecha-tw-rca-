
#include <stdio.h>

float mpr_oblicz(float masa, float predkosc)
{
    return masa * predkosc;
}

int main() {
    printf("=== SILNIK M•P=R ===\n");
    printf("Twórca: Artur Malecha\n");

    float M = 10.0;
    float P = 5.0;
    float R = mpr_oblicz(M, P);

    printf("Masa: %.2f\n", M);
    printf("Predkosc: %.2f\n", P);
    printf("Rezonans M•P=R: %.2f\n", R);
    
    return 0;
}
