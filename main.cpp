#include <string>
#include <iostream>

int 個数;

std::string RandomString(int len) {

	std::string str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	std::string newstr;
	int pos;
	while (newstr.size() != len) {
		pos = ((rand() % (str.size() - 1)));
		newstr += str.substr(pos, 1);
	}
	return newstr;
}

int main()
{
	printf("作成するリンクの数を入力してください:");
	std::cin >> 個数;
	system("cls");
	for (int i = 0; i < 個数; i++) {
		printf("https://pay.paypay.ne.jp/%s\n", RandomString(16).c_str());
	}
	system("pause");
}