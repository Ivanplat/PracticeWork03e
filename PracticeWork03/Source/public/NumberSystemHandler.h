#pragma once
#include <string>
#include <vector>


class NumberSystemHandler
{
public:
	explicit NumberSystemHandler() noexcept = default;
	virtual ~NumberSystemHandler() noexcept = default;
public:
	void ToBinary(int& Number, std::vector<int>& OutputRef);
};