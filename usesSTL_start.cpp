//
// Created by Gabep on 12/13/2021.
//
/*
#include <iostream>
#include <fstream>
#include <sstream>
#include <queue>
#include <deque>

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
}*/

//defining a function below to find a given Profile for which only name is provided. This function returns
//true or false. If it finds the given name, it will also change the value of the second parameter as it's
//passed by reference.

//bool searchDeque(deque<Profile> &pq, Profile &president);
/*
int main() {
    //creating a Profile queue called pQueue;
    queue<Profile> pQueue;

    //creating a Profile deque called pDeque;
    deque<Profile> pDeque;

    Profile temp; //temp as in temporary name
    string line; //string line helps to read the file

    //let's practice file I/O
    ifstream file("C:\\Users\\Gabep\\Downloads\\presidentsWstates.txt");
    if (file.is_open())
    {
        while (getline(file, line))
        {
            stringstream ss(line);
            getline(ss, temp.fullname, '\t');
            getline(ss, temp.state, '\t');
            //using push for our queue to insert president Profiles.
            pQueue.push(temp);
            //using push_front for our deque to insert president Profiles
            pDeque.push_front(temp);
        }
    }*/
/*
    cout<<"***********************\n\nPrinting queue members by using pop and front\n"<<endl;
//using a while loop and the front and pop function to empty and print our President profiles.

    while(!pQueue.empty()){
        cout << pQueue.front() << endl;
        pQueue.pop();
    }


    cout<<"***********************\n\nPrinting deque members with iterator\n"<<endl;
//using an iterator to print our President profiles.
    deque<Profile>::iterator dIter;

    for(dIter = pDeque.begin(); dIter!=pDeque.end(); dIter++) {
        cout << *dIter << endl;
    }



//using a for loop which works with indices to print our President profiles.
    cout<<"***********************\n\nPrinting deque members with indices\n"<<endl;

    for(int i = 0; i<pDeque.size(); i++){
        cout << pDeque[i] << endl;
    }

    cout<<"***********************\n\nSearching for 'Gerald R. Ford': "<<endl;

//Uncomment below to when you have your search function ready

    temp.fullname = "Gerald R. Ford";
    if(searchDeque(pDeque, temp))
        cout<<"found:"<<temp<<endl;
    else
        cout<<"not found: "<<temp<<endl;

    return 0;
}*/
/*
bool searchDeque( deque<Profile> &pQueue,   Profile &president)
{
    {
        for (int i = 0; i<pQueue.size();i++)
        {
            if(president == pQueue[i])
                return true;
        }
        return false;
    }
}
*/
