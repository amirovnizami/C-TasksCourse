#include<iostream>
#include <vector>
using namespace std;

class Car {
public:
	int id;
	string marka;
	string model;
	string il;
	string reng;
	float qiymet;
	Car(int id, string marka, string model, string il, string reng, float qiymet) :id(id), marka(marka), model(model), il(il), reng(reng), qiymet(qiymet) {};

	virtual void  showCar() = 0;

};

class Manual :public Car {
public:
	Manual(int id, string marka, string model, string il, string reng, float qiymet)
		:Car(id, marka, model, il, reng, qiymet) {};

	void showCar() {
		cout << "Id: " << id << endl;
		cout << "Marka: " << marka << endl;
		cout << "Model: " << model << endl;
		cout << "Il: " << il << endl;
		cout << "Reng: " << reng << endl;
		cout << "Qiymet: " << qiymet << endl;
	}
};
class Automatic :public Car {
public:
	Automatic(int id, string marka, string model, string il, string reng, float qiymet)
		:Car(id, marka, model, il, reng, qiymet) {};

	void showCar() {
		cout << "Id: " << id << endl;
		cout << "Marka: " << marka << endl;
		cout << "Model: " << model << endl;
		cout << "Il: " << il << endl;
		cout << "Reng: " << reng << endl;
		cout << "Qiymet: " << qiymet << endl;
	}
};
class Galerry {
public:
	vector<Car*> cars;

	Galerry(vector<Car*> cars )
	{
		this->cars = cars;
	}

	void showAllCars() {
		for (size_t i = 0; i < cars.size(); i++)
		{
			cars[i]->showCar();
		}
	}
	void deleteCar(int id) {
		for (size_t i = 0; i < cars.size(); i++)
		{
			if (cars[i]->id == id) {
				delete  cars[i];
				cars[i] = nullptr;
				cars.erase(cars.begin() + i);
				break;
			}
		}
	}
	void addCar(Car *newcar) {
		cars.push_back(newcar);
	}

};

void main() {

	vector<Car*> cars;

	Automatic* a1 = new Automatic(1, "Bmw", "f30", "2020", "Qara", 45000);
	Automatic* a2 = new Automatic(2, "Merc", "cls60", "2022", "Ag", 4900);
	Automatic* a3 = new Automatic(3, "Bmw", "f10", "2010", "Sari", 40000);
	Automatic* a4 = new Automatic(4, "Bmw", "f20", "2030", "Sari", 62000);


	Manual* m1 = new Manual(5, "VAZ", "2107", "2004", "QIRMIZI", 10000);


	/*cars.push_back(m1);
	cars.push_back(m2);
	cars.push_back(m3);*/

	Galerry g1(cars);
	//g1.deleteCar(2);
	g1.addCar(a4);
	g1.addCar(a2);
	g1.addCar(a3);
	g1.addCar(a1);
	g1.addCar(m1);
	g1.showAllCars();

}