// Rafia Lab 1 Q2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;


class Point 
{
private:       //private data member
    int x;     //x

    int y;     //y

public:
    
    Point(int p1, int p2) // Constructor
    {
        x = p1;
        y = p2;
    
    }

   
    int getX() const   // Getter
    {
        return x;
    }

    void setX(int newX) // Setter
    {
        x = newX;
    }


    
   
    void setY(int newY)   // Setter
    {
        y = newY;
    }

    int getY() const      // Getter
    {
        return y;
    }
    
    int distance(const Point& copyp) const       // calculate distance 
    {
        int dx = x - copyp.getX();
        int dy = y - copyp.getY();
        return (dx * dx + dy * dy) * (dx * dx + dy * dy);
    }
};

int main() 
{
    
    Point x(5, 2);
    Point y(80, 70);

    
    cout << "\nPoint 1 is" << x.getX()   // Print x and y cordinate
         << ", " << x.getY() ;
    cout << "\nPoint 2 is" << y.getX()
         << ", " << y.getY();

   
    cout << "Distance between 2 point is " << x.distance(y) << endl;        // Calculate distnce

    return 0;
}
