#include <iostream>
#include "../libraries/medicine.h"
#include "../libraries/disease.h"
#include "../libraries/sales.h"

using namespace Pharmacy;
int main()
{
	setlocale(LC_ALL, "Russian");
	auto Disease = std::make_shared<disease>("bolezn");
	auto test = std::make_shared<medicine>("name", "form", "manufactorer", 100);
	auto test2 = std::make_shared<medicine>("name2", "form", "manufactorer", 100);
	sales Sale;
	Sale.AddSales(test, 15, "today");
	Sale.AddSales(test2, 405, "today");
	Disease->AddMedicament(test);
	test->PrintInfo();
	Sale.PrintSales();
	return 0;
}