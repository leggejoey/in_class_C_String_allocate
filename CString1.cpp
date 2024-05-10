//
// Created by joeyl on 5/8/2024.
//

#include "CString1.h"


CString1::CString1() {
    _cString = nullptr;
}

CString1::~CString1() {
    delete[] _cString;
}

CString1::CString1(const char *cString) {
    _cString = new char[strlen(cString)+1];
    strcpy(_cString, cString);
}

