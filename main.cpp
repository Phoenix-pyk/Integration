#include <iostream>
using namespace std;

double line(double x) { //f(x)=x
    return x;
}
double square(double x) {//f(x)=x^2
    return x*x;
}
double cube(double x) {//f(x)=x^3
    return x*x*x;
}

typedef double(*FUNC)(double); //FUNC is a pointer to a function that takes a double as a parameter.

double integrate(FUNC f, double a, double b) {
    double sum =0;
    while (a<b) {
        double delta_x=0.00001;
        sum+= f(a)*delta_x;
        a+=delta_x;
    }
    return sum;
}

int main() {

    cout << "Integral of f(x)=x from 1 to 5 is: " << integrate(line,1,5) << endl;
    cout << "Integral of f(x)=x^2 from 1 to 5 is: " << integrate(square,1,5) << endl;
    cout << "Integral of f(x)=x^3 from 1 to 5 is: " << integrate(cube,1,5) << endl;

    return 0;
}