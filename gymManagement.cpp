#include <iostream>
#include <vector>

using namespace std;

class Member
{
    private:
        string name;
        int age;
        bool attendance;
    public:
        Member(string name, int age)
        {
            this -> name = name;
            this -> age = age;
            this -> attendance = false;
        }
    

        
    string getName()
    {
        return name;
    }


    int getAge()
    {
        return age;
    }


    bool getAttendance()
    {
        return attendance;
    }



    setAttendance(bool attendance)
    {
        this -> attendance = attendance;
    }
}



class Gym
{
    private:
    vector<member> ve;
    public:
    add(string name, int age)
    {
        Member member(name, age);
        ve.push_back(member);
        cout <<"Member Added" <<endl <<endl;
    }
    markAttendance(string name)
    {
        for(int i=0; i<ve.size(); i++)
        {
            if(name==ve[i].getName())
            {
                ve[i].setAttendance(true);
                cout << "Attendance marked for member: " <<ve[i].name <<endl;
            }
        }
    }


    fees()
    {
        int total = 0;

        for(int i=0; i<ve.size(); i++)
        {
            if(ve[i].getAttendance())
            {
                int fees = getAge() >20? 200 : 100;
                total += fees;
            }
        }
        cout << "Total Fees: " <<total <<endl <<endl;
    }
};

int main()
{
    cout << "**** Gym Management ****";


    while(true)
    {
        cout << "1. Add Member" <<endl;
        cout << "2. Mark Attendance: " <<endl;
        cout << "3. Total Fees: " <<endl;
        cout << "0. Exit" <<endl;
        cout << "Enter Choice: ";
        cin >> val;


        
        if(val == 1)
        {
            
        }
    }

    return 0;
}