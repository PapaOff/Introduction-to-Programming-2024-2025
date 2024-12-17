#include <iostream>
using namespace std;

int main() {
  int n;
	cin >> n;
	
  for (size_t i = 0; i < n; i++) {
		cout << "* ";
	}

	cout << endl;
	
  for (size_t i = 1; i <= n - 2; i++) {

		for (size_t j = 1; j <= n; j++) {
			if (j == 1 || j == n) {
				cout << "* ";
			}
			else if (j <= i) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}

	for (size_t i = 0; i < n; i++) {
		cout << "* ";
	}

  std::cout << std::endl;
}
