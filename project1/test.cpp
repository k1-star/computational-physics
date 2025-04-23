#include<iostream>
#include<cmath>
using namespace std;

double f(double x) {
    return std::pow(x, 4) * std::pow(1 - x, 4) / (1 + std::pow(x, 2)); // Example function: f(x) = x^2
}
int main() {
    // Simpson method for numerical integration
    // Lower limit
    std::cout.precision(std::numeric_limits<double>::digits10 + 1);
    double a = 0.0; // Lower limit
    double b = 1.0; // Upper limit
    int n = 1000000; // Number of intervals (must be even)
    double h = (b - a) / n; // Width of each interval
    double integral = 0.0; // Result of the integration
   for(int i = 0; i <= n; i++) {
        double x = a + i * h; // Current x value
        if (i == 0 || i == n) {
            integral += f(x); // First and last terms
        } else if (i % 2 == 0) {
            integral += 2 * f(x); // Even terms
        } else {
            integral += 4 * f(x); // Odd terms
        }
    }
    integral *= h / 3; // Final result
    cout << "The integral of f(x) from " << a << " to " << b << " is approximately: " << integral << endl;
    return 0;
}