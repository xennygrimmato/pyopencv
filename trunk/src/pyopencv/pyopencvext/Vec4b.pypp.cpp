// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "ndarray.hpp"
#include "opencv_converters.hpp"
#include "Vec4b.pypp.hpp"

namespace bp = boost::python;

void register_Vec4b_class(){

    { //::cv::Vec< unsigned char, 4 >
        typedef bp::class_< cv::Vec< unsigned char, 4 > > Vec4b_exposer_t;
        Vec4b_exposer_t Vec4b_exposer = Vec4b_exposer_t( "Vec4b", bp::init< >() );
        bp::scope Vec4b_scope( Vec4b_exposer );
        Vec4b_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Vec< unsigned char, 4 > >() );
        bp::scope().attr("depth") = (int)cv::Vec<unsigned char, 4>::depth;
        bp::scope().attr("channels") = (int)cv::Vec<unsigned char, 4>::channels;
        bp::scope().attr("type") = (int)cv::Vec<unsigned char, 4>::type;
        Vec4b_exposer.def( bp::init< unsigned char >(( bp::arg("v0") )) );
        bp::implicitly_convertible< unsigned char, cv::Vec< unsigned char, 4 > >();
        Vec4b_exposer.def( bp::init< unsigned char, unsigned char >(( bp::arg("v0"), bp::arg("v1") )) );
        Vec4b_exposer.def( bp::init< unsigned char, unsigned char, unsigned char >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2") )) );
        Vec4b_exposer.def( bp::init< unsigned char, unsigned char, unsigned char, unsigned char >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3") )) );
        Vec4b_exposer.def( bp::init< unsigned char, unsigned char, unsigned char, unsigned char, unsigned char >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4") )) );
        Vec4b_exposer.def( bp::init< unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5") )) );
        Vec4b_exposer.def( bp::init< unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6") )) );
        Vec4b_exposer.def( bp::init< unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7") )) );
        Vec4b_exposer.def( bp::init< unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8") )) );
        Vec4b_exposer.def( bp::init< unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8"), bp::arg("v9") )) );
        Vec4b_exposer.def( bp::init< cv::Vec< unsigned char, 4 > const & >(( bp::arg("v") )) );
        { //::cv::Vec< unsigned char, 4 >::all
        
            typedef cv::Vec< unsigned char, 4 > exported_class_t;
            typedef ::cv::Vec< unsigned char, 4 > ( *all_function_type )( unsigned char );
            
            Vec4b_exposer.def( 
                "all"
                , all_function_type( &::cv::Vec< unsigned char, 4 >::all )
                , ( bp::arg("alpha") ) );
        
        }
        { //::cv::Vec< unsigned char, 4 >::cross
        
            typedef cv::Vec< unsigned char, 4 > exported_class_t;
            typedef ::cv::Vec< unsigned char, 4 > ( exported_class_t::*cross_function_type )( ::cv::Vec< unsigned char, 4 > const & ) const;
            
            Vec4b_exposer.def( 
                "cross"
                , cross_function_type( &::cv::Vec< unsigned char, 4 >::cross )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< unsigned char, 4 >::ddot
        
            typedef cv::Vec< unsigned char, 4 > exported_class_t;
            typedef double ( exported_class_t::*ddot_function_type )( ::cv::Vec< unsigned char, 4 > const & ) const;
            
            Vec4b_exposer.def( 
                "ddot"
                , ddot_function_type( &::cv::Vec< unsigned char, 4 >::ddot )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< unsigned char, 4 >::dot
        
            typedef cv::Vec< unsigned char, 4 > exported_class_t;
            typedef unsigned char ( exported_class_t::*dot_function_type )( ::cv::Vec< unsigned char, 4 > const & ) const;
            
            Vec4b_exposer.def( 
                "dot"
                , dot_function_type( &::cv::Vec< unsigned char, 4 >::dot )
                , ( bp::arg("v") ) );
        
        }
        Vec4b_exposer.def( "__temp_func", &cv::Vec< unsigned char, 4 >::operator ::CvScalar  );
        { //::cv::Vec< unsigned char, 4 >::operator[]
        
            typedef cv::Vec< unsigned char, 4 > exported_class_t;
            typedef unsigned char ( exported_class_t::*__getitem___function_type )( int ) const;
            
            Vec4b_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< unsigned char, 4 >::operator[] )
                , ( bp::arg("i") ) );
        
        }
        { //::cv::Vec< unsigned char, 4 >::operator[]
        
            typedef cv::Vec< unsigned char, 4 > exported_class_t;
            typedef unsigned char & ( exported_class_t::*__getitem___function_type )( int ) ;
            
            Vec4b_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< unsigned char, 4 >::operator[] )
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        Vec4b_exposer.staticmethod( "all" );
        Vec4b_exposer.def("from_ndarray", &sdcpp::from_ndarray< cv::Vec4b >, (bp::arg("inst_ndarray")) );
        Vec4b_exposer.staticmethod("from_ndarray");
        Vec4b_exposer.add_property("ndarray", &sdcpp::as_ndarray< cv::Vec4b >);
        Vec4b_exposer.def("__iadd__", &__iadd__<cv::Vec4b, cv::Vec4b>, bp::return_self<>() );
        Vec4b_exposer.def("__isub__", &__isub__<cv::Vec4b, cv::Vec4b>, bp::return_self<>() );
        Vec4b_exposer.def("__iadd__", &__iadd__<cv::Vec4b, cv::Vec4s>, bp::return_self<>() );
        Vec4b_exposer.def("__isub__", &__isub__<cv::Vec4b, cv::Vec4s>, bp::return_self<>() );
        Vec4b_exposer.def("__iadd__", &__iadd__<cv::Vec4b, cv::Vec4w>, bp::return_self<>() );
        Vec4b_exposer.def("__isub__", &__isub__<cv::Vec4b, cv::Vec4w>, bp::return_self<>() );
        Vec4b_exposer.def("__iadd__", &__iadd__<cv::Vec4b, cv::Vec4i>, bp::return_self<>() );
        Vec4b_exposer.def("__isub__", &__isub__<cv::Vec4b, cv::Vec4i>, bp::return_self<>() );
        Vec4b_exposer.def("__iadd__", &__iadd__<cv::Vec4b, cv::Vec4f>, bp::return_self<>() );
        Vec4b_exposer.def("__isub__", &__isub__<cv::Vec4b, cv::Vec4f>, bp::return_self<>() );
        Vec4b_exposer.def("__iadd__", &__iadd__<cv::Vec4b, cv::Vec4d>, bp::return_self<>() );
        Vec4b_exposer.def("__isub__", &__isub__<cv::Vec4b, cv::Vec4d>, bp::return_self<>() );
        Vec4b_exposer.def("__add__", &__add__<cv::Vec4b, cv::Vec4b> );
        Vec4b_exposer.def("__sub__", &__sub__<cv::Vec4b, cv::Vec4b> );
        Vec4b_exposer.def("__eq__", &__eq__<cv::Vec4b, cv::Vec4b> );
        Vec4b_exposer.def("__ne__", &__ne__<cv::Vec4b, cv::Vec4b> );
        Vec4b_exposer.def("__imul__", &__imul__<cv::Vec4b, unsigned char>, bp::return_self<>() );
        Vec4b_exposer.def("__mul__", &__mul__<cv::Vec4b, unsigned char> );
        Vec4b_exposer.def("__rmul__", &__rmul__<unsigned char, cv::Vec4b> );
        Vec4b_exposer.def("__neg__", &__neg__<cv::Vec4b> );
    }

}
