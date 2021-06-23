#include "Date.h"

Date::Date(int day, int month, int year) {
	this->day = day;
	this->month = month;
	this->year = year;

	validate(2, 7, 1990);
}

Date::~Date() {
	std::cout << "destructing" << std::endl;
}

void Date::validate(int day, int month, int year) {
	if ( this->day >= 32 || this->day < 1 ) {
		throw InvalidDate("Invalid day");
	}

	if ( this->month > 12 || this->month < 1 ) {
		throw InvalidDate("Invalid month");
	}
	
	if ( this->year < 1 ) {
		throw InvalidDate("Invalid year");
	}

	if ( day > 30 && ( ( month < 8 && month % 2 == 0) || ( month > 7 && month %2 != 0 ) ) ) {
        if ( month == 2 ) {
            if ( day > 29 && ( ( year % 400 == 0 ) || ( year % 100 != 0 && year % 4 == 0 ) ) ) {
                throw new InvalidDate("Day must be between 1 and 29");
            } else if ( day > 28 ) {
                throw new InvalidDate("Day must be between 1 and 28");
            }
        }
        throw new InvalidDate("Day mustbe between 1 and 30");
    }
}

int Date::getDay() const {
    return this->day;
}

int Date::getMonth() const {
    return this->month;
}

int Date::getYear() const {
    return this->year;
}

std::ostream& operator<<(std::ostream& out, const Date& date) {
    out << date.getDay() << std::endl;
    out << date.getMonth() << std::endl;
    out << date.getYear() << std::endl;
    return out;
}
