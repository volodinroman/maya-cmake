#include "testCommand.h"



myTestCmd::myTestCmd()
{
	//empty
}

void* myTestCmd::creator()
{
	return new myTestCmd;
}


MStatus myTestCmd::doIt(const MArgList& argList)
{
	MStatus status;

	MGlobal::displayInfo(MString() + "Hello, Maya!");


	return MS::kSuccess;

}
