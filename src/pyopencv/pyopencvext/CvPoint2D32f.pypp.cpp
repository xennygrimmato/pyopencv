// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "CvPoint2D32f.pypp.hpp"

namespace bp = boost::python;

void register_CvPoint2D32f_class(){

    bp::class_< CvPoint2D32f >( "CvPoint2D32f" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvPoint2D32f >() )    
        .def_readwrite( "x", &CvPoint2D32f::x )    
        .def_readwrite( "y", &CvPoint2D32f::y );

}
