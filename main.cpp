#include <iostream>
#include <fstream>
#include <sstream>
#include "listtools.h"
#include "listtools.cpp"
#include "mylist.cpp"

using namespace std;

struct Profile
{
    string fullname;
    string state;
    bool operator==( Profile rhs)
    {
        if (fullname==rhs.fullname)
            return true;
        return false;
    }

    bool operator!=(Profile rhs)
    {
        if (fullname!=rhs.fullname)
            return true;
        return false; }

};

ostream& operator<< (ostream &out, Profile &user)
{
    out << user.fullname<<"\t" <<user.state;
    return out;
}

int main() {

    Mylist<Profile> pMylist;
    Profile temp; //temp as in temporary name
    string line; //string line helps to read the file

    // file I/O (input,output)
    ifstream file("C:\\Users\\Gabep\\Downloads\\presidentsWstates.txt");
    if (file.is_open())
    {
        while (getline(file, line))
        {
            stringstream ss(line);
            getline(ss, temp.fullname, '\t');
            getline(ss, temp.state, '\t');
            pMylist.headinsert( temp );
        }
    }


    Profile benny;
    benny = {"Sir Goobriel and Madam Ozzylin of Pullman", "PL"};
    pMylist.headinsert(benny);

    pMylist.display();


    return 0;
}
