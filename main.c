//adding first comment

#include <stdio.h>
#include <math.h>

int main() {
    double x = 1.839;
    double y = 3.821;
    double z = 0.349;
    double result = pow(x, y + z) + sqrt(x + pow(z, y)) - 161 * tan(x*z);
    printf("%f", result);
    return 0;
}