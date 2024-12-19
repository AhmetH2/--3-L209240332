// cuboid.cpp
#include <iostream>
#include "cuboid.h"  // Include the header file for the Cuboid class

using namespace std;

// Function to set the cuboid's dimensions
void Cuboid::set_value(float l, float w, float h) {
    length = l;
    width = w;
    height = h;
}

// Function to calculate and return the volume of the cuboid
float Cuboid::volume() {
    return length * width * height;
}

// Function to display the volume of the cuboid
void Cuboid::display() {
    cout << "Volume: " << volume() << endl;
}
