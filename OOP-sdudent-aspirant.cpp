// OOP-sdudent-aspirant.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
//Класс "студент"
class Student {
protected:
	int id;
	int age;
	string name;
public:
	Student() {
		id = 0;
		age = 0;
		name = "null";
	}
	//получение номера - идинтификатора
	int& Get_id() {
		return id;
	}
	//получение возраста студента (аспиранта)
	int& Get_age() {
		return age;
	}
	//получение имени студента (аспиранта)
	string& Get_name() {
		return name;
	}
};
class Aspir : public Student {
	// поле зарплата относится к аспиранту
	int zarpl{ 0 };
	//поле  стаж работы относится к аспиранту
	int stage;
public:
	// конструктор с параметрами
	Aspir(int Zar, int Stg) {
		zarpl = Zar;
		stage = Stg;
	}
	//получение поля зарплата относится к аспиранту
	int& Get_Zar() {
		return zarpl;
	}
	//получение стажа работы аспиранта
	int& Get_Stg() {
		return stage;
	}

	//показ на экран
	void Show() {
		cout << "--------------\n\n";
		cout << "id = " << id << "\n\n";
		cout << "age = " << age << "\n\n";
		cout << "name = " << name << "\n\n";
		cout << "zarpl = " << zarpl << "\n\n";
		cout << "stage = " << stage << "\n\n";
		cout << "--------------\n\n";
	}
};
void main() {
	//создание объекта
	Aspir A(10, 10);
	A.Show();
	//изменение параметров
	A.Get_age() = 25;
	A.Get_id() = 32856;
	A.Get_name() = "ILONA";
	A.Show();
	A.Get_Zar() = 120000;
	A.Get_Stg() = 3;

	A.Show();
}