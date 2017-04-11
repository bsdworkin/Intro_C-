#include <cmath>
#include "Shape.h"

class Circle: public Shape{

   private: double radius;

   public:
   Circle(double radius){
	this->radius = radius;
   }

   double getArea(){
	
	return M_PI *radius * radius;
   }

   ~Circle(){}
};
   
