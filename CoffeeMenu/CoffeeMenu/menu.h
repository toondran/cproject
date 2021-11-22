//menu.h
#include <iostream>
#include <string>
using namespace std;

class Menu {
	string menuName;   //coffee
	string items[10];  //coffee 종류
	int lastIndex;     //items[10] 마지막 값의 인덱스 번호
	string thanks;     //고객에게 인사말

public:
	Menu(string menuName);  //생성자

	void createMenu(string menuName = "unnamed"); //메뉴 등록
	void addItem(string item);  //선택 항목 등록
	int selectItem();           //선택 항목 번호

};