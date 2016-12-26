#plugin name
project(testDeformerPlugin) #project name

#Specify invdividual source file
# set(SOURCE_FILES
# 	"pluginMain.cpp"
# 	"testDeformer.cpp"
# 	"testDeformer.h"
# )

file(GLOB SOURCE_FILES "*.cpp" "*.h")


include_directories(${MAYA_INCLUDE_DIR}) #list of preprocessor include file search directories

link_directories(${MAYA_LIBRARY_DIR}) #list of linker search directories

#as we already specifyed project() name - PROJECT_NAME variable started existing
#build library (SHARED = dynamic library = dll)
add_library(${PROJECT_NAME} SHARED ${SOURCE_FILES}) 

#specify libraries for the project
target_link_libraries(${PROJECT_NAME} ${MAYA_LIBRARIES}) #linking program with libraries

MAYA_PLUGIN(${PROJECT_NAME}) #a function that is defined in FindMaya.cmake module


#destination - specifies a directory on disk to which a file will be installed
#targets - what we want to install | PROJECT_NAME - is a name of our compiled plugin | MAYA_TARGET_TYPE - time of binary file (DLL, EXE)
# install(TARGETS ${PROJECT_NAME} ${MAYA_TARGET_TYPE} DESTINATION plug-ins) #only works when we use "cmake --build . --config Release --target Install"


