#include "medicine.h"
using namespace Pharmacy;
void Pharmacy::medicine::PrintInfo()
{
	std::cout << "��������: " << this->Name << " �����: " << this->Form << " ������������: " << this->Manufactorer << " ����,�: "<<" ������ �������: ";
	for (const auto& temp : Disease)
	{
		std::cout << temp->GetName() << " ";
	}
}

std::string Pharmacy::medicine::GetName()
{
	return Name;
}

std::vector<std::shared_ptr<disease>>& Pharmacy::medicine::GetDisease() noexcept
{
	return Disease;
}
