#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		string w;
		cin >> w;

		auto len = w.length();
		if (10 < len) {
			cout << w[0] << (len - 2) << w[len - 1];
		}
		else {
			cout << w;
		}

		cout << '\n';
	}

	return 0;
}