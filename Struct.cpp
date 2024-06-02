#include<iostream>
using namespace std;

struct Student {
    int id;
    const char* name;
    const char* surname;
    float average;

    void showStudent() {
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Surname: " << surname << endl;
        cout << "Average: " << average << endl;
    }
};

struct Group {
    Student* students;
    int count;

    Group(int count) {
        this->count = count;
        students = new Student[count];
    }

    void showStudents() {
        for (int i = 0; i < count; ++i) {
            students[i].showStudent();
            cout << endl;
        }
    }

    ~Group() {
        delete[] students;
    }
};

int main() {
    Group group(2);

    group.students[0] = { 1, "Nizami", "Amirov", 80 };
    group.students[1] = { 2, "Name", "Username", 70 };

    group.showStudents();

    return 0;
}
