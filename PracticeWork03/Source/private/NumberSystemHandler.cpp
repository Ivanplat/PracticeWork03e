#include "../public/NumberSystemHandler.h"



void NumberSystemHandler::ToBinary(int& Number, std::vector<int>& OutputRef)
{
	while (Number > 0)
	{
		OutputRef.push_back(Number % 2);
		Number /= 2;
	}
	std::reverse(OutputRef.begin(), OutputRef.end());
}
