#include "Unit.h"

Unit::Unit(const std::string& name, int hp, int dmg) {
    this->damage = dmg;
    this->hitPoints = hp;
    this->hitPointsLimit = 100;
    this->name = name;
}
Unit::~Unit() {
	std::cout << "destructing unit" << std::endl;
}

int Unit::getDamage() const {
    return this->damage;
}
int Unit::getHitPoints() const {
	return this->hitPoints;
}
int Unit::getHitPointsLimit() const {
	return this->hitPointsLimit;
}
const std::string& Unit::getName() const {
	return this->name;
}

void Unit::ensureIsAlive() {
    if ( hitPoints == 0 ) {
        throw new UnitIsDead();
    }
}

void Unit::addHitPoints(int hp) {
    ensureIsAlive();

    if ( hitPoints + hp <= hitPointsLimit ) {
        hitPoints += hp;
    } else {
        hitPoints = hitPointsLimit;
    }
}

void Unit::takeDamage(int dmg) {
    ensureIsAlive();

    if ( dmg < hitPoints ) {
        this->hitPoints -= dmg;
    } else {
        this->hitPoints = 0;
        throw new UnitIsDead();
    }
}

void Unit::attack(Unit& enemy) {
    enemy.takeDamage(this->damage);
    enemy.counterAttack(*this);
}

void Unit::counterAttack(Unit& enemy) {
    enemy.takeDamage(this->damage);
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << unit.getDamage() << std::endl;
    out << unit.getHitPoints() << std::endl;
    out << unit.getHitPointsLimit() << std::endl;
    out << unit.getName() << std::endl;
    return out;
}
