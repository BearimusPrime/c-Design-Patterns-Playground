#pragma once
#include <iostream>
#include "PicturesLibrary.hpp"

namespace DrawingLibrary
{

class Rectangle
{
public:

    Rectangle()
    {
       std::cout<< "Graphic environment was set up.\n";
    }

    Rectangle(Rectangle&)
    {
       std::cout<< "Graphic environment was copied.\n";
    }

    void draw(int x1, int y1, int x2, int y2)
    {
        std::cout<< "I have just drawn a rectangle with corners at points: "
                 << "(" << x1 << ","<<y1<<") ; "
                 << "(" << x2 << ","<<y2<<") \n";
    }
};


class AdapterSquare : public PicturesLibrary::Square
{
    DrawingLibrary::Rectangle Rec;
public:
    AdapterSquare(DrawingLibrary::Rectangle& rec): Rec(rec) {}
    AdapterSquare() = default;
    virtual void draw(int x, int y, int lenght)override
    {
	Rec.draw(x,y,x+lenght,y+lenght);
    }

};

class AdapterRectangle : public PicturesLibrary:: Rectangle
{
    DrawingLibrary::Rectangle Rec;
public:
    AdapterRectangle(DrawingLibrary::Rectangle& rec): Rec(rec) {}
    AdapterRectangle() = default;
    virtual void draw(int x1, int y1, int x2, int y2)override
    {
	Rec.draw(x1,y1,x2,y2);
    }
};

}
