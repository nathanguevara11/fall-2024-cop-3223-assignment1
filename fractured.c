#include <stdio.h>
#include <math.h>
#define PI 3.14159



// double x1, x2;
//     scanf("%lf %lf", &x1, &x2);
//     double y3, y2;
//     scanf("%lf %lf", &y3, &y2);
void state(){
    printf("Give me 2 unique numbers.\n");
}

double scan1(){
    double x1, x2;
    scanf("%lf %lf", &x1, &x2);
    return (x2-x1);
}

void ment(){
    printf("give me two more numbers.\n");
}

double scan2(){
    double y3, y2;
    scanf("%lf %lf", &y3, &y2);
    return (y2-y3);
}


double distance_equation(){ 
    
    double call = scan1(); 
    double back = scan2(); 
    

    double distance = sqrt(pow((call), 2)) + sqrt(pow((back), 2)); 
    return distance;
}

double print_distance(){
    double dise = distance_equation();
    printf("Your distance is %lf\n", dise);
    return 3; 
 } 
double perimeter_equation(){

    //double distan = distance_equation(); 
    double distan = distance_equation(); 
    double perimeter = (2 * PI * (distan/ 2));
    printf("The perimeter is %lf\n", perimeter);

    return perimeter; 
}
double calc_width(){
    double dist = distance_equation();  
    double width = (dist / 2);
    printf("Width is %lf\n", width); 
    return width; 
}
double area(){
    double wid = distance_equation();
    double widt= (wid / 2); 
    double area = PI * pow(wid, 2);
    printf("The area of the circle is %lf\n", area);
    return 3; 
}
double height() {
    double hig = distance_equation(); 
    printf("height is %lf\n", hig);
    return 3;
}
int main(){
// state();
// scan1();
// ment();
// scan2(); 
// distance_equation();


print_distance();
perimeter_equation(); 
area(); 
calc_width(); 
height(); 



return 0; 
}