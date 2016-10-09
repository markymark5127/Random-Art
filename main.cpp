//
//  main.cpp
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ExprNode.h"
#include "ExprBuilder.h"
#include "EasyBMP.h"

const int WIDTH_AND_HEIGHT = 800;

// Convert a double value in the range -1..1 (inclusive)
// to a color component value in the range 0..255 (inclusive).
int toColor(double val)
{
    val += 1.0;
    if (val < 0) {
            val *= -1;
    }
    val /= 2.0;
    int col = (int) (val * 255);
    if (col >= 255) {
            col = 255;
    }
    return col;
}

int main()
{
    srand(time(0));

    ExprBuilder builder;

    // Build random expressions for the red, green, and blue
    // color component values in the random art image.
    ExprNode **rgb = new ExprNode*[3];
    for (int i = 0; i < 3; i++) {
        rgb[i] = builder.build();
    }

    std::cout << "R: " << rgb[0]->exprAsString() << std::endl;
    std::cout << "G: " << rgb[1]->exprAsString() << std::endl;
    std::cout << "B: " << rgb[2]->exprAsString() << std::endl;

    SetEasyBMPwarningsOff();

    BMP image;
    image.SetBitDepth(24);
    image.SetSize(WIDTH_AND_HEIGHT, WIDTH_AND_HEIGHT);

    // Generate the random art image!
    for (int j = 0; j < WIDTH_AND_HEIGHT; j++) {
        for (int i = 0; i < WIDTH_AND_HEIGHT; i++) {
            double x = double(i) / double(WIDTH_AND_HEIGHT);
            double y = double(j) / double(WIDTH_AND_HEIGHT);

            double r = rgb[0]->evaluate(x, y);
            double g = rgb[1]->evaluate(x, y);
            double b = rgb[2]->evaluate(x, y);

            image(i, j)->Red = toColor(r);
            image(i, j)->Green = toColor(g);
            image(i, j)->Blue = toColor(b);
        }
    }

    // De-allocate the expression trees
    for (int i = 0; i < 3; i++) {
        delete rgb[i];
    }
    delete [] rgb;

    // Write to file
    image.WriteToFile("randomart.bmp");

    return 0;
}
