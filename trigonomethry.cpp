#include <iostream>

#include <cmath>

int main() {
	setlocale(LC_ALL, "ukr");

	double angle_radians = 0.0;

	double z1 = cos(angle_radians) + cos(2 * angle_radians) + cos(6 * angle_radians) + cos(7 * angle_radians);

	double z2 = 4 * cos(angle_radians / 2) * cos(5 * angle_radians / 2) * cos(4 * angle_radians);

	std::cout << "Результат z1: " << z1 << std::endl;

	std::cout << "Результат z2: " << z2 << std::endl;

	return 0;

}
