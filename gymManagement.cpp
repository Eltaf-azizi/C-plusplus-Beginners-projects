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


int main()
{

    return 0;
}