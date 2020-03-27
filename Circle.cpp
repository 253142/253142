#include <iostream>
#include "Circle.h"



double Circle::getRadius() const
{

return radius;
}


double Circle::getArea() const


{
double Area=radius*radius*3.14; 
return Area;
}


double Circle::AreaCompare(Circle circle) const
{

if(this->getArea() - circle.getArea()>0)
{
cout<<"First circle is bigger"<<endl;
}
else if(this->getArea() - circle.getArea()<0)
{
cout<<"Second circle is bigger"<<endl;
}
else
{
cout<<"Both circles are the same"<<endl;
}	

return this->getArea() - circle.getArea();
}

string Circle::getColor() const
{
return color;
}




void Circle::setDescribe()
{
cout<<"This is a "<< getColor() <<" circle, with the radius of " << getRadius() <<" and the area of " <<getArea()<< " ."<<endl;

}