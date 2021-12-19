#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <typeinfo>
#include <cxxabi.h>
#include <system_error>
#define foo(ins) cout << #ins << ": " << type_name_of(ins) <<endl;
using namespace std;

string demangle(const string& mangled) {
	int stat;
	char* buff = abi::__cxa_demangle(mangled.c_str(), nullptr, nullptr, &stat);
	if (stat < 0) throw system_error(stat, generic_category(), "FATAL: demangle failed");
	string demangled (buff);
	free(buff);
	return demangled;
}

template <typename T>
string type_name_of(T ins) {
	return demangle(typeid(T).name());
}

int main() {
	foo(0);
	foo(123);
	foo(123u);
	foo(123ul);
	foo(2147483648u);
	foo(2147483648);
	foo(0ll);
	foo(2.f);
	foo(.2);
	foo(1e300f);
	return 0;
}

