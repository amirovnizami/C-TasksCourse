#include<iostream>
#include<vector>
using namespace std;

class Car{
public:
	string model;
	string engine;
	string color;
	string number;
	Car(string model, string engine,string color, string number) :model(model),engine(engine),color(color), number(number) {};
	
	void virtual showAllCars() {
		cout << "Model: " << model << endl;
		cout << "Engine: " << engine << endl;
		cout << "Color: " << color << endl;
		cout << "Number: " << number << endl;
	}
};
class Manual:public Car{
	size_t vites;
public:
	Manual(string model, string engine, string color, string number,size_t vites) 
		:Car(model,engine, color, number)
	{
		this->vites = vites;
	}

	void showAllCars() {
		cout << "Model: " << model << endl;
		cout << "Engine: " << engine << endl;
		cout << "Color: " << color << endl;
		cout << "Number: " << number << endl;
		cout << "Vites : " << vites << endl;
	}
	void changeVites(int newvites) {
		if (vites > 0) {

			this->vites = newvites;
		}
	}
};
class Automatic:public Car{
	bool isHybrid;
public:
	Automatic(string model,string engine, string color, string number,bool isHybrid)
		:Car(model,engine, color, number)
	{
		this->isHybrid = isHybrid;
	}
	void showAllCars() {
		cout << "Model: " << model << endl;
		cout << "Engine: " << engine << endl;
		cout << "Color: " << color << endl;
		cout << "Number: " << number << endl;
		cout << "Is Hybrid:" << boolalpha<<isHybrid << endl;
	}

};

class Vaz:public Manual{
public:

	Vaz(string model, string engine, string color, string number,size_t vites)
		:Manual(model,engine,color,number,vites)
	{

	}
};

class Bmw :public Automatic {
public:
	Bmw(string model, string engine, string color, string number, bool isHybrid)
		:Automatic(model,engine,color,number,isHybrid)
	{
		
	}

};

void main() {
	Vaz v1("Vaz2107", "200", "Black", "55-BB-324",5);
	Bmw b1("f10", "1200", "White", "99-KG-423", 1);
	//v1.showAllCars();
	//b1.showAllCars();

	vector<Car> cars;
	cars.push_back(v1);
	cars.push_back(b1);
	
}