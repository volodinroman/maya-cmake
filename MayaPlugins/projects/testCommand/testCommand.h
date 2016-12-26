#ifndef MYTESTCMD_H
#define MYTESTCMD_H

#include <maya/MPxCommand.h> //for creating a new command
#include <maya/MGlobal.h> //Global functions for maya
#include <maya/MObject.h>
#include <maya/MSyntax.h>

class myTestCmd : public MPxCommand
{
public:
	myTestCmd(); //constructor
	virtual MStatus doIt(const MArgList& argList); //our command
	static void* creator();
	 

};

#endif
