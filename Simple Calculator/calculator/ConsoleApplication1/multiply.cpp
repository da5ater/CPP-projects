#include "multiply.h"

multiply::multiply(double left, double right) :l{ left }, r{ right } {};

double multiply::perform() {
	return l * r;
};