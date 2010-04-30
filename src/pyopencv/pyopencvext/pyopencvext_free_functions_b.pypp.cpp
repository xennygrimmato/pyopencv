// This file has been generated by Py++.

#include "boost/python.hpp"
#include "opencv_headers.hpp"
#include "pyopencvext_free_functions_b.pypp.hpp"

namespace bp = boost::python;

void register_free_functions_b(){

    { //::cv::bilateralFilter
    
        typedef void ( *bilateralFilter_function_type )( ::cv::Mat const &,::cv::Mat &,int,double,double,int );
        
        bp::def( 
            "bilateralFilter"
            , bilateralFilter_function_type( &::cv::bilateralFilter )
            , ( bp::arg("src"), bp::arg("dst"), bp::arg("d"), bp::arg("sigmaColor"), bp::arg("sigmaSpace"), bp::arg("borderType")=int(::cv::BORDER_REFLECT_101) ) );
    
    }

    { //::cv::bitwise_and
    
        typedef void ( *bitwise_and_function_type )( ::cv::MatND const &,::cv::Scalar const &,::cv::MatND &,::cv::MatND const & );
        
        bp::def( 
            "bitwise_and"
            , bitwise_and_function_type( &::cv::bitwise_and )
            , ( bp::arg("a"), bp::arg("s"), bp::arg("c"), bp::arg("mask")=cv::MatND() )
            , "\nCalculates per-element bit-wise conjunction of two arrays and an "
    "\narray and a scalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-bitwise-and" );
    
    }

    { //::cv::bitwise_and
    
        typedef void ( *bitwise_and_function_type )( ::cv::MatND const &,::cv::MatND const &,::cv::MatND &,::cv::MatND const & );
        
        bp::def( 
            "bitwise_and"
            , bitwise_and_function_type( &::cv::bitwise_and )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("c"), bp::arg("mask")=cv::MatND() )
            , "\nCalculates per-element bit-wise conjunction of two arrays and an "
    "\narray and a scalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-bitwise-and" );
    
    }

    { //::cv::bitwise_and
    
        typedef void ( *bitwise_and_function_type )( ::cv::Mat const &,::cv::Scalar const &,::cv::Mat &,::cv::Mat const & );
        
        bp::def( 
            "bitwise_and"
            , bitwise_and_function_type( &::cv::bitwise_and )
            , ( bp::arg("a"), bp::arg("s"), bp::arg("c"), bp::arg("mask")=cv::Mat() )
            , "\nCalculates per-element bit-wise conjunction of two arrays and an "
    "\narray and a scalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-bitwise-and" );
    
    }

    { //::cv::bitwise_and
    
        typedef void ( *bitwise_and_function_type )( ::cv::Mat const &,::cv::Mat const &,::cv::Mat &,::cv::Mat const & );
        
        bp::def( 
            "bitwise_and"
            , bitwise_and_function_type( &::cv::bitwise_and )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("c"), bp::arg("mask")=cv::Mat() )
            , "\nCalculates per-element bit-wise conjunction of two arrays and an "
    "\narray and a scalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-bitwise-and" );
    
    }

    { //::cv::bitwise_not
    
        typedef void ( *bitwise_not_function_type )( ::cv::MatND const &,::cv::MatND & );
        
        bp::def( 
            "bitwise_not"
            , bitwise_not_function_type( &::cv::bitwise_not )
            , ( bp::arg("a"), bp::arg("c") )
            , "\nInverts every bit of array."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-bitwise-not" );
    
    }

    { //::cv::bitwise_not
    
        typedef void ( *bitwise_not_function_type )( ::cv::Mat const &,::cv::Mat & );
        
        bp::def( 
            "bitwise_not"
            , bitwise_not_function_type( &::cv::bitwise_not )
            , ( bp::arg("a"), bp::arg("c") )
            , "\nInverts every bit of array."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-bitwise-not" );
    
    }

    { //::cv::bitwise_or
    
        typedef void ( *bitwise_or_function_type )( ::cv::MatND const &,::cv::Scalar const &,::cv::MatND &,::cv::MatND const & );
        
        bp::def( 
            "bitwise_or"
            , bitwise_or_function_type( &::cv::bitwise_or )
            , ( bp::arg("a"), bp::arg("s"), bp::arg("c"), bp::arg("mask")=cv::MatND() )
            , "\nCalculates per-element bit-wise disjunction of two arrays and an "
    "\narray and a scalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-bitwise-or" );
    
    }

    { //::cv::bitwise_or
    
        typedef void ( *bitwise_or_function_type )( ::cv::MatND const &,::cv::MatND const &,::cv::MatND &,::cv::MatND const & );
        
        bp::def( 
            "bitwise_or"
            , bitwise_or_function_type( &::cv::bitwise_or )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("c"), bp::arg("mask")=cv::MatND() )
            , "\nCalculates per-element bit-wise disjunction of two arrays and an "
    "\narray and a scalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-bitwise-or" );
    
    }

    { //::cv::bitwise_or
    
        typedef void ( *bitwise_or_function_type )( ::cv::Mat const &,::cv::Scalar const &,::cv::Mat &,::cv::Mat const & );
        
        bp::def( 
            "bitwise_or"
            , bitwise_or_function_type( &::cv::bitwise_or )
            , ( bp::arg("a"), bp::arg("s"), bp::arg("c"), bp::arg("mask")=cv::Mat() )
            , "\nCalculates per-element bit-wise disjunction of two arrays and an "
    "\narray and a scalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-bitwise-or" );
    
    }

    { //::cv::bitwise_or
    
        typedef void ( *bitwise_or_function_type )( ::cv::Mat const &,::cv::Mat const &,::cv::Mat &,::cv::Mat const & );
        
        bp::def( 
            "bitwise_or"
            , bitwise_or_function_type( &::cv::bitwise_or )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("c"), bp::arg("mask")=cv::Mat() )
            , "\nCalculates per-element bit-wise disjunction of two arrays and an "
    "\narray and a scalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-bitwise-or" );
    
    }

    { //::cv::bitwise_xor
    
        typedef void ( *bitwise_xor_function_type )( ::cv::MatND const &,::cv::Scalar const &,::cv::MatND &,::cv::MatND const & );
        
        bp::def( 
            "bitwise_xor"
            , bitwise_xor_function_type( &::cv::bitwise_xor )
            , ( bp::arg("a"), bp::arg("s"), bp::arg("c"), bp::arg("mask")=cv::MatND() )
            , "\nCalculates per-element bit-wise 'exclusive or' operation on two "
    "\narrays and an array and a scalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-bitwise-xor" );
    
    }

    { //::cv::bitwise_xor
    
        typedef void ( *bitwise_xor_function_type )( ::cv::MatND const &,::cv::MatND const &,::cv::MatND &,::cv::MatND const & );
        
        bp::def( 
            "bitwise_xor"
            , bitwise_xor_function_type( &::cv::bitwise_xor )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("c"), bp::arg("mask")=cv::MatND() )
            , "\nCalculates per-element bit-wise 'exclusive or' operation on two "
    "\narrays and an array and a scalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-bitwise-xor" );
    
    }

    { //::cv::bitwise_xor
    
        typedef void ( *bitwise_xor_function_type )( ::cv::Mat const &,::cv::Scalar const &,::cv::Mat &,::cv::Mat const & );
        
        bp::def( 
            "bitwise_xor"
            , bitwise_xor_function_type( &::cv::bitwise_xor )
            , ( bp::arg("a"), bp::arg("s"), bp::arg("c"), bp::arg("mask")=cv::Mat() )
            , "\nCalculates per-element bit-wise 'exclusive or' operation on two "
    "\narrays and an array and a scalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-bitwise-xor" );
    
    }

    { //::cv::bitwise_xor
    
        typedef void ( *bitwise_xor_function_type )( ::cv::Mat const &,::cv::Mat const &,::cv::Mat &,::cv::Mat const & );
        
        bp::def( 
            "bitwise_xor"
            , bitwise_xor_function_type( &::cv::bitwise_xor )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("c"), bp::arg("mask")=cv::Mat() )
            , "\nCalculates per-element bit-wise 'exclusive or' operation on two "
    "\narrays and an array and a scalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-bitwise-xor" );
    
    }

    { //::cv::blur
    
        typedef void ( *blur_function_type )( ::cv::Mat const &,::cv::Mat &,::cv::Size,::cv::Point,int );
        
        bp::def( 
            "blur"
            , blur_function_type( &::cv::blur )
            , ( bp::arg("src"), bp::arg("dst"), bp::arg("ksize"), bp::arg("anchor")=cv::Point_<int>(-0x000000001, -0x000000001), bp::arg("borderType")=int(::cv::BORDER_REFLECT_101) ) );
    
    }

    { //::cv::borderInterpolate
    
        typedef int ( *borderInterpolate_function_type )( int,int,int );
        
        bp::def( 
            "borderInterpolate"
            , borderInterpolate_function_type( &::cv::borderInterpolate )
            , ( bp::arg("p"), bp::arg("len"), bp::arg("borderType") ) );
    
    }

    { //::cv::boundingRect
    
        typedef ::cv::Rect ( *boundingRect_function_type )( ::cv::Mat const & );
        
        bp::def( 
            "boundingRect"
            , boundingRect_function_type( &::cv::boundingRect )
            , ( bp::arg("points") ) );
    
    }

    { //::cv::boxFilter
    
        typedef void ( *boxFilter_function_type )( ::cv::Mat const &,::cv::Mat &,int,::cv::Size,::cv::Point,bool,int );
        
        bp::def( 
            "boxFilter"
            , boxFilter_function_type( &::cv::boxFilter )
            , ( bp::arg("src"), bp::arg("dst"), bp::arg("ddepth"), bp::arg("ksize"), bp::arg("anchor")=cv::Point_<int>(-0x000000001, -0x000000001), bp::arg("normalize")=(bool)(true), bp::arg("borderType")=int(::cv::BORDER_REFLECT_101) ) );
    
    }

    { //::cv::buildPyramid
    
        typedef void ( *buildPyramid_function_type )( ::cv::Mat const &,::std::vector< cv::Mat > &,int );
        
        bp::def( 
            "buildPyramid"
            , buildPyramid_function_type( &::cv::buildPyramid )
            , ( bp::arg("src"), bp::arg("dst"), bp::arg("maxlevel") ) );
    
    }

    { //::cvBlob
    
        typedef ::CvBlob ( *blob_function_type )( float,float,float,float );
        
        bp::def( 
            "blob"
            , blob_function_type( &::cvBlob )
            , ( bp::arg("x"), bp::arg("y"), bp::arg("w"), bp::arg("h") )
            , "\nWrapped function:"
    "\n    cvBlob" );
    
    }

}
