#pragma once
#include <string>
using namespace std;

enum class Depertment {
	ComputerSciece,
	ElectricalEngineering,
	ElectronicEngineering,
	IformationManagement,
};

enum class ClassName {
	_1A,
	_1B,
	_2A,
	_2B,
	_3A,
	_3B,
	_4A,
	_4B,
};

class Utility1 {
public:
	static string toString(Depertment depertment);
	static string toString(ClassName className);
};