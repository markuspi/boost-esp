cmake_minimum_required(VERSION 3.15)

if(DEFINED DEV_ENVIRONMENT)
    set(COMPONENTS "main" "__pio_env")
    include($ENV{IDF_PATH}/tools/cmake/project.cmake)
    project(boost-esp)
else()
    idf_component_register(INCLUDE_DIRS "libs/config/include" "libs/endian/include")
endif()
