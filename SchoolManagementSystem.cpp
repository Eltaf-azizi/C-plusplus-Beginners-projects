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

                        for(i=0;choice!='n' && choice!='N'; i++)
                        {
                            if((choice=='y') || (choice=='Y') || (choice=='1'))
                            {
                                cout << "Enter First Name: ";
                                cin >> tech[i].fst_name;
                                cout << "Enter Last Name: ";
                                cin >> tech[i].lst_name;
                                cout << "Enter Qualification: ";
                                cin >> tech[i].qualification; 
                                cout << "Enter Experience(year): ";
                                cin >> tech[i].exp;
                                cout << "Enter number of year in this school: ";
                                cin >> tech[i].serves;
                                cout << "Enter subject who teaches: ";
                                cin >> tech[i].subj;
                                cout << "Enter lecture(per week): ";
                                cin >> tech[i].lec;
                                cout << "Enter pay: ";
                                cin >> tech[i].pay;
                                cout << "Enter  Phone number: ";
                                cin >> tech[i].cel_no;
                                cout << "Enter blood group";
                                cin >> tech[i].blod_grp;


                                t1<<tech[i].fst_name<< endl <<tech[i].lst_name<<endl
                                <<tech[i].qualification<<ednl<<tech[i].exp<<endl
                                <<tech[i].server<<ednl<<tech[i].subj<<ednl<<tech[i].lec
                                <<ednl<<tech[i].pay<<endl<<tech[i],cel_no<<endl<<tech[i].blod_grp<<endl;

                                cout << "Do you want to enter data: ";
                                cin >> choice;
                            }
                        }

                        system("cls");

                        t1.close();
                    }
                }
                continue;

                case '2':
                {
                    ifstream t2("teacher.txt");

                    cout << "Enter name to be displayed: ";
                    cin >> find;

                    cout << endl;
                    int notFound = 0;
                    for(j=0;((j<i) || (!t2.eof()));j++)
                    {
                        getline(t2,tech[j].fst_name);

                        if(tech[j].fst_name==find)
                        {
                            notFound = 1;
                            cout << "First name: "<<tech[j].fst_name << endl;
                            getline(t2, tech[j].lst_name);
                            cout << "Last name: " << tech[j].lst_name << endl;
                            getline(t2, tech[j].qualification);
                            cout << "Qualification: " <<tech[j].qualification << endl;
                            getline(t2, tech[j].exp);
                            cout << "Experience: " << tech[j].exp << endl;

                            getline(t2, tech[j].serves);
                            cout << "Number of year in this school: " << tech[j].serves<<endl;

                            getline(t2, tech[j].serves);
                            cout << "Subject who teaches: " << tech[j].subj << endl;
                            
                            getline(t2, tech[j].lec);
                            cout << "Enter lecture(per week): " << tech.[j].lec << endl;
                            getline(t2,tech[j].pay);
                            cout << "pay: "<<tech[j].pay<<endl;

                            getline(t2, tech[j].addrs);
                            cout << "Enter your Address: " << tech[j].addrs << endl;

                            getline(t2, tech[j].cell_no);
                            cout << "Enter your phone number: " << tech[j].cell_no << endl;

                            getline(t2, tech[j].blod_grp);
                            cout << "Enter your blood group: " << tech[j].blod_grp << endl;
                        }
                    }
                    t2.close();
                    if(notFound = 0)
                    {
                        cout << "No record found" << endl;
                    }
                    cout << "Press any key two times to proceed";
                    getch();
                    getch();
                }
                continue;

                
            }
        }


    }


    return 0;
}