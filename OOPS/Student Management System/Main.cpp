// * Student Management System

// * Used Topic : File Handling C++
// *            : Object Oriented Programming

#include <iostream>
#include <fstream>  // * file handling
#include <stdlib.h> // * Standard Library Functions
#include <cstdlib>  // * Converting
#include <conio.h>  // * for getch()

using namespace std;

class student
{
private:
    string name;
    string roll_no;
    string course;
    string address;
    string email_id;
    string contact_no;

public:
    // * menu
    void menu();
    void insert();
    void display();
    void modify();
    void search();
    void deleted();
};

void student::menu()
{
menustart:

    int choice;
    char c;
    system("cls");

    cout << "\t\t\t|*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-|" << endl;
    cout << "\t\t\t|                                      |" << endl;
    cout << "\t\t\t|      STUDENT MANAGEMENT SYSTEM       |" << endl;
    cout << "\t\t\t|                                      |" << endl;
    cout << "\t\t\t|*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-|" << endl;
    cout << "\t\t\t|                                      |" << endl;
    cout << "\t\t\t|  1. Enter New Record                 |" << endl;
    cout << "\t\t\t|  2. Display Record                   |" << endl;
    cout << "\t\t\t|  3. Modify Record                    |" << endl;
    cout << "\t\t\t|  4. Search Record                    |" << endl;
    cout << "\t\t\t|  5. Delete Record                    |" << endl;
    cout << "\t\t\t|  6. Exit                             |" << endl;
    cout << "\t\t\t|                                      |" << endl;
    cout << "\t\t\t|*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-|" << endl;
    cout << "\t\t\t|                                      |" << endl;
    cout << "\t\t\t|    Choose Option : [1/2/3/4/5/6}     |" << endl;
    cout << "\t\t\t|                                      |" << endl;
    cout << "\t\t\t|*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-|" << endl;
    cout << endl;
    cout << "\t\t\t     Enter Your Option : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        do
        {
            insert();

            cout << endl;
            cout << "\n\t\t\t  Add Another Student Record (Y , N) :  ";
            cin >> c;

        } while (c == 'y' || c == 'Y');
        break;

    case 2:
        display();
        break;
    case 3:
        modify();
        break;
    case 4:
        search();
        break;
    case 5:
        deleted();
        break;
    case 6:
        exit(0);

    default:
        cout << endl;
        cout << "\n\t\t\t Invalid choice !!!   ";
        cout << "\n\t\t\t Please Try Again .....";
        cout << "\n\t\t\t ( Press Enter ) - - ";
    }

    getch();
    goto menustart;
}

void student::insert() // * feature 1 : add record
{
    system("cls");
    fstream file;

    cout << "\t\t\t|*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-|" << endl;
    cout << "\t\t\t|                                                              |" << endl;
    cout << "\t\t\t|                      Add Student Details                     |" << endl;
    cout << "\t\t\t|                                                              |" << endl;
    cout << "\t\t\t|*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-|" << endl;
    cout << endl;

    cout << "\t\t\t   Enter Name          : ";
    cin >> name;
    cout << "\t\t\t   Enter Roll No       : ";
    cin >> roll_no;
    cout << "\t\t\t   Enter Course        : ";
    cin >> course;
    cout << "\t\t\t   Enter Email Address : ";
    cin >> email_id;
    cout << "\t\t\t   Enter Contact No    : ";
    cin >> contact_no;
    cout << "\t\t\t   Enter Address       : ";
    cin >> address;

    file.open("studentRecord.txt", ios::app | ios::out);
    file << " " << name << " " << roll_no << " " << course << " " << email_id << " " << contact_no << " " << address << "\n";
    file.close();
}

void student::display() //* feature 2 : display all records
{
    int total = 1;

    system("cls");
    fstream file;

    cout << "\t\t\t|*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-|" << endl;
    cout << "\t\t\t|                                                              |" << endl;
    cout << "\t\t\t|                       Student Record                         |" << endl;
    cout << "\t\t\t|                                                              |" << endl;
    cout << "\t\t\t|*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-|" << endl;
    cout << endl;

    file.open("studentRecord.txt", ios::in);

    if (!file)
    {
        cout << "\n\t\t\t No Data Available ......";
        file.close();
    }

    else
    {
        file >> name >> roll_no >> course >> email_id >> contact_no >> address;

        while (!file.eof())
        {

            cout << "\n\t\t\t Student No            : " << total++ << endl;
            cout << "\n\t\t\t Student Name          : " << name << endl;
            cout << "\n\t\t\t Student Roll No       : " << roll_no << endl;
            cout << "\n\t\t\t Student Course        : " << course << endl;
            cout << "\n\t\t\t Student Email Address : " << email_id << endl;
            cout << "\n\t\t\t Student Contact No    : " << contact_no << endl;
            cout << "\n\t\t\t Student Address       : " << address << endl;
            cout << "\n\t\t\t|---------------------------------------------------------|" << endl;

            file >> name >> roll_no >> course >> email_id >> contact_no >> address;
        }

        if (total == 1)
        {
            cout << "\n\t\t\t No Data Available ......";
        }
    }
    file.close();
}

void student::modify() //* feature 3 : modify data based on roll
{
    system("cls");
    fstream file, file1;

    string rollno;
    int found = 0;

    cout << "\t\t\t|*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-|" << endl;
    cout << "\t\t\t|                                                              |" << endl;
    cout << "\t\t\t|                   Student Modify Details                     |" << endl;
    cout << "\t\t\t|                                                              |" << endl;
    cout << "\t\t\t|*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-|" << endl;
    cout << endl;

    file.open("studentRecord.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\t No Data Available ......";
        file.close();
    }

    else
    {
        cout << "\n Enter the Roll No. of student which you want to modify : ";
        cin >> rollno;

        file1.open("record.txt", ios::app | ios::out);

        file >> name >> roll_no >> course >> email_id >> contact_no >> address;

        while (!file.eof())
        {
            if (rollno != roll_no)
            {
                file1 << " " << name << " " << roll_no << " " << course << " " << email_id << " " << contact_no << " " << address << "\n";
            }

            else
            {
                cout << "\t\t\t   Enter Name          : ";
                cin >> name;
                cout << "\t\t\t   Enter Roll No       : ";
                cin >> roll_no;
                cout << "\t\t\t   Enter Course        : ";
                cin >> course;
                cout << "\t\t\t   Enter Email Address : ";
                cin >> email_id;
                cout << "\t\t\t   Enter Contact No    : ";
                cin >> contact_no;
                cout << "\t\t\t   Enter Address       : ";
                cin >> address;

                file1 << " " << name << " " << roll_no << " " << course << " " << email_id << " " << contact_no << " " << address << "\n";

                found++;
            }

            file >> name >> roll_no >> course >> email_id >> contact_no >> address;
        }

        if (found == 0)
        {
            cout << "\n\t\t\t Student Roll No. Not Found ......";
        }

        file1.close();
        file.close();
        remove("studentRecord.txt");
        rename("record.txt", "studentRecord.txt");
    }
}

void student::search() // * feature 4  - search data
{
    system("cls");
    fstream file, file1;

    cout << "\t\t\t|*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-|" << endl;
    cout << "\t\t\t|                                                              |" << endl;
    cout << "\t\t\t|                    Student Search Data                       |" << endl;
    cout << "\t\t\t|                                                              |" << endl;
    cout << "\t\t\t|*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-|" << endl;
    cout << endl;

    file.open("studentRecord.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\t No Data Available ......";
        file.close();
    }

    else
    {
        int found = 0;

        string rollno;
        cout << "\n Enter the Roll No of Student : ";
        cin >> rollno;

        file >> name >> roll_no >> course >> email_id >> contact_no >> address;

        while (!file.eof())
        {

            if (rollno == roll_no)
            {
                cout << "\n\t\t\t|---------------------------------------------------------|" << endl;
                cout << "\n\t\t\t Student Name          : " << name << endl;
                cout << "\n\t\t\t Student Roll No       : " << roll_no << endl;
                cout << "\n\t\t\t Student Course        : " << course << endl;
                cout << "\n\t\t\t Student Email Address : " << email_id << endl;
                cout << "\n\t\t\t Student Contact No    : " << contact_no << endl;
                cout << "\n\t\t\t Student Address       : " << address << endl;
                cout << "\n\t\t\t|---------------------------------------------------------|" << endl;
                found++;
            }

            file >> name >> roll_no >> course >> email_id >> contact_no >> address;
        }

        if (found == 0)
        {
            cout << "\n\t\t\t Student Roll No. Not Found ......";
        }
        file.close();
    }
}

void student::deleted()
{
    system("cls");
    fstream file, file1;

    string rollno;
    int found = 0;

    cout << "\t\t\t|*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-|" << endl;
    cout << "\t\t\t|                                                              |" << endl;
    cout << "\t\t\t|                     Student Delete Data                      |" << endl;
    cout << "\t\t\t|                                                              |" << endl;
    cout << "\t\t\t|*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-|" << endl;
    cout << endl;

    file.open("studentRecord.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\t No Data Available ......";
        file.close();
    }
    cout << "\n Enter the Roll No. of student which you want to delete : ";
    cin >> rollno;

    file1.open("record.txt", ios::app | ios::out);

    file >> name >> roll_no >> course >> email_id >> contact_no >> address;

    while (!file.eof())
    {
        if (rollno != roll_no)
        {
            file1 << " " << name << " " << roll_no << " " << course << " " << email_id << " " << contact_no << " " << address << "\n";
        }
        else
        {
            found++;
            cout << "\n\t\t\tSuccessfully Delete Data";
        }
        file >> name >> roll_no >> course >> email_id >> contact_no >> address;
    }
    if (found == 0)
    {
        cout << "\n\t\t\t Student Roll No. Not Found ......";
    }

    file1.close();
    file.close();
    remove("studentRecord.txt");
    rename("record.txt", "studentRecord.txt");
}
main()
{
    student project;

    project.menu();

    return 0;
}
