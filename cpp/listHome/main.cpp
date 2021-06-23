#include <iostream>
#include "List.h"

int main() {
    List list3;
    List list4;
    List list5;
    List list6;

    list4.push_back(9);
    list4.push_back(9);
    list4.push_back(4);
    list4.push_back(4);
    list4.push_back(1);

    list3.push_back(2);
    list3.push_back(2);
    list3.push_back(3);
    list3.push_back(3);
    list3.push_back(5);

    list5.push_back(1);
    list5.push_back(2);

    list6.push_back(1);
    list6.push_back(0);

    std::cout << list3 << std::endl;
    std::cout << list4 << std::endl;

    std::cout << list3.size() << std::endl;
    std::cout << list4.size() << std::endl;

    std::cout << list3.max_size() << std::endl;
    std::cout << list4.max_size() << std::endl;

    list3.insert(0, 1);
    list4.insert(0, 1);

    std::cout << list3 << std::endl;
    std::cout << list4 << std::endl;

    list3.sort();
    list4.sort();

    std::cout << list3 << std::endl;
    std::cout << list4 << std::endl;

    if ( list5 == list6 ) {
        std::cout << "list5 is equal list6" << std::endl;
    }
    if ( list5 != list6 ) {
        std::cout << "list5 is not equal list6" << std::endl;
    }

    return 0;
}