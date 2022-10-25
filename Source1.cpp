#include <iostream>



int main()
{
	int x(0);
	std::cin >> x;
	int key = 0;
	while (n > 0) {
		key += n & 1;
		n >>= 1;
	}
	std::cout << key << std::endl;
}