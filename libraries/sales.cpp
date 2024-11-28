#include "sales.h"

void Pharmacy::sales::AddSales(std::shared_ptr<Pharmacy::medicine> medicine, int sales,const std::string& period)
{
	this->sales[period].push_back(std::make_pair(medicine,sales));
}

void Pharmacy::sales::PrintSales()
{
	if (this->sales.empty())
	{
		std::cout << "������� ����������";
	}
	else
	{
		for (const auto& entry : this->sales)
		{
			std::cout << "������ " << entry.first << std::endl;
			for (const auto& sale : entry.second)
			{
				std::cout << "  ���������: " << sale.first->GetName()<< ", �������: " << sale.second << std::endl;
			}
		}
	}
}
