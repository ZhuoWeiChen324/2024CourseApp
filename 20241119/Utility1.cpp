#include "Utility1.h"
#include <string>
using namespace std;

string Utility1::toString(Depertment depertment)
{
	switch (depertment) {
	case Depertment::ComputerSciece:
		return "��T�u�{";
	case Depertment::ElectricalEngineering:
		return "�q���u�{";
	case Depertment::ElectronicEngineering:
		return "�q�l�u�{";
	case Depertment::IformationManagement:
		return "��T�޲z";
	default:
		return "����";
	}
}

string Utility1::toString(ClassName className)
{
	switch (className) {
	case ClassName::_1A:
		return "�@��";
	case ClassName::_1B:
		return "�@�A";
	case ClassName::_2A:
		return "�G��";
	case ClassName::_2B:
		return "�G�A";
	case ClassName::_3A:
		return "�T��";
	case ClassName::_3B:
		return "�T�A";
	case ClassName::_4A:
		return "�|��";
	case ClassName::_4B:
		return "�|�A";
	default:
		return "����";
	}
}
