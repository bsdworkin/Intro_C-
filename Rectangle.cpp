#include "Shape.h"

class Rectangle : public Shape{

   private:
	double length;
	double width;

   public:
   Rectangle(double width, double length){
	this->length = length;
	this->width = width;
   }

   double getArea(){
	return length * width;
   }

   ~Rectangle(){}
};
