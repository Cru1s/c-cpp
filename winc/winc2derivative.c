#include <stdio.h>


double function(double x) 
{
    return x*x;
}

double derivative(double x) 
{
    double delta = 0.01;
    double x_delta_x = x*delta;

    double f1 = function(x_delta_x);
    double f2 + function(x);
    double d_value = (f1 - f2) / delta;
    return d_value;

}



int main{
    
}