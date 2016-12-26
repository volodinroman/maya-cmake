#include "testDeformer.h"

MTypeId MyDeformer::id(0x00000234);

//constructor
MyDeformer::MyDeformer()
{}

//destructor
MyDeformer::~MyDeformer()
{}

void* MyDeformer::creator()
{
	return new MyDeformer();
}

MStatus MyDeformer::initialize()
{
	return MS::kSuccess;
}

MStatus MyDeformer::deform(	MDataBlock& block,
							MItGeometry& iter,
							const MMatrix& mat,
							unsigned int multiIndex)
{
	//initial status
	MStatus status = MS::kSuccess;


	return status;
}