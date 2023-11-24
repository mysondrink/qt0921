cmake_minimum_required(VERSION 3.5)

project(qt0921) #项目名，语言 C++

set(CMAKE_INCLUDE_CURRENT_DIR ON) #当前include 打开

set(CMAKE_AUTOUIC ON)  # ui转换支持打开
set(CMAKE_AUTOMOC ON)  # moc转换支持打开
set(CMAKE_AUTORCC ON)  # 资源文件支持 打开

set(CMAKE_CXX_STANDARD 11) # C++11
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# QtCreator supports the following variables for Android, which are identical to qmake Android variables.
# Check https://doc.qt.io/qt/deployment-android.html for more information.
# They need to be set before the find_package( ...) calls below.

#if(ANDROID)
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
#    if (ANDROID_ABI STREQUAL "armeabi-v7a")
#        set(ANDROID_EXTRA_LIBS
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libcrypto.so
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libssl.so)
#    endif()
#endif()

set(QT_MESSAGELOGCONTEXT TRUE) # Qt消息打开，默认关闭。需要打开QLog release/debug 消息打印相关
add_definitions(-DQT_MESSAGELOGCONTEXT) #添加QtMessage 宏定义，默认关闭

#Git相关(可删除)
#set(GIT_COMMIT_HASH "")
#set(GIT_BRANCH_NAME "")
#find_package(Git QUIET)
#if(GIT_FOUND)
#execute_process(
#    #Format %ci time yyyy-mm-dd hh:mm:ss %H commitID
#    COMMAND ${GIT_EXECUTABLE} log -1 --pretty=format:%ci%H
#    OUTPUT_VARIABLE GIT_COMMIT_HASH
#    OUTPUT_STRIP_TRAILING_WHITESPACE
#    ERROR_QUIET
#    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
#)
#execute_process(
#    COMMAND ${GIT_EXECUTABLE} symbolic-ref --short -q HEAD
#    OUTPUT_VARIABLE GIT_BRANCH_NAME
#    OUTPUT_STRIP_TRAILING_WHITESPACE
#    ERROR_QUIET
#    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
#)
#endif()
#set(APP_VERSION "VersionInfo: ${GIT_BRANCH_NAME}:${GIT_COMMIT_HASH}")
#message(STATUS  ${APP_VERSION})
#
#configure_file(
#  ${CMAKE_CURRENT_SOURCE_DIR}/ver.h.ini
#  ${CMAKE_BINARY_DIR}/ver.h
#  @ONLY
#)
#Git相关，默认没有，可删除

#系统信息打印(可删除)
message(STATUS  "cmake-version:" ${CMAKE_VERSION}) #CMake版本信息
message(STATUS  "system_name:" ${CMAKE_HOST_SYSTEM_NAME}) #系统名称
message(STATUS  "system_version:" ${CMAKE_HOST_SYSTEM_PROCESSOR}) #系统版本
message(STATUS  "system_kernel:" ${CMAKE_HOST_SYSTEM_VERSION}) #系统内核版本

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -Wall -O2")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -O2")

if(CMAKE_HOST_SYSTEM_PROCESSOR MATCHES "x86_64") #Linux 平台判断 x86还是arm64（可删除）
    message(STATUS "LINUX_OS_X86_64")
    set(LINUX_OS_X86_64 TRUE)
    add_definitions(-DLINUX_OS_X86_64)
elseif(CMAKE_HOST_SYSTEM_PROCESSOR MATCHES "AARCH64")
    message(STATUS "LINUX_OS_ARM64")
    set(LINUX_OS_ARM64 TRUE)
    add_definitions(-DLINUX_OS_ARM64)
endif()

#头文件包含
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/gui
                    ${CMAKE_CURRENT_SOURCE_DIR}/func
                    ${CMAKE_CURRENT_SOURCE_DIR}/inf
                    ${CMKAE_CURRENT_SOURCE_DIR}
)

#系统头文件包含
#include_directories(
#                    /usr/local/include/****
#)

#库查找
find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets Core Gui REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets Core Gui REQUIRED)
#find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Gui REQUIRED)
#find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core REQUIRED)

#源文件包含
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} PROJECT_SOURCES)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/gui GUI_SOURCES)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/func FUNC_SOURCES)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/inf INF_SOURCES)

#第三方链接库包含
#set(PROJECT_LIBS
#        paho-mqtt3a
#)

#可执行文件生成
if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(qt0921
            ${PROJECT_SOURCES} ${GUI_SOURCES} ${FUNC_SOURCES} ${INF_SOURCES}
    )
else()
    if(ANDROID)
        add_library(qt0921 SHARED
            ${PROJECT_SOURCES} ${GUI_SOURCES} ${FUNC_SOURCES} ${INF_SOURCES}
        )
    else()
        add_executable(qt0921
            ${PROJECT_SOURCES} ${GUI_SOURCES} ${FUNC_SOURCES} ${INF_SOURCES}
                func/homePage.cpp func/homePage.h func/registerPage.cpp func/registerPage.h func/powerPage.cpp func/powerPage.h func/sysPage.cpp func/sysPage.h func/wifiPage.cpp func/wifiPage.h func/aboutPage.cpp func/aboutPage.h func/clearPage.cpp func/clearPage.h func/setPage.cpp func/setPage.h func/testPage.cpp func/testPage.h func/historyPage.cpp func/historyPage.h func/editPage.cpp func/editPage.h)
    endif()
endif()
#库文件链接
target_link_libraries(qt0921 PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Qt${QT_VERSION_MAJOR}::Gui Qt${QT_VERSION_MAJOR}::Core)
