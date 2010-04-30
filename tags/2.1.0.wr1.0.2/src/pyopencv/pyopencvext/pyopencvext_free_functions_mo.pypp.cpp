// This file has been generated by Py++.

#include "boost/python.hpp"
#include "opencv_headers.hpp"
#include "pyopencvext_free_functions_mo.pypp.hpp"

namespace bp = boost::python;

void register_free_functions_mo(){

    { //::cvMoveWindow
    
        typedef void ( *moveWindow_function_type )( char const *,int,int );
        
        bp::def( 
            "moveWindow"
            , moveWindow_function_type( &::cvMoveWindow )
            , ( bp::arg("name"), bp::arg("x"), bp::arg("y") )
            , "\nSets the position of the window."
    "\nWrapped function:"
    "\n    cvMoveWindow"
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/c/user_interface.html#convertimage#movewindow" );
    
    }

    { //::cv::moments
    
        typedef ::cv::Moments ( *moments_function_type )( ::cv::Mat const &,bool );
        
        bp::def( 
            "moments"
            , moments_function_type( &::cv::moments )
            , ( bp::arg("array"), bp::arg("binaryImage")=(bool)(false) ) );
    
    }

    { //::cv::morphologyDefaultBorderValue
    
        typedef ::cv::Scalar ( *morphologyDefaultBorderValue_function_type )(  );
        
        bp::def( 
            "morphologyDefaultBorderValue"
            , morphologyDefaultBorderValue_function_type( &::cv::morphologyDefaultBorderValue ) );
    
    }

    { //::cv::morphologyEx
    
        typedef void ( *morphologyEx_function_type )( ::cv::Mat const &,::cv::Mat &,int,::cv::Mat const &,::cv::Point,int,int,::cv::Scalar const & );
        
        bp::def( 
            "morphologyEx"
            , morphologyEx_function_type( &::cv::morphologyEx )
            , ( bp::arg("src"), bp::arg("dst"), bp::arg("op"), bp::arg("kernel"), bp::arg("anchor")=cv::Point_<int>(-0x000000001, -0x000000001), bp::arg("iterations")=(int)(1), bp::arg("borderType")=int(::cv::BORDER_CONSTANT), bp::arg("borderValue")=cv::morphologyDefaultBorderValue( ) ) );
    
    }

}