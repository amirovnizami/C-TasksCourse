#include<iostream>
#include <fstream>
#include <string>
#include<vector>
using namespace std;

class Date {
public:
	int day;
	int month;
	int year;
	Date(int day, int month, int year) :day(day), month(month), year(year) {};
	void showDate() {
		cout << day << ":" << month << ":" << year;
	}
};
class Customer {
public:
	int id;
	string name;
	string surname;
	Date dateOfBirth;
	Customer(int id, string name, string surname, Date dateOfBirth) :id(id), name(name), surname(surname), dateOfBirth(dateOfBirth) {};

	void showCustomer() {
		cout << "Id : " << id << endl;
		cout << "Name : " << name << endl;
		cout << "Surname : " << surname << endl;
	}
};

class Product {
public:
	int id;
	string name;
	double price;
	string color;
	Product(int id, string name, double price, string color) :id(id), name(name), price(price), color(color) {};
	void showProduct() {
		cout << "Id : " << id << endl;
		cout << "Name : " << name << endl;
		cout << "Price : " << price << endl;
		cout << "Color : " << color << endl;
	}
};
class ProductItem {
public:
	int id;
	Product* product;
	int quantity;
	ProductItem(int id, Product* product, int quantity) :id(id), product(product), quantity(quantity) {
	};
	double TotalPrice() { return product->price * quantity; }
	void showProductItem() {
		cout << "Id : " << id << endl;
		cout << "Name : " << product->name << endl;
		cout << "Price : " << product->price << endl;
		cout << "Color : " << product->color << endl;
		cout << "Quantity : " << quantity << endl;
	}
};
class Order {
public:
	vector<ProductItem> productItem;
	int customerId;
	Date datetime;
	Order(vector<ProductItem> productItem, int customerId, Date datetime)
		: productItem(productItem), customerId(customerId), datetime(datetime) {};

	void showOrder() {
		cout << "Customer Id :" << customerId << endl;
		cout << datetime.day << ":" << datetime.month << ":" << datetime.year;
	}
};

class Database {
	vector<ProductItem> productItem;
	vector<Order> orders;
	vector<Customer> customers;
public:
	Database(vector<ProductItem> productItem, vector<Order> orders, vector<Customer> customers) :productItem(productItem), orders(orders), customers(customers) {}
	void showDataBase() {
	}
};

void Display(vector<Product*> products, vector<ProductItem>items, vector<Order>orders) {
	int idd;
	float total = 0;
	string name;
	string surname;
	vector<Customer>customers;
	cout << "Id : ";
	cin >> idd;
	cout << "Name : ";
	cin >> name;
	cout << "Surname : ";
	cin >> surname;
	Date d1(12, 9, 2023);
	customers.push_back(Customer(idd, name, surname, d1));
	for (Product* p : products) {
		p->showProduct();
	}
	int id = 0;
	while (true) {
		id++;
		string mehsul;
		cout << "-------------------------------------------------" << endl;
		cout << "Hansi mehsuldan isteyirsiz ? : ";
		cin >> mehsul;
		bool found = false;
		try
		{
			for (Product* p : products) {

				if (p->name == mehsul) {
					int count;
					cout << "Mehsulun miqdarini girin : ";
					cin >> count;
					string answer;
					items.push_back(ProductItem(id, p, count));
					orders.push_back(Order(items, idd, d1));
					found = true;
					break;
				}
			}
			if (!found) {
				throw"Bele bir mehsul yoxdur...";
			}
		}
		catch (const char* msg) {
			cout << msg;
		}
		string answer;
		cout << "Davam etmek isteyirsiz? : (H/Y)--> ";
		cin >> answer;
		cout << endl;
		if (answer == "H") {
			continue;
		}
		for (ProductItem i : items)
		{
			total += i.TotalPrice();
		}
		break;
	}
	cout << "Total price: " << total << endl;
	cout << "--------------------------------------" << endl;
	cout << "Orders : " << endl;
	Database database(items, orders, customers);

	vector<Order> uniqueOrders;
	for (Order o : orders) {
		bool found = false;
		for (Order uniqueOrder : uniqueOrders) {
			if (o.customerId == uniqueOrder.customerId && o.datetime.day == uniqueOrder.datetime.day &&
				o.datetime.month == uniqueOrder.datetime.month && o.datetime.year == uniqueOrder.datetime.year) {
				found = true;
				break;
			}
		}
		if (!found) {
			uniqueOrders.push_back(o);
		}
	}
	for (Order uniqueOrder : uniqueOrders) {
		uniqueOrder.showOrder();
		cout << endl;
		for (ProductItem p : items) {
			p.showProductItem();
		}
		cout << endl;
	}
	const char* filenameProduct = R"(C:\Users\amiro\Desktop\ProductItem.txt)";
	ofstream fileWriteP(filenameProduct, ios::app);
	for (ProductItem p : items)
	{
		fileWriteP << "Id : " << p.id << endl;
		fileWriteP << "Name : " << p.product->name << endl;
		fileWriteP << "Price : " << p.product->price << endl;
		fileWriteP << "Color : " << p.product->color << endl;
		fileWriteP << "Quantity : " << p.quantity << endl;
	}
	fileWriteP.close();

	const char* filenameOrders = R"(C:\Users\amiro\Desktop\Orders.txt)";
	ofstream fileWriteO(filenameOrders);
	for (Order o : uniqueOrders)
	{
		fileWriteO << "Customer Id :" << o.customerId << endl;
		fileWriteO << "DateTime :" << o.datetime.day << ":" << o.datetime.month << ":" << o.datetime.year << endl;
		for (ProductItem p : items) {
			fileWriteO << "Id : " << p.product->id << endl;
			fileWriteO << "Name : " << p.product->name << endl;
			fileWriteO << "Name : " << p.product->price << endl;
			fileWriteO << "Color : " << p.product->color << endl;
			fileWriteO << "Quantity : " << p.quantity << endl;
		}

		fileWriteO.close();

	}
	const char* filenameCustomers = R"(C:\Users\amiro\Desktop\Customers.txt)";
	ofstream fileWriteC(filenameCustomers);
	for (Customer c : customers)
	{
		fileWriteC << "Id : " << c.id << endl;
		fileWriteC << "Name : " << c.name << endl;
		fileWriteC << "Surname : " << c.surname << endl;

	}
	fileWriteC.close();
}
void main() {
	vector<Product*>products;
	vector<ProductItem>items;
	vector<Order>orders;
	Date d2(8, 3, 2020);
	Date d3(23, 12, 2019);
	Date d4(29, 6, 2010);
	Product* p1 = new Product(1, "Cola", 0.80, "Black");
	Product* p2 = new Product(2, "Hat", 4, "White");
	Product* p3 = new Product(3, "Cappy", 1.20, "Orange");

	products.push_back(p1);
	products.push_back(p2);
	products.push_back(p3);
	Display(products, items, orders);
}