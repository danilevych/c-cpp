#include "Complex.h"

int main() {
	Complex re(2, 4);
	Complex p;

	std::cout << "p: " << p << std::endl;

	std::cout << "________________________________________________" << std::endl;

	std::cout << "get.re.re: " << re.getReal() << std::endl;
    std::cout << "get.p.im: " << p.getImaginary() << std::endl;

    std::cout << "________________________________________________" << std::endl;

    if ( re == p ) {
    	std::cout << re << "is equal to" << p << std::endl;
    } else { 
    	std::cout << re << "is not equal to" << p << std::endl;
    }

    std::cout << "________________________________________________" << std::endl;

    re+=5;
    p+=4;

    std::cout << "NEW re: " << re << std::endl;
    std::cout << "NEW p: " << p << std::endl;

    std::cout << "________________________________________________" << std::endl;

    re-=1;
    p-=1;

    std::cout << "NEW NEW re: " << re << std::endl;
    std::cout << "NEW NEW p: " << p << std::endl;

    std::cout << "________________________________________________" << std::endl;


    return 0;
}