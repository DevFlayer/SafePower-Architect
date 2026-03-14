#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main() {
    int gpuBrand;
    double gpuWatts, psuUser, totalConsum, recommended;
    string gpuName;



    cout << "--- SafePower Architecture ---" << endl;
    cout << "\n[1] RTX 4090   \n[2] RTX 4070" << endl;
    cout << "Please, select your GPU:" << endl;
    cin >> gpuBrand;


    if (gpuBrand == 1) {
        gpuName = "RTX 4090";
        gpuWatts = 450.0;
    } else {
        gpuName = "RTX 4070";
        gpuWatts = 200.0;
    }


    totalConsum = gpuWatts + 150.0;
    recommended = totalConsum * 1.3;

    cout << "Please, enter your PSU Wattage: ";
    cin >> psuUser;

    if (psuUser < totalConsum) {
        cout << "STATUS: [CRITICAL] Your PSU cannot handle this build!" << endl;
        cout << "HURRY: Replace your PSU ASAP to avoid damage!" << endl;
    }
    else if (psuUser < recommended) {
        cout << "STATUS: [WARNING] PSU is enough, but has no safety margin." << endl;
        cout << " HURRY: Replace your PSU ASAP to avoid damage" << endl;
    }
    else {
        cout << "STATUS: [SAFE] Your PSU is perfect for your setup!!" << endl;
    }

    cout << "----------------------------------------" << endl;
    return 0;
}