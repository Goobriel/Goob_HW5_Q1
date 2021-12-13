#include <iostream>
#include <fstream>
#include <sstream>
#include <queue>
#include <deque>
#include "listtools.h"
#include "listtools.cpp"

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
    out << user.fullname<<"--" <<user.state;
    return out;
}

int main() {

    Mylist<Profile> pMylist;

    return 0;
}
