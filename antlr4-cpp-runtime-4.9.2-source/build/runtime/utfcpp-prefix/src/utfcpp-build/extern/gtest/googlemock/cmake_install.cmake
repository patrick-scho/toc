# Install script for directory: C:/Users/Patrick/Documents/Studium/master/sem2/projekt/toc/antlr4-cpp-runtime-4.9.2-source/build/runtime/thirdparty/utfcpp/extern/gtest/googlemock

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Users/Patrick/Documents/Studium/master/sem2/projekt/toc/antlr4-cpp-runtime-4.9.2-source/build/runtime/thirdparty/utfcpp/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "C:/Users/Patrick/Documents/Studium/master/sem2/projekt/toc/antlr4-cpp-runtime-4.9.2-source/build/runtime/thirdparty/utfcpp/extern/gtest/googlemock/include/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "C:/Users/Patrick/Documents/Studium/master/sem2/projekt/toc/antlr4-cpp-runtime-4.9.2-source/build/runtime/utfcpp-prefix/src/utfcpp-build/extern/gtest/googlemock/Debug/gmockd.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "C:/Users/Patrick/Documents/Studium/master/sem2/projekt/toc/antlr4-cpp-runtime-4.9.2-source/build/runtime/utfcpp-prefix/src/utfcpp-build/extern/gtest/googlemock/Release/gmock.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "C:/Users/Patrick/Documents/Studium/master/sem2/projekt/toc/antlr4-cpp-runtime-4.9.2-source/build/runtime/utfcpp-prefix/src/utfcpp-build/extern/gtest/googlemock/MinSizeRel/gmock.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "C:/Users/Patrick/Documents/Studium/master/sem2/projekt/toc/antlr4-cpp-runtime-4.9.2-source/build/runtime/utfcpp-prefix/src/utfcpp-build/extern/gtest/googlemock/RelWithDebInfo/gmock.lib")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "C:/Users/Patrick/Documents/Studium/master/sem2/projekt/toc/antlr4-cpp-runtime-4.9.2-source/build/runtime/utfcpp-prefix/src/utfcpp-build/extern/gtest/googlemock/Debug/gmock_maind.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "C:/Users/Patrick/Documents/Studium/master/sem2/projekt/toc/antlr4-cpp-runtime-4.9.2-source/build/runtime/utfcpp-prefix/src/utfcpp-build/extern/gtest/googlemock/Release/gmock_main.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "C:/Users/Patrick/Documents/Studium/master/sem2/projekt/toc/antlr4-cpp-runtime-4.9.2-source/build/runtime/utfcpp-prefix/src/utfcpp-build/extern/gtest/googlemock/MinSizeRel/gmock_main.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "C:/Users/Patrick/Documents/Studium/master/sem2/projekt/toc/antlr4-cpp-runtime-4.9.2-source/build/runtime/utfcpp-prefix/src/utfcpp-build/extern/gtest/googlemock/RelWithDebInfo/gmock_main.lib")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "C:/Users/Patrick/Documents/Studium/master/sem2/projekt/toc/antlr4-cpp-runtime-4.9.2-source/build/runtime/utfcpp-prefix/src/utfcpp-build/extern/gtest/googlemock/gtest/generated/gmock.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "C:/Users/Patrick/Documents/Studium/master/sem2/projekt/toc/antlr4-cpp-runtime-4.9.2-source/build/runtime/utfcpp-prefix/src/utfcpp-build/extern/gtest/googlemock/gtest/generated/gmock_main.pc")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Users/Patrick/Documents/Studium/master/sem2/projekt/toc/antlr4-cpp-runtime-4.9.2-source/build/runtime/utfcpp-prefix/src/utfcpp-build/extern/gtest/googlemock/gtest/cmake_install.cmake")

endif()

