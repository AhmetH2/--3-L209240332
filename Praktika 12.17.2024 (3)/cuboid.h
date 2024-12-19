#pragma once
// cuboid.h
#ifndef CUBOID_H
#define CUBOID_H

class Cuboid {
public:
    // Function to set the dimensions of the cuboid
    void set_value(float l, float w, float h);

    // Function to calculate and return the volume of the cuboid
    float volume();

    // Function to display the volume of the cuboid
    void display();

private:
    float length;
    float width;
    float height;
};

#endif
