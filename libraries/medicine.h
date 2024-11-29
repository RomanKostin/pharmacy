#pragma once
#include <iostream>
#include <vector>
#include "disease.h"
namespace Pharmacy
{
	class medicine;

	class disease;
	

	class medicine final: public std::enable_shared_from_this<medicine>
	{
	private:

		std::string Name;

		std::string Form;
		
		std::string Manufactorer;
		
		std::vector<std::shared_ptr<Pharmacy::disease>>Disease;
		
		double Price;
	
	public:
		
		medicine(std::string name, std::string form, std::string manufactorer,double price) :Name{ name }, Form{ form }, Manufactorer{ manufactorer }, Price{ price } {}
		
		static std::shared_ptr<medicine> CreateMedicine(std::string name, std::string form, std::string manufactorer, double price);

		void PrintInfo();
		
		std::string GetName();
		
		std::vector<std::shared_ptr<disease>>& GetDisease() noexcept;
	};
}

