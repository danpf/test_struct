
#include <string>
#include <vector>
#include <myts.hpp>
#include <iostream>

int main(void) {
	testers::test_my_struct mys;
	std::cout << mys.an_int << " " << mys.a_string << std::endl;
	mys.increment_int();
	std::cout << mys.an_int << " " << mys.a_string << std::endl;
}
