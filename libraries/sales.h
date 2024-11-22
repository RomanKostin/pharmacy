#pragma once
#include <iostream>
#include <map>
#include "medicine.h"
namespace pharmacy
{
	class sales
	{
	private:
		std::map < std::string , std::pair<std::unique_ptr<Pharmacy::medicine>, int >> sales;
	public:
		void AddSales(std::unique_ptr<Pharmacy::medicine> medicine,int sales,std::string& period);
		void PrintSales();
	};
}
