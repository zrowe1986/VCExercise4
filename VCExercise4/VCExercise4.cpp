// Exercise 4: Milling machine spindle speed
// RPM = (CS * 4) / D

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Variables
    double cuttingSpeed;   // CS, recommended cutting speed (SFPM)
    double diameter;       // D, milling cutter diameter (inches)
    double rpm;            // calculated spindle speed

    // Input
    cout << "Milling Machine Spindle Speed Calculator" << endl << endl;

    cout << "Enter the cutting speed (SFPM): ";
    cin >> cuttingSpeed;

    cout << "Enter the cutter diameter (inches): ";
    cin >> diameter;

    // Guard against divide by zero
    if (diameter <= 0)
    {
        cout << "Diameter must be greater than zero!" << endl;
        return 1;
    }

    // Calculation
    rpm = (cuttingSpeed * 4) / diameter;

    // Output
    cout << fixed << setprecision(2);
    cout << endl;
    cout << "Cutting Speed: " << cuttingSpeed << " SFPM" << endl;
    cout << "Diameter:      " << diameter << " inches" << endl;
    cout << "Spindle Speed: " << rpm << " RPM" << endl;

    return 0;
}