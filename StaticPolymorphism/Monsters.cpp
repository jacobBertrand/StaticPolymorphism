#include "Monsters.h"

using namespace std;

Monster::Monster() {}
Monster::~Monster() { cout << "Monster deconstructor called.\n"; }

Monster::Monster(int h, float s) {
	if (h < 0) {
		cout << "Health cannot be lower than zero. Health will be set to zero.\n";
		h = 0;
	}
	if (s < 0) {
		cout << "Speed cannot be lower than zero. Speed will be set to zero.\n";
		s = 0;
	}
	health = h;
	speed = s;
}

int Monster::getHealth() { return health; }
void Monster::setHealth(int h) { 
	if (h < 0) {
		cout << "Health cannot be lower than zero. Health will be set to zero.\n";
		h = 0;
	}
	health = h;
}

float Monster::getSpeed() { return speed; }
void Monster::setSpeed(float s) { 
	if (s < 0) {
		cout << "Speed cannot be lower than zero. Speed will be set to zero.\n";
		s = 0;
	}
	speed = s; 
}

void Monster::printInfo() {
	cout << "This monster has " << health << " health.\n";
	cout << "This monster has a speed of " << speed << " meters/second.\n";
}

Slime::Slime(){}
Slime::~Slime() { cout << "Slime deconstructor called.\n"; }

Slime::Slime(int h, float s, string c, bool a) : Monster::Monster(h, s) {
	color = c;
	isAcidic = a;
}

string Slime::getColor() { return color; }
void Slime::setColor(string c) { color = c; }

bool Slime::getIsAcidic() { return isAcidic; }
void Slime::setIsAcidic(bool a) { isAcidic = a; }

void Slime::printInfo(bool printHealthAndSpeed) {
	if (printHealthAndSpeed) {
		Monster::printInfo();
	}
	cout << "This slime is a " << color << " color.\n";
	if (isAcidic) {
		cout << "This slime is acidic.\n";
	}
	else {
		cout << "This slime is not acidic.\n";
	}
}

Dragon::Dragon() {}
Dragon::~Dragon(){ cout << "Dragon deconstructor called.\n"; }

Dragon::Dragon(int h, float s, string n, float z) : Monster::Monster(h, s) {
	if (z < 1) {
		cout << "Size cannot be less than one. Size will be set to one.\n";
		z = 1;
	}
	name = n;
	size = z;
}

string Dragon::getName() { return name; }
void Dragon::setName(string n) { name = n; }

float Dragon::getSize() { return size; }
void Dragon::setSize(float z) {
	if (z < 1) {
		cout << "Size cannot be less than one. Size will be set to one.\n";
		z = 1;
	}
	size = z;
}

void Dragon::printInfo(bool printHealthAndSpeed) {
	if (printHealthAndSpeed) {
		Monster::printInfo();
	}
	cout << "This dragons name is " << name << ".\n";
	cout << "This dragon is " << size << " meters long.\n";
}