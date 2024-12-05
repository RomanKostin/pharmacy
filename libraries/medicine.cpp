#include "medicine.h"
#include <sstream>
using namespace Pharmacy;

std::shared_ptr<medicine> Pharmacy::medicine::CreateMedicine(std::string name, std::string form, std::string manufactorer, double price)
{
	return std::make_shared<medicine>(medicine{ name,form,manufactorer,price });
}

std::string Pharmacy::medicine::ToString() const
{
	std::stringstream buffer{};
	buffer << GetName() << " " << GetForm() << " " << GetManufactorer()<<" "<<GetPrice();
	for (auto& temp : GetDisease())
	{
		buffer <<" " << temp->GetName();
	}
	return buffer.str();
}



std::string Pharmacy::medicine::GetName() const
{
	return Name;
}

std::string Pharmacy::medicine::GetForm() const
{
	return Form;
}

std::string Pharmacy::medicine::GetManufactorer() const
{
	return Manufactorer;
}

std::vector<std::shared_ptr<sale>> Pharmacy::medicine::GetSale()
{
	return Sale;
}



double Pharmacy::medicine::GetPrice() const
{
	return Price;
}

std::vector<std::shared_ptr<disease>>& Pharmacy::medicine::GetDisease() noexcept
{
	return Disease;
}

const std::vector<std::shared_ptr<disease>>& Pharmacy::medicine::GetDisease() const noexcept
{
	return Disease;
}


std::wstring Pharmacy::ToString(const medicine& med)
{
	auto temp = med.ToString();
	return std::wstring{temp.cbegin(),temp.cend()};
}
