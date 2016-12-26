#include "testDeformer.h"

#include <maya/MFnPlugin.h>

//registering the deformer node in Maya system
MStatus initializePlugin(MObject obj)
{
	MStatus status;

	//vendor, version, api version
	MFnPlugin fnPlugin(obj, "Any", "1.0", "Any");

	status = fnPlugin.registerNode("myDeformer", MyDeformer::id, MyDeformer::creator, MyDeformer::initialize, MPxNode::kDeformerNode);
	CHECK_MSTATUS_AND_RETURN_IT(status);

	return MS::kSuccess;
}

//deregistering the deformer node when we turn it off
MStatus uninitializePlugin(MObject obj)
{
	MStatus status;

	MFnPlugin fnPlugin(obj);

	status = fnPlugin.deregisterNode(MyDeformer::id);
	CHECK_MSTATUS_AND_RETURN_IT(status);

	return MS::kSuccess;
}