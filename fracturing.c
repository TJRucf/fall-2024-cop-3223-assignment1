// Name: Tyler Russell
// Date: 9/8/2024
// Class: COP3223C, Professor Parra
// Purpose: This program inputs x and y-values in order to output various calculations in regards to a circle.
// Input: asks for points to be used in calculating various circle-based measurements
// Outputs the various point-coordinates as well as the calculation completed.

#include <stdio.h>
#include <math.h>

#define PI 3.14159


double inputHelper(){
     // Variables to be used
    double x1, y1, x2, y2, distance;

    //Inputs
   // printf("Enter x1: ");
    scanf("%lf", &x1);

   // printf("Enter y1: ");
    scanf("%lf", &y1);

   // printf("Enter x2: ");
    scanf("%lf", &x2);

   // printf("Enter y2: ");   
    scanf("%lf", &y2);

    // Distance calculation via the formula: d = sqrt((x2-x1)^2+(y2-y1)^2)
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));


    //Outputs
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    

     // Returns the calculated distance
    return distance;
}


double calculateDistance(){

    double distance = inputHelper();

    printf("The distance between the two points is %.2lf\n", distance);

    return distance;
}


//Calculates the perimeter of a circle using the previously calculated distance and pi. 
double calculatePerimeter(){
    
    double distance = inputHelper();
    double perimeter = (PI * distance);

    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);

    return 1.0;
}


// Calculates the area of a circle via user inputs and the circle-area formula. 
double calculateArea(){

    double distance = inputHelper();
    double radius = distance/2;
    double area = PI * pow(radius, 2);

    printf("The area of the city encompassed by your request is %2lf\n", area);
    return 1.0;
}

// As the width of a circle is just the diameter of the circle, the diameter is what is outputted.
double calculateWidth(){
    double distance = inputHelper();

    printf("The width of the city encompassed by your request is %2lf\n", distance);
    return 1.0;
}

// As the height of a circle is just the diameter of the circle, the diameter is what is outputted.
double calculateHeight(){
    double distance = inputHelper();

    printf("The height of the city encompassed by your request is %2lf\n", distance);
    return 1.0;
}

// main
int main(int argc, char **argv){
    
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateHeight();
    calculateWidth();
    
    return 0;
}