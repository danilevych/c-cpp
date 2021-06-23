#include "Point.h"

int main () {
    Point beer(2, 4);
    Point fish(1, 8);
    Point table;

    std::cout << "table: " << table << std::endl;

    std::cout << "get.beer.x: " << beer.getX() << std::endl;
    std::cout << "get.beer.y: " << beer.getY() << std::endl;
    std::cout << "get.fish.x: " << fish.getX() << std::endl;
    std::cout << "get.fish.y: " << fish.getY() << std::endl;

    std::cout << "_______________" << std::endl;

    beer.setX(8);
    beer.setY(10);
    fish.setX(12);
    fish.setY(2);

    std::cout << "NEW beer: " << beer << std::endl;
    std::cout << "NEW fish: " << fish << std::endl;

    std::cout << "beer-fish.distance: " << beer.distance(fish) << std::endl;
    std::cout << "fish-beer.distance: " << fish.distance(beer) << std::endl;

    if ( fish == beer ) {
    	std::cout << beer << "is equal to" << fish << std::endl;
    } else { 
    	std::cout << beer << "is not equal to" << fish << std::endl;
    }
    return 0;

}