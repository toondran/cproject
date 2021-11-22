//menu.cpp
#include "menu.h"

Menu::Menu(string menuNam = "unnamed") {
	this->items[9] = { "", };   //�� ���ڿ��� �ʱ�ȭ
	this->thanks = "�ֹ��� �ּż� �����մϴ�.";
	this->createMenu(menuName);
}

void Menu::createMenu(string menuName) { //�޴� ���
	this->menuName = menuName;
}

void Menu::addItem(string item) {     //���� �׸� ���
	for (int i = 0; i < 10; i++) {    //���� �׸� �ߺ� ���� üũ
		if (this->items[i] != item) continue;
		else {
			cout << "�̹� ��ϵ� ���� �׸��Դϴ�." << endl;
			return;
		}
	}

	for (int i = 0; i < 10; ++i) { 
		if (this->items[i] == "") { //��� �ִ� ������ �׸� ���
			this->items[i] = item;
			this->lastIndex = i;    //items �迭�� ������ ���� ��ġ
			return;
		}
	}

	cout << "�� �̻� �����׸��� ��� �� �� �����ϴ�." << endl;
}

int Menu::selectItem() {  //�޴��� �����̹Ƿ� ���ڷ� ��ȯ
	string itemNoStr;
	int itemNo;

	cout << this->menuName << "�޴��� ���� �׸��Դϴ�." << endl;
	for (int i = 0; i <= this->lastIndex; i++) {
		cout << i << ". " << this->items[i] << endl;
	}

	cout << "���� �׸��� �Է��ϼ���. ";
	cin >> itemNoStr;
	cout << endl; 
	itemNo = stoi(itemNoStr);   //�Էµ� ���ڿ��� ������ ��ȯ

	if ((itemNo >= 0) && (itemNo <= (this->lastIndex))) {
		cout << "�����Ͻ� �׸��� " << itemNo << "�� " << items[itemNo] << "�Դϴ�." << endl;
		cout << this->thanks << endl;
		return itemNo;
	}
	else {
		cout << "�����Ͻ� �������� �޴��� ���� �׸� �����ϴ�." << endl;
		return -1;
	}
}