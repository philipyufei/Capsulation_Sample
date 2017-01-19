#ifndef TEST_H
#define TEST_H

class Square
{
public:
	Square();
	Square(int width, int height);
	~Square();
	int area();
private:
	int _width=0;
	int _height=0;	
};

#endif