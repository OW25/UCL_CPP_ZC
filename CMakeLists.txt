cmake_minimum_required(VERSION 3.6)
project(UCL_CPP)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES test/main.cpp
        code/header_file/UCLCode.h code/header_file/UCLFormatV2.h code/UCLCode.cpp code/UCLCodeExtension.cpp
        code/header_file/UCLCodeExtension.h
        code/header_file/XMLTools.h
        code/UCLCode.cpp
        code/UCLCodeExtension.cpp
        code/UCLXMLParser.cpp
        code/tinyxml/tinystr.cpp
        code/tinyxml/tinystr.h
        code/tinyxml/tinyxml.cpp
        code/tinyxml/tinyxml.h
        code/tinyxml/tinyxmlerror.cpp
        code/tinyxml/tinyxmlparser.cpp
        code/header_file/UCLXMLConf.h                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           


        property/UCLPropertyBase.h property/UCLPropertyBase.cpp
        property/UCLPropertyHead.cpp property/UCLPropertyHead.h property/UCLPropertySet.h
        property/UCLPropertySet.cpp UCL/UCL.h UCL/UCL.cpp test/test.h
        tools/digest/UCLMD5.h tools/digest/UCLMD5.cpp
        tools/digest/UCLCRC32.h tools/digest/UCLCRC32.cpp tools/digest/UCLSHA_256.h
        tools/digest/UCLSHA_256.cpp tools/digest/UCLSHA_512.h tools/digest/UCLSHA_512.cpp
        test/testUCLCode.h test/testUCLCode.cpp property/UCLPropertiesInfo.h property/UCLPropertiesInfo.cpp
        test/test.cpp property/GenCDPSProperty.h property/GenCDPSProperty.cpp property/GenCGPSProperty.cpp
        property/GenCGPSProperty.h tools/signature/Base64Code.h tools/signature/Base64Code.cpp
        tools/signature/UCLRSA.h tools/signature/UCLRSA.cpp tools/signature/UCLDSA.h
        tools/signature/UCLDSA.cpp UCL/digSignNo.h tools/signature/UCLECDSA.h
        tools/signature/UCLECDSA.cpp property/GenZCPSProperty.cpp property/GenZCPSProperty.h property/ZCPSInfo.cpp property/ZCPSInfo.h)
add_executable(UCL_CPP_ZC ${SOURCE_FILES} property/GenZCPSProperty.h property/GenZCPSProperty.cpp property/GenZCPSProperty.h)
target_link_libraries(UCL_CPP_ZC ssl crypto)