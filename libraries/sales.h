#pragma once
#include <iostream>
#include <map>
#include "medicine.h"
namespace Pharmacy
{
	class sales final
	{
	private:
		
		std::map < std::string , std::vector<std::pair<std::shared_ptr<Pharmacy::medicine>, int >>> sales;
	
	public:

		void AddSales(std::shared_ptr<Pharmacy::medicine> medicine,int sales,const std::string& period);

		void PrintSales();
	};
}
