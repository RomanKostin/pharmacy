#pragma once
#include <iostream>
#include <vector>
#include "disease.h"
#include "sales.h"
namespace Pharmacy
{
	class medicine;

	class sale;

	class disease;
	
	std::wstring ToString(const medicine& med);

	class medicine final: public std::enable_shared_from_this<medicine>
	{
	private:

		std::string Name;

		std::string Form;
		
		std::string Manufactorer;
		
		std::vector<std::shared_ptr<Pharmacy::disease>>Disease;

		std::vector<std::shared_ptr<sale>> Sale;
		
		double Price;

		medicine(std::string name, std::string form, std::string manufactorer, double price) :Name{ name }, Form{ form }, Manufactorer{ manufactorer }, Price{ price } {}
	
	public:
		
		static std::shared_ptr<medicine> CreateMedicine(std::string name, std::string form, std::string manufactorer, double price);

		std::string ToString() const;
		
		std::string GetName() const;

		std::string GetForm() const;
		
		std::string GetManufactorer() const;

		std::vector<std::shared_ptr<sale>> GetSale();

		double GetPrice() const;
		
		std::vector<std::shared_ptr<disease>>& GetDisease() noexcept;

		const std::vector<std::shared_ptr<disease>>& GetDisease() const noexcept;

	};
}

