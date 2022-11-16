#pragma once



#define TRACE_MSG		//  Commenter puis recompiler pour ne plus afficher les messages tracage dasn les méthodes.

#include <ostream>

class Point
{
private:
	int x;
	int y;

public:
	Point(int x, int y);

	Point();

	Point(const Point& source);

	virtual ~Point();

	int getX() const { return x; };
	int getY() const { return y; };

	Point& operator = (const Point& source);
	bool operator ==(const Point& source) const;

};

std::ostream& operator <<(std::ostream& os, const Point& source);

