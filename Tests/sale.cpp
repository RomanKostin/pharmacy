#include "pch.h"
#include "CppUnitTest.h"
#include "../libraries/sales.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace Pharmacy;
namespace Sale
{
	TEST_CLASS(Sale)
	{
	public:

		TEST_METHOD(Ctor_ValidData_Success)
		{
			const std::chrono::year_month_day purchaseDay{ std::chrono::September / 23 / 2024 };

			auto sale = sale::CreateSale(purchaseDay);

			Assert::IsTrue(sale->GetDate()== purchaseDay);
		}

		TEST_METHOD(AddMedicament_ValidData_Success)
		{
			const std::chrono::year_month_day purchaseDay{ std::chrono::September / 23 / 2024 };
			const std::string medicineName{ "название медицины" };
			const std::string form{ "форма" };
			const std::string manufactorer{ "производитель" };
			const double price = 100;
			auto Medicament = medicine::CreateMedicine(medicineName, form, manufactorer, price);
			auto sale = sale::CreateSale(purchaseDay);

			auto result = sale->AddMedicament(Medicament);

			Assert::IsTrue(result);
		}
	};
}
