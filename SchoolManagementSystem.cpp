#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
#include<windows.h>

using namespace std;


struct student
{
    string fname;
    string lname;
    string registration;
    string classes;
}studentData;



struct teacher
{
    string fst_name;
    string lst_name;
    string qualification;
    string exp;
    on
    string pay;
    string subj;
    string lec;
    string addrs;
    string cel_no;
    string blod_grp;
    string serves;
}tech[50];

int main()
{
    int i = 0;
    char choice;
    string find;
    string srch;


    while(1)
    {
        system("cls");

        cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n";
        cout << "\n\n\n\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n\n\n";
        cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n";
        cout << "\n\n\n\t\t\t\t MAIN SCREEN \n\n";
        cout << "Enter your choice: " << endl;
        cout << "1. Student's information" << endl;
        cout << "2. Teacher's information" << endl;
        cout << "3. Exit program" << endl;
        cin >> choice;

        system("cls");

        switch(choice)
        {
            case '1':
            {
                while(1)
                {
                    system("cls");
                    cout << "\t\t\t STUDENT INFORMATION AND BIO DATA SECTION \n\n\n";
                    cout << "Enter your choice: "<<endl;
                    cout << "1. Create new entry\n";
                    cout << "2. Find and display entry\n";
                    cout << "3. Jump to main\n";
                    cin >> choice;

                    switch(choice)
                    {
                        case '1':
                        {
                            ofstream f1("student.txt", ios::app);
                            for(i=0, choice!='n'; i++)
                            {
                                if((choice=='y') || (choice=='Y') || (choice=='1'))
                                {
                                    cout << "Enter first name: ";
                                    cin>>studentData.fname;
                                    cout << "Enter last name: ";
                                    cin>>studentData.lname;
                                    cout << "Enter Registration number: ";
                                    cin>>studentData.registration;
                                    cout << "Enter class: ";
                                    cin>>studentData.classes;


                                    f1<<studentData.fname<<endl<<studentData.lname<<endl<<studentData.registration<<endl<<studentData.classes<<endl;
                                    cout << "Do you want to enter data: ";
                                    cout << "Press Y to continue and N to finish: ";
                                    cin >> choice;
                                }
                            }
                            f1.close();
                        }
                        continue;


                        case '2':
                        ifstream f2("student.txt");
                        cout << "Enter first name to be displayed: ";
                        cin >> find;
                        cout<<endl;
                        int notFound = 0;
                        for(j=0;(j<1)||(!f2.eof()); j++)
                        {
                            getline(f2,studentData.fname);

                            
                            if(studentData.fname==find)
                            {
                                notFound = 1;
                                cout << "First Name: " <<studentData.fname<<endl;
                                cout << "Last Name: " <<studentData.lname<<endl;

                                getline(f2, studentData.registration);
                                cout << "Registration Number: " << studentData.registration << endl;
                                getline(f2, studentData.classes);
                                cout << "Class: " << studentData.classes << endl <<endl;
                            }
                        }

                        if(notFound == 0)
                        {
                            cout << "No Record Found" << endl;
                        }

                        f2.close();
                        cout << "Press any key times to proceed";
                        getch();
                        getch();
                    }
                    continue;

                    case '3':
                    {
                        break;
                    }
                }
                break;
            }
            continue;
        }

        case '2':
        {
            while(1)
            {
                system("cls");
                cout << "\t\t\t TEACHERS INFORMATION AND BIO DATA SECTION \n\n\n";
                cout << "Enter your choice: " << endl;
                cout << "1. Create new entry\n";
                cout << "2. Find and display\n";
                cout << "3. Jump to main\n";
                cin >> choice;


                switch(choice)
                {
                    case '1':
                    {
                        ofstream f1("teacher.txt", ios::app);

                        
                    }
                }
            }
        }


    }


    return 0;
}