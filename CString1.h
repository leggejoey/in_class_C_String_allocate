//
// Created by joeyl on 5/8/2024.
//

#ifndef IN_CLASS_C_STRING_ALLOCATE_CSTRING1_H
#define IN_CLASS_C_STRING_ALLOCATE_CSTRING1_H


#include <cstring>

class CString1{
public:
    CString1();//constructer- new operator
    CString1(const char* cString);//custom constructer
    ~CString1();//destructer- delete[]
    void SetString(const char* word) {
        if(_cString != nullptr)
            delete[] _cString;
        _cString = new char[strlen(word)+1];
        strcpy(_cString, word);
    }
    const char* GetString() {return _cString;}

private:
    char* _cString;


};


#endif //IN_CLASS_C_STRING_ALLOCATE_CSTRING1_H
