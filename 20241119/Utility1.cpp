#include "Utility1.h"
#include <string>
using namespace std;

string Utility1::toString(Depertment depertment)
{
	switch (depertment) {
	case Depertment::ComputerSciece:
		return "資訊工程";
	case Depertment::ElectricalEngineering:
		return "電機工程";
	case Depertment::ElectronicEngineering:
		return "電子工程";
	case Depertment::IformationManagement:
		return "資訊管理";
	default:
		return "未知";
	}
}

string Utility1::toString(ClassName className)
{
	switch (className) {
	case ClassName::_1A:
		return "一甲";
	case ClassName::_1B:
		return "一乙";
	case ClassName::_2A:
		return "二甲";
	case ClassName::_2B:
		return "二乙";
	case ClassName::_3A:
		return "三甲";
	case ClassName::_3B:
		return "三乙";
	case ClassName::_4A:
		return "四甲";
	case ClassName::_4B:
		return "四乙";
	default:
		return "未知";
	}
}
