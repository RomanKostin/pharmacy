#include "sales.h"

void pharmacy::sales::AddSales(std::unique_ptr<Pharmacy::medicine> medicine, int sales, std::string& period)
{
	this->sales[period] = { std::move(medicine),sales};
}

void pharmacy::sales::PrintSales()
{
	if (this->sales.empty())
	{
		std::cout << "Продажи отсутсвуют";
	}
	else
	{
		for (const auto& temp : this->sales)
		{
			std::cout << "Период " << temp.first << " " << temp.second.first->GetName() << " продажи: " << temp.second.second << std::endl;
		}
	}
}
