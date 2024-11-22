#include "medicine.h"

void Pharmacy::medicine::PrintInfo()
{
	std::cout << "название: " << this->Name << " форма: " << this->Form << " изготовитель: " << this->Manufactorer << " цена,р: "<<" Против болезни: "<<this->Disease;
}

std::string Pharmacy::medicine::GetName()
{
	return Name;
}
