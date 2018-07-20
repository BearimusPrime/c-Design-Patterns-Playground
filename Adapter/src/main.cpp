
#include <DrawingLibrary.hpp>



int main()
{
    PicturesLibrary::Picture picture;
    DrawingLibrary::AdapterRectangle rectangle;
    DrawingLibrary::AdapterSquare square;


    picture.drawPicture(rectangle, square); //this code could not be compiled.
                                               //Try to adapt rectangle to allow use in PicturesLibrary
}
