#include "medicine.h"

void Pharmacy::medicine::PrintInfo()
{
	std::cout << "��������: " << this->Name << " �����: " << this->Form << " ������������: " << this->Manufactorer << " ����,�: "<<" ������ �������: "<<this->Disease;
}

std::string Pharmacy::medicine::GetName()
{
	return Name;
}
