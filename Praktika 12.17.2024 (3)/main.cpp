// main.cpp
#include <iostream>
#include "cuboid.h"  // Include the Cuboid class header file

using namespace std;

int main() {
    // Create an array of 3 Cuboid objects
    Cuboid cuboids[3];

    float length, width, height;

    // Input the dimensions for each cuboid
    for (int i = 0; i < 3; i++) {
        cout << "Enter the length, width, and height for cuboid " << i + 1 << ": ";
        cin >> length >> width >> height;

        cuboids[i].set_value(length, width, height);  // Set the values for the cuboid
    }

    // Display the volume of each cuboid
    cout << "\nVolumes of the cuboids:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Cuboid " << i + 1 << ": ";
        cuboids[i].display();  // Display the volume of the cuboid
    }

    return 0;
}
