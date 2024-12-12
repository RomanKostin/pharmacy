#include "pch.h"
#include "CppUnitTest.h"
#include "../libraries/medicine.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace Pharmacy;
namespace Medicine
{
	TEST_CLASS(Medicine)
	{
	public:

		TEST_METHOD(Ctor_ValidData_Success)
		{
			const std::string medicineName{ "название медицины" };
			const std::string form{ "форма" };
			const std::string manufactorer{ "производитель" };
			const double price = 100;

			auto Medicament = medicine::CreateMedicine(medicineName, form, manufactorer, price);

			Assert::AreEqual(Medicament->GetName(),medicineName);
			Assert::AreEqual(Medicament->GetForm(), form);
			Assert::AreEqual(Medicament->GetManufactorer(),manufactorer);
			Assert::AreEqual(Medicament->GetPrice(),price);
		}
	};
}
