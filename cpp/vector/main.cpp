#include "Vector.h"

int main() {
    Vector x(10.5, 10.0);
    Vector y(12.0, 4.0);

    std::cout << "Vector x:" << x << std::endl;

    std::cout << "getX.x: " << x.getX() << std::endl;
    std::cout << "getY.y: " << x.getY() << std::endl;

    std::cout << "len = " << x.len() << std::endl;

    x.setX(50);

    if ( x == y ) {
    	std::cout << x << "is equal to" << y << std::endl;
    } else { 
    	std::cout << x << "is not equal to" << y << std::endl;
    }

    x+=10.0;
    y+=x;

    std::cout << "NEW x: " << x << std::endl;
    std::cout << "NEW y: " << y << std::endl;

   
    x-=20.0;
    y-=30.0;

    std::cout << "NEW NEW x: " << x << std::endl;
    std::cout << "NEW NEW y: " << y << std::endl;

    x + y;

    std::cout << "NEW NEW NEW x + y = " << x+y << std::endl;
    
    return 0;
}
