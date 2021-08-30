#include <iostream>
#include <bitset>

int main()
{
	unsigned int color = 0u;
	unsigned char r = 255;
	unsigned char g = 64;
	unsigned char b = 1;

	color = (r << 16) | (g << 8) | b;
	std::cout << "color: " << std::bitset<24>(color) << std::endl;
	std::cout << "r:     " << std::bitset<24>(color >> 16) << std::endl;
	std::cout << "g:     " << (std::bitset<24>((color) & 0x00FF00) >> 8) << std::endl;
	std::cout << "b:     " << (std::bitset<24>((color) & 0x0000FF)) << std::endl;
	return 0;
}