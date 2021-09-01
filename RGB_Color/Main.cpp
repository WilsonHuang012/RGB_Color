#include <iostream>
#include <bitset>

int main()
{
	unsigned int color = 0u;
	unsigned char r = 255;
	unsigned char g = 64;
	unsigned char b = 67;
	unsigned char a = 20;

	color = (r << 24) | (g << 16) | (b << 8) | a;
	std::cout << "color: " << std::bitset<32>(color) << std::endl;
	std::cout << "r:     " << std::bitset<32>(color >> 24) << std::endl;
	std::cout << "g:     " << (std::bitset<32>(color & 0x00FF0000) >> 16) << std::endl;
	std::cout << "b:     " << (std::bitset<32>(color & 0x0000FF00) >> 8) << std::endl;
	std::cout << "a:     " << std::bitset<32>(color & 0x000000FF) << std::endl;
	return 0;
}