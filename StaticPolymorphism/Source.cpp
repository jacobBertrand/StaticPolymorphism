#include "Monsters.h"
#include <iostream>
#include <string>
   
using namespace std;

Monster myMonster;
Slime mySlime;
Dragon myDragon;

void main() {
	myMonster = Monster(-5, 3.2);
	mySlime = Slime(15, 2, "Blue", true);
	myDragon = Dragon(100, 27.5, "Igneel", 20.0);

	myMonster.printInfo();

	mySlime.printInfo(true);
	mySlime.printInfo(false);

	myDragon.printInfo(true);
	myDragon.printInfo(false);

	system("pause");

}