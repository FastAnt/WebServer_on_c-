#pragma once

#include <string>
#include <iostream>
#include <sys/socket.h>

using namespace std;

// -h <ip> -p <port> -d <directory>

class server
{
public :

    server()
    {
        m_s_directory = "./";
        m_s_ip = "127.0.0.1";
        m_s_port = "0";
        m_n_port = 0;
    }
    server(const std::string & host,
            const std::string & port,
             const std::string & doc_root)
    {
        m_s_directory = doc_root;
        m_s_ip = host;
        m_s_port = port;
        m_n_port = std::stoi(port);
    }
    ~server(){}


    // possible have loop in which 
    void run()
    {

    }


private :

    bool connect()
    {
        return true;
    }
    bool waitForConnection()
    {
        return true;
    }
    // members


    string          m_s_directory;
    string          m_s_ip;
    string          m_s_port;
    int             m_n_port;

};
