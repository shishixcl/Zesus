#include "Common.h"
#include "ctype.h"


Zesus_Error::Zesus_Error(const string &s):logic_error(s){}

bool Common::is_digits(const string& s){
	if(s.length() ==0) return false;
	for(size_t i=0; i<s.length(); i++){
		if(! isdigit(s[i]) ) return false;
	}
	return true;
}


string Common::trim_left(const string& s){

	char *head = const_cast<char *>(s);
	const char blank = ' ';
	char *p = head;
	while( p ){
		if( *p == blank ){
			p++;
		}else{
			break;
		}
	}
	return string(p,0,s.length()-(p-head));
}

string Common::trim_right(const string& s){
	char *head = const_cast<char *>(s);
	const char blank = ' ';
	char *p = head + s.length() - 1;
	while(p){
		if(*p == blank){
			p--;
		}else{
			break;
		}
	}
	return string(head, 0, p+1-head);
}



