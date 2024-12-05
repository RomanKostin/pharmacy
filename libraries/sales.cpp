#include "sales.h"
#include <sstream>
using namespace Pharmacy;
std::shared_ptr<sale> Pharmacy::sale::CreateSale(std::chrono::year_month_day& date)
{
	return std::make_shared<sale>(sale{date});
}

bool Pharmacy::sale::AddMedicament(std::shared_ptr<medicine>& med)
{
	Medicine =med;
	med.get()->GetSale().push_back( shared_from_this());
	return true;
}

std::string Pharmacy::sale::ToString() const
{
	std::stringstream buffer{};
	buffer << Date;
	return buffer.str();
}

