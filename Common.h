#ifndef Zesus_Common_H
#define Zesus_Common_H

#include "stdexpect.h"


class Zesus_Error : public logic_error {
	Zesus_Error(const string& s);
}

class Common{

	bool is_digits(const string& s);
	bool is_xdigits(const string& s);
	string trim_left(const string& s);
	string trim_right(const string& s);
	string s2

}

#endif