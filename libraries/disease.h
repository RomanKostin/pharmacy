#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include "medicine.h"

namespace Pharmacy
{
	class disease;

	/*
	*@brief класс медицина.
	*/
	class medicine;
	
	/*
	*@brief функция вывода болезни в строку "широких" символов.
	*@param dis - объект класса болезнь.
	*@return строковое представление болезни.
	*/
	std::wstring ToString(const disease& dis);
	
	/*
	*@brief класс болезнь.
	*/
	class disease final: public  std::enable_shared_from_this<disease>
	{
	private:
		/*
		*@brief название болезни.
		*/
		std::string Disease;

		/*
		*@brief вектор слабых указателей на медицину.
		*/
		std::vector<std::weak_ptr<medicine>> Medicine;

		/*
		*@brief конструктор класса болезнь.
		*@param diseases - название болезни.
		*/
		disease(const std::string& diseases) :Disease{ diseases } {}

	public:
		
		
		/*
		*@brief метод создания объекта класса болезнь.
		*@param diseases - название болезни.
		*/
		static std::shared_ptr<disease> CreateDisease(const std::string& diseases);

		/*
		*@brief метод добавления связи болезни с медициной.
		*@param med - объект класса медицина.
		*@return true если всё прошло корректно.
		*/
		bool AddMedicament(std::shared_ptr<medicine>& med);

		/*
		*@brief метод получения названия болезни.
		*@return возвращает имя объекта.
		*/
		std::string GetName() const;

		/*
		*@brief метод вывода болезни в строку.
		*@return строковое представление болезни.
		*/
		std::string ToString() const;
	};
}
