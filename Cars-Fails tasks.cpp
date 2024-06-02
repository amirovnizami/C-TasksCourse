#include<iostream>
using namespace std;

struct Fail
{
	int failNumber;
	const char* text;
	double price;

	Fail(int failNumber, const char* text, double price)
	{
		this->failNumber = failNumber;
		this->text = text;
		this->price = price;
	}
};

struct CarNumber
{
	int region;
	const char* Letters;
	short number;

	CarNumber(int region, const char* Letters, short number)
	{
		this->region = region;
		this->Letters = Letters;
		this->number = number;
	}
};
struct Car
{
	const char* vendor;
	const char* model;
	CarNumber* number;
	Fail** fails;
	Car(const char* vendor, const char* model, CarNumber* number, Fail** fails)
	{
		this->vendor = vendor;
		this->model = model;
		this->number = number;
		this->fails = fails;
	}
	void showCar() {
		cout << "Vendor: " << vendor << endl;
		cout << "Model: " << model << endl;
		/*cout << "Number: " << number;
		cout << "Fails: " << fails << endl;*/
	}
};

struct Dyp
{
	int failSize;
	int carSize;
	Car** cars;

	Dyp(int carSize, Car** cars, int failSize) {
		this->carSize = carSize;
		this->cars = cars;
		this->failSize = failSize;
	}
	void showAllCars() {
		for (size_t i = 0; i < carSize; i++)
		{
			cout << "Vendor : " << cars[i]->vendor << endl;
			cout << "Model : " << cars[i]->model << endl;
			cout << "Number : " << cars[i]->number->region << " " << cars[i]->number->Letters << " " << cars[i]->number->number << endl;
			cout << "Fails : " << cars[i]->fails[i]->failNumber << " " << cars[i]->fails[i]->price << " " << cars[i]->fails[i]->text << endl;
		}
	}
	void showAllFails() {// Score 20 den yuxari olanlar
		for (size_t i = 0; i < carSize; i++)
		{
			for (size_t j = 0; j < failSize; j++)
			{
				cout << "All fails: " << endl;
				cout << "Number : " << cars[i]->fails[j]->failNumber << endl;
				cout << "Text : " << cars[i]->fails[j]->text << endl;
				cout << "Price : " << cars[i]->fails[j]->price << endl;

			}
		}
	}

	void showAllFailuresCars() {
		int n = 0;
		for (int i = 0; i < carSize; i++)
		{
			n = 0;
			for (size_t j = 0; j < failSize; j++)
			{
				n++;
			}
			if (n > 3) {
				cout << "Model: " << cars[i]->model<<endl;
				cout<<"Vendor: "<<cars[i]->vendor<<endl;
			}
		}

		
	}
};

void main() {
	CarNumber* num1 = new CarNumber(55, "SS", 555);
	CarNumber* num2 = new CarNumber(40, "BO", 040);
	CarNumber* num3 = new CarNumber(77, "ZZ", 222);
	CarNumber* num4 = new CarNumber(10, "HH", 010);
	int size = 4;
	Fail* fail1 = new Fail(123, "AvtoXuliqan", 600);
	Fail* fail2 = new Fail(342, "Narkotik", 1000);
	Fail* fail3 = new Fail(123, "Icki", 200);
	Fail* fail4 = new Fail(123, "Icki", 200);
	Fail** fails = new Fail * [size] {fail1, fail2, fail3, fail4};
	Fail** fails2 = new Fail * [size] {fail1, fail2, fail3};

	Car* car1 = new Car("BMW", "F30", num1, fails);
	Car* car2 = new Car("Kia", "Rio", num1, fails);
	Car* car3 = new Car("Mercedes", "Cls60", num1, fails);
	Car* car4 = new Car("Vaz", "2107", num1, fails);
	int carSize = 4;
	int failSize = 4;
	Car** cars = new Car * [carSize] {car1, car2, car3, car4};
	Dyp d1(carSize, cars, failSize);
	//d1.showAllCars();
	//d1.showAllFails();
	d1.showAllFailuresCars();
}