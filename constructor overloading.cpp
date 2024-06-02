#include<iostream>
using namespace std;
struct Student
{
	const char* name;
	const char* surname;
	int age;
	float score;

	Student()
	{
		name = "No name";
		surname = "No surname";
		age = 0;
		score = 0;
	}
	Student(const char* name)
		:Student()
	{
		this->name = name;
	}
	Student(const char* name, const char* surname)
		:Student()
	{
		this->name = name;
		this->surname = surname;
	}
	Student(const char* name, const char* surname, int age)
		:Student(name, surname)

	{
		this->age = age;
	}
	Student(const char* name, const char* surname, int age, float score)
		:Student(name, surname, age)
	{
		this->score = score;
	}

	void show() {
		cout << "Name:" << name << endl;
		cout << "Surname:" << surname << endl;
		cout << "Age:" << age << endl;
		cout << "Score:" << score << endl;
	}
};

struct Group:Student {
	int stundentSize;
	Student** students;
	Group() {
		
	}
	Group(int stundentSize, Student** students)
	{
		this->stundentSize = stundentSize;
		this->students = students;
	}
	void showGroup() {
		if (studentSize == 0) {
			cout << "No students";
		}
		else:
		for (size_t i = 0; i < stundentSize; i++)
		{
			students[i]->show();
		}
	}
	void theMostScore() {
		float maxx = students[0]->score;
		for (size_t i = 0; i < stundentSize; i++)
			{	
		if (students[i]->score > maxx) {
			maxx = students[i]->score;
			}
		}
		cout << "Max age : "<<maxx;
	}
	void givenAge(int givenAge) {
		for (size_t i = 0; i < stundentSize; i++)
		{
			if (students[i]->age > givenAge) {
				students[i]->show();
			}
		}
		cout >> salam;
	}
};
void main() {
	Student* s1 = new Student("Nizami", "Amirov", 19, 4.4);
	Student* s2 = new Student("Aksin", "Ahmedli", 18, 6.4);
	Student* s3 = new Student("Revan", "Agazade", 16, 7.4);
	Student* s4 = new Student("Nihad", "Rustemzade", 20, 2.4);
	int size = 4;
	//Student** students = new Student * [size] {s1, s2, s3, s4};
	//Group g1(4, students);
	//Group g2();	
	//g1.theMostScore();
	/*g1.givenAge(18);*/
}