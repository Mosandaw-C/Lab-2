#include <stdio.h>
#include <math.h> //To use the square root we included this

int main()
{
    // declare variables
    float a, b, c; // Declared coefficient of the polynomial (floats to conserve memory)
    double Delta, x_1, x_2; // Declared Possible soolutions and discriminant 
                            // More precision needed to account for rounding errors

    // get user input

    printf("Please type up the coefficients of the polynomial seperated by space ");
    scanf("%f %f %f",&a,&b,&c);

    if (a == 0) {
        printf("Leading coeeficient cannot be zero !!");
        return 0;
    }

    /* calculate the discriminant   <-- this is a comment for multiple lines
     the discriminant is: b² - 4ac
    */

    Delta = b * b - 4 * a * c;

    // according to the value of the discriminant, calculate the roots and print the results

    if (Delta < 0){
        printf("The equation has no solutions (negative discriminant)");
    }

    else if (Delta == 0)
    {
        x_1 = -b / (2 * a);
        printf("Only one solution x = %f", x_1);

    }

    else {
        x_1 = (-b + sqrt(Delta)) / (2 * a);
        x_2 = (-b - sqrt(Delta)) / (2 * a);
        printf("Two solutions x_1 = %f and x_2 = %f", x_1, x_2);
   
    }
    

    return 0;
}
