#pragma once
#include <list>
#include <map>
#include <sys/socket.h>
#include <sys/fcntl.h>
#include <vector>

#include <iostream>
#include <sstream>
#include <string>

// Для корректной работы freeaddrinfo в MinGW
// Подробнее: http://stackoverflow.com/a/20306451
#define _WIN32_WINNT 0x501

using namespace std;


namespace
{
    class Connection
    {
    public :
        Connection()
        {

        }
        ~Connection()
        {

        }
    private :

    };
    class communicationManager
    {
    public:
        communicationManager()
        {

        }
        ~communicationManager()
        {

        }

        void UNIVERSAL_FUNCTION_WHITCH_SHOULD_TO_DIE()
        {

        }

        void listen()
        {

        }
        void accept()
        {

        }
        void saveConnection()
        {

        }
        void dissconectById( int id)
        {
            connectioMap.erase(id);
        }
    private :
        map<int , Connection> connectioMap;


    };
    typedef communicationManager commMng;

}
