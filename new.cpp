#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int id;
    string name;
    int age;
    float marks;

    void input() {
        cout << "\nEnter ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\nID: " << id;
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nMarks: " << marks << endl;
    }
};

void addStudent() {
    Student s;
    ofstream file("students.txt", ios::binary | ios::app);
    s.input();
    file.write(reinterpret_cast<char*>(&s), sizeof(s));
    file.close();
    cout << "\n✅ Student record added successfully.\n";
}

void viewStudents() {
    Student s;
    ifstream file("students.txt", ios::binary);
    if (!file) {
        cout << "\n⚠️ No data found!\n";
        return;
    }
    cout << "\n--- Student Records ---\n";
    while (file.read(reinterpret_cast<char*>(&s), sizeof(s))) {
        s.display();
        cout << "------------------------\n";
    }
    file.close();
}

int main() {
    int choice;
    do {
        cout << "\n===== Student Management Menu =====\n";
        cout << "1. Add Student\n";
        cout << "2. View All Students\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: viewStudents(); break;
            case 3: cout << "\nExiting...\n"; break;
            default: cout << "\nInvalid choice. Try again.\n";
        }
    } while (choice != 3);

    return 0;
}
