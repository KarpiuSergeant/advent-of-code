project(01)

set(HEADER_FILES
        dec-01.h
        )

set(SRC_FILES
        dec-01.cpp
        )

add_library(01_lib STATIC ${SRC_FILES} ${HEADER_FILES})