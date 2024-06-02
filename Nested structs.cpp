#include<iostream>
using namespace std;

struct Date {
	short day;
	short month;
	short year;
	Date() {};
	Date(short day,short month,short year)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}
};

struct Student
{
	int id;
	const char* name;
	const char* surname;
	const char* city;
	Date birthDate;
	float score;

	Student(int id, const char* name, const char* surname, const char* city, Date birthDate, float score)
	{
		this->id = id;
		this->name = name;
		this->surname = surname;
		this->city = city;
		this->birthDate = birthDate;
		this->score = score;
	}
	void showStudent() {
		cout << "Id : " << this->id << endl;
		cout << "Name : " << this->name << endl;
		cout << "Surname : " << this->surname << endl;
		cout << "City : " << this->city << endl;
		cout << "Birthday : " << birthDate.day << "/" << birthDate.month << "/" << birthDate.year << endl;
		cout << "Score : " << this->score << endl;
	}
	Student* createStudent() {
		int id = 0;
		cout << "Enter id: ";
		cin >> id;
		char name[30];
		cout << "Enter name: ";
		cin.getline(name,30);

		const char* constName = name;
		char surname[30];
		cout << "Enter surname: ";
		cin.getline(surname, 30);
		char city[30];
		cout << "Enter city: ";
		cin.getline(city, 30);


		short day, month, year;
		cout << "BirthDate:  (DD/MM/YYYY): ";
		cin >> day >> month >> year;
		Date birthDate(day, month, year);

		float score;
		cout << "Score: ";
		cin >> score;

		Student* student = new Student(id, constName, surname, city, birthDate, score);
		return student;
	}
};

struct Group
{
	const char* name;
	Date startDate;
	Student** students;
	int studenSize = 0;

	Group(const char*name,Date startDate,Student **students,int studentSize)
	{
		this->name = name;
		this->startDate = startDate;
		this->students = students;
		this->studenSize = studentSize;
	}
	void showGroup() {
		cout << "Group name : " << name << endl;
		cout << "Start Date : " << startDate.day << "/" << startDate.month << "/" << startDate.year;
		cout << "Students : " << endl;
		for (size_t i = 0; i < studenSize; i++)
		{
			cout << "Student " << i + 1 << " : " << endl;
			students[i]->showStudent();
		}
		
	}
	void addStudentInGroup(Group &group,Student &student) {
		int newSize = studenSize + 1;
		Student ** newStudents = new Student * [newSize];
		for (size_t i = 0; i < studenSize; i++)
		{
			newStudents[i] = group.students[i];
		}
		newStudents[newSize - 1] = new Student(student);
		delete[] group.students;

		group.students = newStudents;

		group.studenSize = newSize;
	}
};

struct Academy
{
	const char* name;
	Date startDate;
	Group** groups;
	int groupSize = 0;
	
	Academy(const char*name,Date startDate,Group**groups,int groupSize) {     
		this->name = name;
		this->startDate = startDate;
		this->groups = groups;
		this->groupSize = groupSize;
	}
	void showAcademy() {
		cout << "Academy Name : " << name << endl;
		cout << "Star Date : " << endl;
		cout << "Groups : " << endl;
		for (size_t i = 0; i < groupSize; i++)
		{
			for (size_t j = 0; j < groups[i]->studenSize; j++)
			{
				groups[i]->students[j]->showStudent();
			}
		}
	}

	void scoreMoreThanFifty() {
		for (size_t i = 0; i < groupSize; i++)
		{
			for (size_t j = 0; j < groups[i]->studenSize; j++)
			{
				if (groups[i]->students[j]->score > 50) {
					groups[i]->students[j]->showStudent();
				}
			}
		}
	}

	void addGroupInAcadmey(Academy &academy,Group &group) {
		int newSize = groupSize + 1;
		Group** newGroups = new Group*[newSize];
		for (size_t i = 0; i < groupSize; i++)
		{
			newGroups[i] = academy.groups[i];
		}

		newGroups[newSize - 1] = new Group (group);

		delete[] academy.groups;

		academy.groups = newGroups;

		academy.groupSize = newSize;
	}
};

void createStudent() {
	int id = 0;
	cout << "Enter id: ";
	cin >> id;
	cin.ignore();

	char name[30];
	cout << "Enter name: ";
	cin.getline(name, 30);

	char surname[30];
	cout << "Enter surname: ";
	cin.getline(surname, 30);

	char city[30];
	cout << "Enter city: ";
	cin.getline(city, 30);

	short day, month, year;
	cout << "BirthDate (DD/MM/YYYY): ";
	cin >> day >> month >> year;

	float score;
	cout << "Score: ";
	cin >> score;

	Date birthDate(day, month, year);

	Student* student = new Student(id, name, surname, city, birthDate, score);
	Student s7(*student);
	s7.showStudent();
}
Group* createGroup() {
	char name[30];
	cout << "Enter group name : ";
	cin.getline(name, 30);
	short day, month, year;
	cout << "StarDate : ";
	cin >> day>>month>>year;
	

}
void main() {
	Date d1(18, 1, 2004);
	Date d2(10, 6, 2004);
	Date d3(23, 5, 2004);
	Date d4(16, 1, 2003);
	Date d5(13, 7, 1970);
	Date d6(8, 9,1950);
	Date startDate(15, 9, 2021);
	Student s1(1, "Nizami", "Amirov", "Sheki", d1, 80);
	Student s2(2, "Aksin", "Ahmedli", "Sheki", d2, 30);
	Student s3(3, "Vefa", "Bagirhova", "Guba", d3, 98);
	Student s4(4, "Revan", "Agazade", "Sumgayit", d4, 59);
	Student s5(5, "Asim", "Asimli", "Sheki", d5, 40);
	Student s6(6, "Vusal", "Agayev", "Razin", d6, 78);
	int size1 = 3;
	Student** stundents1 = new Student * [size1] {&s1,&s2,&s3};
	Student** stundents2 = new Student * [size1] {&s4,&s5,&s6};
	Group g1("Zerbeciler", startDate, stundents1, size1);
	Group g2("Adi", startDate, stundents2, size1);
	Group g3("Kesr", startDate, stundents2, size1);
	int size2 = 3;
	Group** groups = new Group * [size2] {&g1, & g2,&g3};
	Academy a1("StepIt Acadmey", startDate, groups, size1);
	//s1.showStudent();
	//g1.showGroup();
	//a1.showAcademy();
	//a1.scoreMoreThanFifty();
	//g1.addStudentInGroup(g1, s4);
	//a1.addGroupInAcadmey(a1, g3);
	//createStudent();
}
