#include<iostream>
using namespace std;

enum Color
{
	qirmizi = 0,
	yasil = 1,
	goy = 2
};
struct Engine {
	int number;
	const char* madeIn;
	float housePower;
	float volume;

	Engine(int number, const char* madeIn, float housePower, float volume)
	{
		this->number = number;
		this->madeIn = madeIn;
		this->housePower = housePower;
		this->volume = volume;
	}
};
struct Car
{
	const char* vendor;
	const char* model;
	Engine* engine;
	Color color;
	int year;
	Car(const char* vendor, const char* model, Engine* engine, Color color, int year)
	{
		this->vendor = vendor;
		this->model = model;
		this->engine = engine;
		this->color = color;
		this->year = year;
	}
	void showCar() {
		cout << "Car vendor : " << vendor << endl;
		cout << "Car model : " << model << endl;
		cout << "Engine : " << endl;
		cout << "Engine number : " << engine->number << endl;
		cout << "Engine madeIn : " << engine->madeIn << endl;
		cout << "Engine housePower : " << engine->housePower << endl;
		cout << "Engine volume : " << engine->volume << endl;
		cout << "Color : " << color << endl;
		cout << "Year : " << int(year) << endl;

	}

};
struct CarGallery
{
	Color color;
	int carSize;
	Car** cars;
	CarGallery(int carSize, Car** cars)
	{
		this->carSize = carSize;
		this->cars = cars;
		this->color = color;
	}
	void showCarGallery() {
		cout << "Cars : " << endl;
		for (size_t i = 0; i < carSize; i++)
		{
			cars[i]->showCar();
		}
	}
	void showCarForColor(Color color) {
		for (size_t i = 0; i < carSize; i++)
		{
			if (cars[i]->color == color)
			{
				cars[i]->showCar();
			}
		}
	}
};



void main() {
	Engine* engine1 = new Engine(1, "Turkish", 500, 20);
	Engine* engine2 = new Engine(2, "Azerbaijan", 600, 30);
	Engine* engine3 = new Engine(3, "Italy", 700, 15);

	Car* car1 = new Car("bmw", "f10", engine1, Color::goy, 2004);
	Car* car2 = new Car("bmw", "f30", engine2, Color::qirmizi, 2000);
	Car* car3 = new Car("mer", "cls", engine3, Color::yasil, 2020);
	int size1 = 3;
	Car** cars1 = new Car * [size1] {car1, car2, car3};
	//Car** cars2 = new Car * [size1] {car4,  car5, car3};
	int size2 = 1;
	CarGallery* gallery1 = new CarGallery( 1, cars1);

	//gallery1->showCarGallery();
	gallery1->showCarForColor(Color::goy);
}