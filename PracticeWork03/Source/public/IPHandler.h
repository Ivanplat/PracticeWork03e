#pragma once
#include <string>
#include <vector>

class IPHandler
{
public:
	explicit IPHandler() noexcept = default;
	virtual ~IPHandler() noexcept = default;
public:
	void CalculateAdress(std::string IP, std::string Mask);
private:
	void IPToBinary(std::vector<std::vector<int>>& strs, std::string& IP);
};