#pragma once
#include <iostream>
#include <chrono>
#include "medicine.h"
namespace Pharmacy
{
	class sale;
	/*
	*@brief класс медицина.
	*/
	class medicine;

	/*
	*@brief класс продажа.
	*/
	class sale final: public std::enable_shared_from_this<sale>
	{
	private:
		
		/*
		*@brief указатель на медицину.
		*/
		medicine* Medicine;

		/*
		*@brief день продажи.
		*/
		std::chrono::year_month_day Date;

		/*
		*@brief конструктор класса продажа.
		*@param date - день продажи медицины.
		*/
		sale(std::chrono::year_month_day& date) :Date{ date } {}

	public:

		/*
		*@brief метод создания объекта класса продажа.
		*@param date - день продажи медицины.
		*/
		static std::shared_ptr<sale> CreateSale(std::chrono::year_month_day date);

		/*
		*@brief метод добавления связи продажи с медициной.
		*@param med - объект класса медикамент.
		*@return true если все прошло успешно.
		*/
		bool AddMedicament(std::shared_ptr<medicine>& med);

		/*
		*@brief метод получения даты продажи медицины класса продажа.
		*@return возвращает дату продажи.
		*/
		std::chrono::year_month_day GetDate() const;
		
		/*
		*@brief метод вывода болезни в строку.
		*@return строковое представление болезни.
		*/
		std::string ToString() const;
	};
}
