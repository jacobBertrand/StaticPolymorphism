#ifndef MONSTERS_H
#define MONSTERS_H

#include <iostream>
#include <string>

using namespace std;

class Monster{
public:
	Monster();
	Monster(int h, float s);
	~Monster();

	int getHealth();
	void setHealth(int h);
	float getSpeed();
	void setSpeed(float s);
	void printInfo();
protected:
	int health;
	float speed;
private:
};

class Slime : public Monster {
public:
	Slime();
	Slime(int h, float s, string c, bool a);
	~Slime();

	string getColor();
	void setColor(string c);
	bool getIsAcidic();
	void setIsAcidic(bool a);
	void printInfo(bool printHealthAndSpeed);
protected:
private:
	string color;
	bool isAcidic;
};

class Dragon : public Monster {
public:
	Dragon();
	Dragon(int h, float s, string n, float z);
	~Dragon();

	string getName();
	void setName(string n);
	float getSize();
	void setSize(float z);
	void printInfo(bool printHealthAndSpeed);
protected:
private:
	string name;
	float size;
};

#endif