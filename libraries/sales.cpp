#include "sales.h"

void pharmacy::sales::AddSales(std::unique_ptr<Pharmacy::medicine> medicine, int sales, std::string& period)
{
	this->sales[period] = { std::move(medicine),sales};
}

void pharmacy::sales::PrintSales()
{
	if (this->sales.empty())
	{
		std::cout << "������� ����������";
	}
	else
	{
		for (const auto& temp : this->sales)
		{
			std::cout << "������ " << temp.first << " " << temp.second.first->GetName() << " �������: " << temp.second.second << std::endl;
		}
	}
}
