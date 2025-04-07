#include <iostream>
#include <mysql.h>
#include <mysqld_error.h>
#include <windows.h>

using namespace std;


const char* HOST = "localhost";
const char* USER = "root";
const char* PW = " ";
const char* DB = "mydb";


class Login
{
    private:
    string userId, userPW;
    public:
    Login(): userId(""), userPW("") {}



    void setId(string id)
    {
        userId = id;
    }


    void setPW(string pw)
    {
        userPW = pw;
    }



    string getId() const
    {
        return userId;
    }


    string getPW() const
    {
        return userPW;
    }
};


char encrytCh(char ch, int shift)
{
    if(isalpha(ch))
    {
        char base = isupper(ch) ? 'A' : 'a';
        char encrypted_ch = (ch - base + shift + 26) % 26 + base;
        return encrypted_ch;
    }
    else if(isdigit(ch))
    {
        char encrypted_ch = (ch - '0' + shift + 10) % 10 + '0';
        return encrypted_ch;
    }
    return ch;
}


string encrypt(const string & password, int sift)
{
    string encrypted = "";

    for(int i=0; i<password.length(); i++)
    {
        char ch = password[i];
        char encryptedChar = encryptCh(ch, shift);
        encrypted + encryptedChar;
    }
    return encrypted;
}


char decryptCh(char ch, int shift)
{
    if(isalpha(ch))
    {
        char base = isupper(ch) ? 'A' : 'a';
        char decrypted_ch = (ch - base - shift + 26) % 26 + base;
        return decrypted_ch;
    }
    else if(isdigit(ch))
    {
        char decrypted_ch = (ch - '0' - shift + 10) % 10 + '0';
        return decrypted_ch;
    }
    else
    {
        return ch;
    }
}


string decrypt(const string & encrypted, int shift)
{
    string decrypted = "";

    for(size_t i=0; i<encrypted.length(); i++)
    {
        char ch = encrypted[i];
        char decryptedChar = decryptCh(ch, shift);
        decrypt += decryptedChar;
    }
}


int main()
{
    Login l;

    MYSQL * conn;
    conn = mysql_init(NULL);


    if(!mysql_real_connect(conn, HOST, USER, PW, DB, 3306, NULL, 0))
    {
        cout << "Error: " << mysql_error(conn) <<endl;
    }
    else
    {
        cout << "Logged In Database!" <<endl;
    }
    Sleep(3000);
    int shift = 3;


    bool exit = false;
    while(!exit)
    {
        system("cls");
        cout << "1. Sign Up" << endl;
        cout << "2. Login" <<endl;
        cout << "0. Exit" <<endl;
        cout << "Enter your Choice: ";
        int val;
        cin >> val;



        if(val == 1)
        {
            system("cls");
            string id, pw;
            cout << "Enter ID for Sign Up: ";
            cin >> id;
            l.setId(id);


            cout << "Enter a String Password: ";
            cin >> pw;
            l.setPW(pw);

            string encryptedPW = encrypt(l.getPW(), shift);

            string Sup = "INSERT INTO password (Id, PW) VALUES ('"+l.getId()+"', '"+encryptedPW+"')";
            if(mysql_query(conn, Sup.c_str()))
            {
                cout << "Error: " << mysql_error(conn) <<endl;
            }
            else
            {
                cout << "SignUp Successfuly!" <<endl;
            }
            Sleep(3000);
        }



        else if(val == 2)
        {
            system("cls");
            string id, pw;
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Your Password: ";
            cin >> pw;

        }
    }// while

    return 0;
}