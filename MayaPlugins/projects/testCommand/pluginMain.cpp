#include "testCommand.h"
#include <maya/MFnPlugin.h>

MStatus initializePlugin(MObject obj)
{
	MStatus status;

	MFnPlugin fnPlugin(obj, "Any", "1.0", "Any");

	status = fnPlugin.registerCommand("runTest", myTestCmd::creator);
	CHECK_MSTATUS_AND_RETURN_IT(status);

	return MS::kSuccess;
}

MStatus uninitializePlugin(MObject obj)
{
	MStatus status;


	MFnPlugin fnPlugin(obj);

	status = fnPlugin.deregisterCommand("runTest");
	CHECK_MSTATUS_AND_RETURN_IT(status);

	return MS::kSuccess;
}
