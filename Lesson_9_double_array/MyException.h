#pragma once
#include <exception>
#include <string>
#define MY_MACROS \
std::cout << "size= " << size<< std::endl;\
std::cout << "capacity= " << capacity << std::endl;
#define MY_MACROS_2 \
try\
{if (index < 0)\
	throw std::runtime_error("Index cannot be negative");}\
catch (myexception& ex)\
{\
	std::cout << "This is my exception!" << ex.what() << std::endl;\
}\
catch (std::exception& ex)\
{\
	std::cout << ex.what() << std::endl;\
}\
catch (...)\
{\
	std::cout << "Catched exception" << std::endl;\
}
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
