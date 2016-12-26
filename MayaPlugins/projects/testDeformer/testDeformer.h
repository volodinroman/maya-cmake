#ifndef MYDEFORMER_H
#define MYDEFORMER_H

#include <maya/MPxDeformerNode.h>
#include <maya/MTypeId.h>
#include <maya/MDataBlock.h>
#include <maya/MDataHandle.h>	
#include <maya/MItGeometry.h>
#include <maya/MPlug.h>



class MyDeformer : public MPxDeformerNode
{
public:
	MyDeformer();
	virtual ~MyDeformer();
	static void* creator();
	static MStatus initialize();

	//deformer main function
	virtual MStatus deform(	MDataBlock& block, 
							MItGeometry& iter, 
							const MMatrix& mat, 
							unsigned int multiIndex);

	//attributes
	static MTypeId id;
};

#endif