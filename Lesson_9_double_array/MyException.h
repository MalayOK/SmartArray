#pragma once
#include <exception>
#include <string>
#define MY_MACROS \
std::cout << "size= " << size<< std::endl;\
std::cout << "capacity= " << capacity << std::endl;

class myexception : public std::exception
{
public:
	myexception(const char* message) :exception(message)
	{
		m_Message = message;
	}

	virtual const char* what() const throw()
	{
		return m_Message.c_str();
	}

private:
	std::string m_Message;
};
