#include "test.h"

Square::Square(){}

Square::Square(int width, int height)
{
	_width = width;
	_height = height;
}

Square::~Square(){}

int Square::area()
{
	return _width * _height;
}
