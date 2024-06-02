#include <iostream>
#include <fstream>

using namespace std;
FILE* file;

void Register() {
    fopen_s(&file, R"(C:\Users\amiro\OneDrive - Baku State University\Desktop\Demo.txt)", "w");

    if (file) {
        int const  size = 50;
        char name[size]{};
        char surname[size];
        char password[size]; 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter name: ";
        cin.getline(name, size);

        cout << "Enter surname : ";
        cin.getline(surname, size);

        cout << "Enter password : ";
        cin.getline(password, size);
        fputs(name, file);

        putc(' ', file); 

        fputs(surname, file);
        putc(' ', file);

        fputs(password, file);
        

        fclose(file);
    }

}

void Show() {
    fopen_s(&file, R"(C:\Users\amiro\OneDrive - Baku State University\Desktop\Demo.txt)", "r");

    if (file) {
        char symbol = getc(file);
        while (symbol != EOF) {
            cout << symbol;
            symbol = getc(file);
        }
        fclose(file);
    }
}

void Display() {
    int choice = 0;
    cout << "Choices:" << endl; // Use Türkçe characters
    cout << "1.Sign Up" << endl;
    cout << "2. Show" << endl;
    cout << "3. Exit" << endl;
    cout << "Choice: ";
    cin >> choice;

    if (choice == 1) {
        Register();
        Display();
    }
    else if (choice == 2) {
        Show();
        Display();
    }
    else {
        cout << "Exit!" << endl;
    }
}

int main() {
    Display();
    return 0;
}
