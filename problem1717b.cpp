#include <iostream>
#include <array>

int main()
{
	int m, a, r, i, n, sx, t, k, c, sy;

	std::cin >> t;

	for (i = 0; i<t; i++) {

		std::cin >> n >> k >> r >> c;

		for (m = 0; m<n; m++) {
			for (a = 0; a<n; a++) {

				if ((a + m) % k == (r + c + 1) % k) {
					std::cout << 'X';
				}
				else {
					std::cout << '.';
				}
			}
			std::cout << std::endl;
		}
	}
	return 0;
}