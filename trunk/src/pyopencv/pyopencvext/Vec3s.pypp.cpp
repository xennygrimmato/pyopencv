// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "ndarray.hpp"
#include "opencv_converters.hpp"
#include "Vec3s.pypp.hpp"

namespace bp = boost::python;

void register_Vec3s_class(){

    { //::cv::Vec< short, 3 >
        typedef bp::class_< cv::Vec< short, 3 > > Vec3s_exposer_t;
        Vec3s_exposer_t Vec3s_exposer = Vec3s_exposer_t( "Vec3s", bp::init< >() );
        bp::scope Vec3s_scope( Vec3s_exposer );
        Vec3s_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Vec< short, 3 > >() );
        bp::scope().attr("depth") = (int)cv::Vec<short, 3>::depth;
        bp::scope().attr("channels") = (int)cv::Vec<short, 3>::channels;
        bp::scope().attr("type") = (int)cv::Vec<short, 3>::type;
        Vec3s_exposer.def( bp::init< short int >(( bp::arg("v0") )) );
        bp::implicitly_convertible< short int, cv::Vec< short, 3 > >();
        Vec3s_exposer.def( bp::init< short int, short int >(( bp::arg("v0"), bp::arg("v1") )) );
        Vec3s_exposer.def( bp::init< short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2") )) );
        Vec3s_exposer.def( bp::init< short int, short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3") )) );
        Vec3s_exposer.def( bp::init< short int, short int, short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4") )) );
        Vec3s_exposer.def( bp::init< short int, short int, short int, short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5") )) );
        Vec3s_exposer.def( bp::init< short int, short int, short int, short int, short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6") )) );
        Vec3s_exposer.def( bp::init< short int, short int, short int, short int, short int, short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7") )) );
        Vec3s_exposer.def( bp::init< short int, short int, short int, short int, short int, short int, short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8") )) );
        Vec3s_exposer.def( bp::init< short int, short int, short int, short int, short int, short int, short int, short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8"), bp::arg("v9") )) );
        Vec3s_exposer.def( bp::init< cv::Vec< short, 3 > const & >(( bp::arg("v") )) );
        { //::cv::Vec< short, 3 >::all
        
            typedef cv::Vec< short, 3 > exported_class_t;
            typedef ::cv::Vec< short, 3 > ( *all_function_type )( short int );
            
            Vec3s_exposer.def( 
                "all"
                , all_function_type( &::cv::Vec< short, 3 >::all )
                , ( bp::arg("alpha") ) );
        
        }
        { //::cv::Vec< short, 3 >::cross
        
            typedef cv::Vec< short, 3 > exported_class_t;
            typedef ::cv::Vec< short, 3 > ( exported_class_t::*cross_function_type )( ::cv::Vec< short, 3 > const & ) const;
            
            Vec3s_exposer.def( 
                "cross"
                , cross_function_type( &::cv::Vec< short, 3 >::cross )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< short, 3 >::ddot
        
            typedef cv::Vec< short, 3 > exported_class_t;
            typedef double ( exported_class_t::*ddot_function_type )( ::cv::Vec< short, 3 > const & ) const;
            
            Vec3s_exposer.def( 
                "ddot"
                , ddot_function_type( &::cv::Vec< short, 3 >::ddot )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< short, 3 >::dot
        
            typedef cv::Vec< short, 3 > exported_class_t;
            typedef short int ( exported_class_t::*dot_function_type )( ::cv::Vec< short, 3 > const & ) const;
            
            Vec3s_exposer.def( 
                "dot"
                , dot_function_type( &::cv::Vec< short, 3 >::dot )
                , ( bp::arg("v") ) );
        
        }
        Vec3s_exposer.def( "__temp_func", &cv::Vec< short, 3 >::operator ::CvScalar  );
        { //::cv::Vec< short, 3 >::operator[]
        
            typedef cv::Vec< short, 3 > exported_class_t;
            typedef short int ( exported_class_t::*__getitem___function_type )( int ) const;
            
            Vec3s_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< short, 3 >::operator[] )
                , ( bp::arg("i") ) );
        
        }
        { //::cv::Vec< short, 3 >::operator[]
        
            typedef cv::Vec< short, 3 > exported_class_t;
            typedef short int & ( exported_class_t::*__getitem___function_type )( int ) ;
            
            Vec3s_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< short, 3 >::operator[] )
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        Vec3s_exposer.staticmethod( "all" );
        Vec3s_exposer.def("from_ndarray", &sdcpp::from_ndarray< cv::Vec3s >, (bp::arg("inst_ndarray")) );
        Vec3s_exposer.staticmethod("from_ndarray");
        Vec3s_exposer.add_property("ndarray", &sdcpp::as_ndarray< cv::Vec3s >);
        Vec3s_exposer.def("__iadd__", &__iadd__<cv::Vec3s, cv::Vec3b>, bp::return_self<>() );
        Vec3s_exposer.def("__isub__", &__isub__<cv::Vec3s, cv::Vec3b>, bp::return_self<>() );
        Vec3s_exposer.def("__iadd__", &__iadd__<cv::Vec3s, cv::Vec3s>, bp::return_self<>() );
        Vec3s_exposer.def("__isub__", &__isub__<cv::Vec3s, cv::Vec3s>, bp::return_self<>() );
        Vec3s_exposer.def("__iadd__", &__iadd__<cv::Vec3s, cv::Vec3w>, bp::return_self<>() );
        Vec3s_exposer.def("__isub__", &__isub__<cv::Vec3s, cv::Vec3w>, bp::return_self<>() );
        Vec3s_exposer.def("__iadd__", &__iadd__<cv::Vec3s, cv::Vec3i>, bp::return_self<>() );
        Vec3s_exposer.def("__isub__", &__isub__<cv::Vec3s, cv::Vec3i>, bp::return_self<>() );
        Vec3s_exposer.def("__iadd__", &__iadd__<cv::Vec3s, cv::Vec3f>, bp::return_self<>() );
        Vec3s_exposer.def("__isub__", &__isub__<cv::Vec3s, cv::Vec3f>, bp::return_self<>() );
        Vec3s_exposer.def("__iadd__", &__iadd__<cv::Vec3s, cv::Vec3d>, bp::return_self<>() );
        Vec3s_exposer.def("__isub__", &__isub__<cv::Vec3s, cv::Vec3d>, bp::return_self<>() );
        Vec3s_exposer.def("__add__", &__add__<cv::Vec3s, cv::Vec3s> );
        Vec3s_exposer.def("__sub__", &__sub__<cv::Vec3s, cv::Vec3s> );
        Vec3s_exposer.def("__eq__", &__eq__<cv::Vec3s, cv::Vec3s> );
        Vec3s_exposer.def("__ne__", &__ne__<cv::Vec3s, cv::Vec3s> );
        Vec3s_exposer.def("__imul__", &__imul__<cv::Vec3s, short>, bp::return_self<>() );
        Vec3s_exposer.def("__mul__", &__mul__<cv::Vec3s, short> );
        Vec3s_exposer.def("__rmul__", &__rmul__<short, cv::Vec3s> );
        Vec3s_exposer.def("__neg__", &__neg__<cv::Vec3s> );
    }

}
