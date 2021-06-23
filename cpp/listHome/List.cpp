#include <iostream>
#include "List.h"

List::List(int capacity, double multiplier) : capacity(capacity), current(0), multiplier(multiplier) {
       array = (int*)malloc(capacity*sizeof(int));

       if ( array == NULL ) {
           throw OutOfMemoryException();
       }
}

List::~List() {
   free(array);
}

int List::size() const {
    return this->current;
}

int List::max_size() const {
    return this->capacity;
}

void List::erase(int index) {
    this->array[index] = 0;
}

void List::insert(int value, int index) {
    this->array[index] = value;
}

int List::find(int value) const {
    int last = this->size();

    for ( int i = 0; i < last; i++ ) {
        if ( this->array[i] == value ) {
            return i;
        }
    }
    return 0;
}

void List::push_back(int value) {
   int newCurrent = current + 1;

   if ( newCurrent > capacity ) {
       int newCapacity = capacity * multiplier;
       int* newArray = (int*)realloc(array, newCapacity*sizeof(int));

       if ( newArray == NULL ) {
           throw OutOfMemoryException();
       }

       capacity = newCapacity;
       array = newArray;
   }
   array[current] = value;
   current = newCurrent;
}

int List::pop_back() {
   if ( current == 0 ) {
       throw ZeroLenException();
   }
   current -= 1;
   return array[current];
}

void List::sort() {
    int size = this->current;
    for ( int i = 0; i < size; i++ ) {
        for ( int j = i + 1; j < size; j++ ) {
            int tempI = array[i];
            int tempJ = array[j];
            
            if ( array[i] > array[j] ) {
                array[i] = tempJ;
                array[j] = tempI;
            }
        }
    }
}

int List::operator[](int index) const {
    return this->array[index];
}

bool List::operator==(const List& other) const {
    if  ( this->size() != other.size() ) {
        return 0;
    } else {
        for ( int i = 0, last = this->size(); i < last; i++ ) {
            if ( this->array[i] != other.array[i] ) {
                return 0;
            }
        }
    }
    return 1;
}

bool List::operator!=(const List& other) const {
    if ( *this == other ) {
        return 0;
    }
    return 1;
}

std::ostream& operator<<(std::ostream& out, const List& list) {
   int last = list.size() - 1;

   for ( int i = 0; i < last; i++ ) {
       out << list[i] << ' ';
   }
   out << list[last];

   return out;
}