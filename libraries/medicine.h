#pragma once
#include <iostream>
#include <vector>
#include "disease.h"
#include "sales.h"
namespace Pharmacy
{
	class medicine;
	/*
	*@brief класс продажа.
	*/
	class sale;

	/*
	*@brief класс болезнь.
	*/
	class disease;
	
	/*
	*@brief функция вывода болезни в строку "широких" символов.
	*@param med - объект класса медицина.
	*@return строковое представление медицина.
	*/
	std::wstring ToString(const medicine& med);

	/*
	*@brief медицина
	*/
	class medicine final: public std::enable_shared_from_this<medicine>
	{
	private:
		
		/*
		*@brief название медицины.
		*/
		std::string Name;

		/*
		*@brief форма медицины.
		*/
		std::string Form;
		
		/*
		*@brief производитель медицины.
		*/
		std::string Manufactorer;
		
		/*
		*@brief вектор указателей на болезни.
		*/
		std::vector<std::shared_ptr<Pharmacy::disease>>Disease;

		/*
		*@brief указатель на продажу.
		*/
		std::shared_ptr<sale> Sale;
		
		/*
		*@brief цена медицины.
		*/
		double Price;

		/*
		*@brief конструктор класса медицина.
		*@param name - название медицины.
		*@param form - форма медицины.
		*@param manufactorer - производитель медицины.
		*@param price - цена медицины.
		*/
		medicine(std::string name, std::string form, std::string manufactorer, double price) :Name{ name }, Form{ form }, Manufactorer{ manufactorer }, Price{ price } {}
	
	public:
		
		/*
		*@brief метод создания объекта медицина.
		*@param name - название медицины.
		*@param form - форма медицины.
		*@param manufactorer - производитель медицины.
		*@param price - цена медицины.
		*/
		static std::shared_ptr<medicine> CreateMedicine(std::string name, std::string form, std::string manufactorer, double price);
		
		/*
		*@brief метод вывода медицины в строку.
		*@return строковое представление медицины.
		*/
		std::string ToString() const;
		
		/*
		*@brief метод получения названия медицины.
		*@return возвращает название медицины.
		*/
		std::string GetName() const;

		/*
		*@brief метод получения формы медицины.
		*@return возвращает форму медицины.
		*/
		std::string GetForm() const;
		
		/*
		*@brief метод получения производителя медицины.
		*@return возвращает название медицины.
		*/
		std::string GetManufactorer() const;
		
		/*
		*@brief метод получения продажи медицины.
		*@return возвращает продажу медицины.
		*/
		std::shared_ptr<sale> GetSale();

		/*
		*@brief метод получения цены медицины.
		*@return возвращает цену медицины.
		*/
		double GetPrice() const;
		
		/*
		*@brief метод получения вектора болезней медицины.
		*@return возвращает вектор болезней медицины.
		*/
		std::vector<std::shared_ptr<disease>>& GetDisease() noexcept;
		
		/*
		*@brief метод получения вектора болезней медицины.
		*@return возвращает вектор болезней медицины.
		*/
		const std::vector<std::shared_ptr<disease>>& GetDisease() const noexcept;

	};
}

