#pragma once
#include <iostream>
#include <chrono>
#include "medicine.h"
namespace Pharmacy
{
	class sale;

	class medicine;

	class sale final: public std::enable_shared_from_this<sale>
	{
	private:
		
		std::unique_ptr<medicine> Medicine;

		std::chrono::year_month_day Date;

		sale(std::chrono::year_month_day& date) :Date{ date } {}

	public:

		static std::shared_ptr<sale> CreateSale(std::chrono::year_month_day& date);

		bool AddMedicament(std::unique_ptr<medicine>& med);

		std::string ToString() const;
	};
}
