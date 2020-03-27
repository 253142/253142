#include <iostream>


using namespace std;

class Circle
{
	

	
public:
	
	Circle(double r=8.5, string c="green") ;
	 
	double getRadius() const;


double getArea() const;


double AreaCompare(Circle circle) const;

string getColor() const;




void setDescribe();

private:

double radius;
string color;

};
