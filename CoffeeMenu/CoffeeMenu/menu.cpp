//menu.cpp
#include "menu.h"

Menu::Menu(string menuNam = "unnamed") {
	this->items[9] = { "", };   //빈 문자열로 초기화
	this->thanks = "주문해 주셔서 감사합니다.";
	this->createMenu(menuName);
}

void Menu::createMenu(string menuName) { //메뉴 등록
	this->menuName = menuName;
}

void Menu::addItem(string item) {     //선택 항목 등록
	for (int i = 0; i < 10; i++) {    //선택 항목 중복 여부 체크
		if (this->items[i] != item) continue;
		else {
			cout << "이미 등록된 선택 항목입니다." << endl;
			return;
		}
	}

	for (int i = 0; i < 10; ++i) { 
		if (this->items[i] == "") { //비어 있는 공간에 항목 등록
			this->items[i] = item;
			this->lastIndex = i;    //items 배열의 마지막 값의 위치
			return;
		}
	}

	cout << "더 이상 선택항목을 등록 할 수 없습니다." << endl;
}

int Menu::selectItem() {  //메뉴는 문자이므로 숫자로 변환
	string itemNoStr;
	int itemNo;

	cout << this->menuName << "메뉴의 선택 항목입니다." << endl;
	for (int i = 0; i <= this->lastIndex; i++) {
		cout << i << ". " << this->items[i] << endl;
	}

	cout << "선택 항목을 입력하세요. ";
	cin >> itemNoStr;
	cout << endl; 
	itemNo = stoi(itemNoStr);   //입력된 문자열을 정수로 변환

	if ((itemNo >= 0) && (itemNo <= (this->lastIndex))) {
		cout << "선택하신 항목은 " << itemNo << "번 " << items[itemNo] << "입니다." << endl;
		cout << this->thanks << endl;
		return itemNo;
	}
	else {
		cout << "선택하신 아이템은 메뉴의 선택 항목에 없습니다." << endl;
		return -1;
	}
}