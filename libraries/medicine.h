#pragma once
#include <iostream>
#include <vector>
namespace Pharmacy
{
	class medicine
	{
	private:
		std::string Name,
			Form,
			Manufactorer,
			Disease;
		double Price;
	public:
		medicine(std::string name, std::string form, std::string manufactorer, std::string disease, double price) :Name{ name }, Form{ form }, Manufactorer{ manufactorer }, Disease{ disease }, Price{ price } {}
		void PrintInfo();
		std::string GetName();
	};
}

