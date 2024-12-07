#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include "medicine.h"

namespace Pharmacy
{
	class disease;

	class medicine;

	std::wstring ToString(const disease& dis);

	class disease final: public  std::enable_shared_from_this<disease>
	{
	private:

		std::string Disease;

		std::vector<std::weak_ptr<medicine>> Medicine;

		disease(const std::string& diseases) :Disease{ diseases } {}

	public:
		
		

		static std::shared_ptr<disease> CreateDisease(const std::string& diseases);

		bool AddMedicament(std::shared_ptr<medicine>& med);

		std::string GetName() const;

		std::string ToString() const;
	};
}
