#include "add.h"

add::add(double left, double right) : l{ left }, r{right} {
}

double add::perform() {
	return l + r;
}
