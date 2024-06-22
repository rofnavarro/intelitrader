#include <iostream>
#include <string>
#include <bitset>

void	invert_last_two_bits(std::bitset<8> &byte)
{
	byte.flip(0);
	byte.flip(1);
}

void	swap_four_bits(std::bitset<8> &byte)
{
	std::bitset<8>	tmp;

	for (int i = 0; i < 4; i++)
	{
		tmp[i] = byte[i + 4];
		tmp[i + 4] = byte[i];
	}
	byte = tmp;
}

int	main(void)
{
	std::string	msg = "10010110 11110111 01010110 00000001 00010111 00100110 01010111 00000001 00010111 01110110 01010111 00110110 11110111 11010111 01010111 00000011";
	std::string output;
	size_t		start = 0;

	while (start < msg.size())
	{
		size_t	end = msg.find(" ", start);
		if (end == std::string::npos)
			end = msg.size();
		std::string	ref = msg.substr(start, end - start);
		std::bitset<8>	byte(ref);

		invert_last_two_bits(byte);
		swap_four_bits(byte);

		output += static_cast<char>(byte.to_ulong());

		start = end + 1;
	}
	std::cout << "Decrypted Message: " << output << "\n";
	return (0);
}