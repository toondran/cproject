//menu_main.cpp
#include "menu.h"

int main() {
	Menu myMenu = Menu("coffee");

	myMenu.addItem("Americano");
	myMenu.addItem("Cafelatte");
	myMenu.addItem("espresso");
	myMenu.addItem("choco");

	myMenu.selectItem();

	return 0;
}