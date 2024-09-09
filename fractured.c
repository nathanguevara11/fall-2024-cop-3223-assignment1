#include <stdio.h>
#include <math.h>
#define PI 3.14159

//na746082, 4085745, nathan guevara


double askinput()
{
    double input; 
    scanf("%lf", &input);
    return input; 
}




double distance_equation()
{ 
    printf("Give me two numbers to use as coordinates\n"); 
    static double x1, y1;
    x1 = askinput();
    y1 = askinput(); 
    printf("Give me two more numbers.\n");
    static double x2, y2; 
    x2 = askinput();
    y2 = askinput();

    printf("Your coordinates are (%.2f, %.2f) and (%.2f, %.2f)\n", x1, y1, x2, y2); 

    double distance = sqrt(pow((x2-x1), 2)) + sqrt(pow((y2-y1), 2)); 
    printf("the distance between the two points is %.2f\n", distance); 
    return distance;
}

double perimeter_equation()
{
    double distan = distance_equation(); 
    double perimeter = (2 * PI * (distan/ 2));
    printf("The perimeter of this circle is %.2f\n", perimeter);

    return perimeter; 
}

double calc_width()
{
    double dist = distance_equation();  
    double width = dist;
    printf("Width of this circle is %.2f\n", width); 
    return width; 
}

double area()
{
    double wid = distance_equation();
    double widt= (wid / 2); 
    double area = PI * pow(wid, 2);
    printf("The area of this circle is %.2f\n", area);
    return 3; 
}

double height() 
{
    double hig = distance_equation(); 
    printf("height of this circle is %.2f\n", hig);
    return 3;
}

int main(){

 
distance_equation();
perimeter_equation(); 
area(); 
calc_width(); 
height(); 



return 0; 
}