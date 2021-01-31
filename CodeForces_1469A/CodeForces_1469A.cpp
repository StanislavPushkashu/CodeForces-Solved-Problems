#include <iostream>
#include <algorithm>

using namespace std;

std::string s;

int main(int argc, char* argv[]) {

	int t;

	std::cin >> t;

	while (t) {
		std::cin >> s;
		if (!(s.length() % 2) && s[0] != ')' && s[s.length() - 1] != '(')
			std::cout << "YES" << endl;
		else
			std::cout << "NO" << endl;
		t--;
	}

	return false;
}