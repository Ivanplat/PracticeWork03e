#include "../public/IPHandler.h"
#include "../public/NumberSystemHandler.h"
#include <iostream>

void IPHandler::CalculateAdress(std::string IP, std::string Mask)
{
	NumberSystemHandler NBH;
	std::vector<std::vector<int>> lip;
	std::vector<std::vector<int>> lmask;
	std::vector<std::vector<int>> Result = { {}, {}, {}, {} };

	IPToBinary(lip, IP);
	std::cout << std::endl;
	IPToBinary(lmask, Mask);


	//for (int i = 0; i < lip.size(); i++)
	//{
	//	for (int j = 0; j < lip[i].size(); j++)
	//	{
	//		if (j <= lmask[i].size())
	//		{
	//			auto t1 = lip[i][j];
	//			auto t2 = lmask[i][j];
	//			int a = !t1 || t2;
	//			Result[i].push_back(a);
	//		}
	//	}

	//}
	//for (const auto& i : Result)
	//{
	//	for (const auto& j : i)
	//	{
	//		std::cout << j;
	//	} 
	//	std::cout << std::endl;
	//}

}

void IPHandler::IPToBinary(std::vector<std::vector<int>>& Ips, std::string& IP)
{
	NumberSystemHandler NBH;

	std::vector<int> a;
	std::string lip;

	for (int i = 0; i < IP.size(); i++)
	{
		if (IP[i] != '.')
		{
			lip.push_back(IP[i]);
			if (i == IP.size() - 1)
			{
				int n = std::atoi(lip.c_str());
				NBH.ToBinary(n, a);
				Ips.push_back(a);
				a.clear();
				lip.clear();
			}
		}
		else
		{
			int n = std::atoi(lip.c_str());
			NBH.ToBinary(n, a);
			Ips.push_back(a);
			a.clear();
			lip.clear();
		}
	}

#define DEBUG 1
#ifdef DEBUG
	for (const auto& i : Ips)
	{
		for (const auto& j : i)
		{
			std::cout << j;
		}
		std::cout <<".";
	}
#endif // DEBUG


}