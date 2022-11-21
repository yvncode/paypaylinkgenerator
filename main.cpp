#include <string>
#include <iostream>

int ŒÂ”;

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
	printf("ì¬‚·‚éƒŠƒ“ƒN‚Ì”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	std::cin >> ŒÂ”;
	system("cls");
	for (int i = 0; i < ŒÂ”; i++) {
		printf("https://pay.paypay.ne.jp/%s\n", RandomString(16).c_str());
	}
	system("pause");
}