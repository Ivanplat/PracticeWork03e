#include "public/IPHandler.h"
#include <iostream>
#include <sstream>


int main()
{


	/*std::vector<int> vi;

	int i;
	std::cin >> i;

	while (i > 0)
	{
		vi.push_back(i % 2);
		i /= 2;
	}
	std::reverse(vi.begin(), vi.end());

	std::ostringstream oss;
	std::string str;


	std::copy(vi.begin(), vi.end()-1, std::ostream_iterator<int>(oss));
	oss << vi.back();
	std::cout << oss.str() << std::endl;*/


	/*for (const auto& a : vi)
	{
		std::cout << a;
	}*/



	IPHandler Iph;


	Iph.CalculateAdress("145.92.114.42", "255.255.225.15");


	return 0;
}