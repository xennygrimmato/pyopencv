// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "Size2f.pypp.hpp"

namespace bp = boost::python;

void register_Size2f_class(){

    { //::cv::Size_< float >
        typedef bp::class_< cv::Size_< float > > Size2f_exposer_t;
        Size2f_exposer_t Size2f_exposer = Size2f_exposer_t( "Size2f", bp::init< >() );
        bp::scope Size2f_scope( Size2f_exposer );
        Size2f_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Size_< float > >() );
        Size2f_exposer.def( bp::init< float, float >(( bp::arg("_width"), bp::arg("_height") )) );
        Size2f_exposer.def( bp::init< cv::Size_< float > const & >(( bp::arg("sz") )) );
        Size2f_exposer.def( bp::init< cv::Point_< float > const & >(( bp::arg("pt") )) );
        bp::implicitly_convertible< cv::Point_< float > const &, cv::Size_< float > >();
        { //::cv::Size_< float >::area
        
            typedef cv::Size_< float > exported_class_t;
            typedef float ( exported_class_t::*area_function_type )(  ) const;
            
            Size2f_exposer.def( 
                "area"
                , area_function_type( &::cv::Size_< float >::area ) );
        
        }
        { //::cv::Size_< float >::operator=
        
            typedef cv::Size_< float > exported_class_t;
            typedef ::cv::Size_< float > & ( exported_class_t::*assign_function_type )( ::cv::Size_< float > const & ) ;
            
            Size2f_exposer.def( 
                "assign"
                , assign_function_type( &::cv::Size_< float >::operator= )
                , ( bp::arg("sz") )
                , bp::return_self< >() );
        
        }
        Size2f_exposer.def_readwrite( "height", &cv::Size_< float >::height );
        Size2f_exposer.def_readwrite( "width", &cv::Size_< float >::width );
    }

}