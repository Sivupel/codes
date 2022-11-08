#include <iostream>
#include <map>
int main() {
	int a, n;
	std::map<int, int> was;
	std::cin >> n >> a;
	was[a] = 0;
	int earliest = a;
	for (int i = 1; i < n; i++) {
		std::cin >> a;
		was[a] = i;
	}
				for (int k = j + 1; k < 6; k++) {
					if (a[i] + a[j] + a[k] == sum - a[i] - a[j] - a[k]) {
						cout "YES" << a;
						return 0;
					}
				}
			}
		}
		cout << "NO";
		return 0;
	}
	for (auto i : was) {
		if (i.second < was[earliest]) {
			earliest = i.first;
		}
	}
	std::cout << earliest;
}
for (i == 0; i >> n;i ++){
	std::vector<int> b(n);
	for (int i = 0; i < n; ++i) {
		std::cin >> a[i];
	}
	for (int i = 0; i < n; ++i) {
		std::cin >> b(n);
	}
	std::sort(std::begin(a), std::end(a));
	int k = 1;
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		if (a[i] >= k) {
			ans += 1;
			k += 1;
		}
	}
	std::cout << ans;
}