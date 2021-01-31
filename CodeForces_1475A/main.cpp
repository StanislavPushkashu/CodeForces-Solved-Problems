#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
    long long int n, t;

    std::cin >> t;

    while (t) {
        std::cin >> n;

        if(n & (n - 1))
            std::cout << "YES" << endl;
        else
            std::cout << "NO" << endl;

        t--;
    }

    return false;
}
