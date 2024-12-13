#include "pch.h"
#include "CppUnitTest.h"
#include "..\libraries\disease.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace Pharmacy;
namespace Tests
{
	TEST_CLASS(Disease)
	{
	public:
		
		TEST_METHOD(Ctor_ValidData_Success)
		{
			const std::string diseaseName{ "название болезни" };

			auto Disease = disease::CreateDisease(diseaseName);

			Assert::AreEqual(Disease->GetName(), diseaseName);
		}
		
		TEST_METHOD(AddMedicament_ValidData_Success)
		{
			const std::string diseaseName{ "название болезни" };
			const std::string medicineName{ "название медицины" };
			const std::string form{ "форма" };
			const std::string manufactorer{ "производитель" };
			const double price = 100;
			auto Disease = disease::CreateDisease(diseaseName);
			auto Medicament = medicine::CreateMedicine(medicineName,form,manufactorer,price);

			auto result = Disease.get()->AddMedicament(Medicament);

			Assert::IsTrue(result);
		}
	};
}
