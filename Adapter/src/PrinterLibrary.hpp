#pragma once

namespace PrinterLibrary
{

class RectanglePrinter
{
public:
    virtual void draw(int x, int y, int width, int height) = 0;
};

class SquarePrinter
{
public:
    virtual void draw(int x, int y, int length) = 0;
};

class Printer
{
public:
    void drawPicture(RectanglePrinter& rectangle, SquarePrinter& sqare);
};

}
