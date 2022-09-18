// Exercise 5.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//lab5_4.cpp: this program prints triangles using user-input parameters.

#include<iostream>
using namespace std;

void draw_shape(int choice);
void draw_triangle(int size, char c);

int main()
{
    // Simplified version of main, notice that choice is fixed for now,
    // and doesn't even end up affecting anything
    int choice = 1;

    draw_shape(choice);

    return 0;
}

void draw_shape(int choice)
{
    // Simplified version of draw_shape, notice that size and c are fixed for now

    int size = 4;
    char c = '*';

    draw_triangle(size, c);
}

void draw_triangle(int size, char c)
{
    int countdown = size - 1; // These variables will control the number of spaces and 
    int charsPerLine = 1;     // characters printed on each line.

    do
    {
        for (int temp = countdown; temp > 0; temp--)
            cout << " "; //spaces decrease each line until zero to keep the point
        for (int temp = charsPerLine; temp > 0; temp--) //of the triangle centered.
            cout << c;
        cout << endl;
        charsPerLine += 2; // characters increase by two per line to form the
        countdown--;       // triangle shape
    } while (countdown >= 0);
}
