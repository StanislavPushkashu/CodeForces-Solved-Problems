#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, d;

int main(int argc, char* argv[]) {
	int t;

	std::cin >> t;

	while (t) {

		std::cin >> n >> d;

		std::vector <int> a(n);

		for (int i = 0; i < n; i++)
			std::cin >> a[i];

		sort(a.begin(), a.end());

		if (a[0] + a[1] <= d || a.back() <= d)
			std::cout << "YES" << endl;
		else
			std::cout << "NO" << endl;

		t--;
	}

	return false;
}