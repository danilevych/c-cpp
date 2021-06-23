#include "Date.h"

int main() {
    
     Date date(2, 7, 1990);

    std::cout << "Date " << date << std::endl;

    std::cout << "Date.getDay - " << date.getDay() << std::endl;
    std::cout << "Date.getMonth - " << date.getMonth() << std::endl;
    std::cout << "Date.getYear - " << date.getYear() << std::endl;

    std::cout << "________________________________________________" << std::endl;

	return 0;
}
