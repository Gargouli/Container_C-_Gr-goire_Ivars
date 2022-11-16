#pragma once

#define DllExport   __declspec( dllexport )
#define DllImport   __declspec( dllimport )

#define TRACE_MSG		//  Commenter puis recompiler pour ne plus afficher les messages tracage dasn les méthodes.

#include <ostream>

class DllExport Point
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

DllExport std::ostream& operator <<(std::ostream& os, const Point& source);

