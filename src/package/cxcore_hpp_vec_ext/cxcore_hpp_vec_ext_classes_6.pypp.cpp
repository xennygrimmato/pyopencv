// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "cxcore_hpp_vec_wrapper.hpp"
#include "ndarray.hpp"
#include "opencv_converters.hpp"
#include "cxcore_hpp_vec_ext_classes_6.pypp.hpp"

namespace bp = boost::python;

void register_classes_6(){

    bp::class_< cv::Range >( "Range", bp::init< >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Range >() )    
        .def( bp::init< int, int >(( bp::arg("_start"), bp::arg("_end") )) )    
        .def( 
            "all"
            , (::cv::Range (*)(  ))( &::cv::Range::all ) )    
        .def( 
            "empty"
            , (bool ( cv::Range::* )(  ) const)( &::cv::Range::empty ) )    
        .def( 
            "size"
            , (int ( cv::Range::* )(  ) const)( &::cv::Range::size ) )    
        .def_readwrite( "end", &cv::Range::end )    
        .def_readwrite( "start", &cv::Range::start )    
        .staticmethod( "all" )    
        .add_property("ndarray", &sdcpp::as_ndarray< cv::Range >)    
        .def("__not__", &__not__<cv::Range> )    
        .def("__iand__", &__iand__<cv::Range, cv::Range >, bp::return_self<>() )    
        .def("__and__", &__and__<cv::Range, cv::Range> )    
        .def("__ne__", &__ne__<cv::Range, cv::Range> )    
        .def("__eq__", &__eq__<cv::Range, cv::Range> )    
        .def("__add__", &__add__<cv::Range, int> )    
        .def("__sub__", &__sub__<cv::Range, int> )    
        .def("__radd__", &__radd__<int, cv::Range> );

    { //::cv::Vec< double, 4 >
        typedef bp::class_< cv::Vec< double, 4 > > Vec4d_exposer_t;
        Vec4d_exposer_t Vec4d_exposer = Vec4d_exposer_t( "Vec4d", bp::init< >() );
        bp::scope Vec4d_scope( Vec4d_exposer );
        Vec4d_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Vec< double, 4 > >() );
        bp::scope().attr("depth") = (int)cv::Vec<double, 4>::depth;
        bp::scope().attr("channels") = (int)cv::Vec<double, 4>::channels;
        bp::scope().attr("type") = (int)cv::Vec<double, 4>::type;
        Vec4d_exposer.def( bp::init< double >(( bp::arg("v0") )) );
        bp::implicitly_convertible< double, cv::Vec< double, 4 > >();
        Vec4d_exposer.def( bp::init< double, double >(( bp::arg("v0"), bp::arg("v1") )) );
        Vec4d_exposer.def( bp::init< double, double, double >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2") )) );
        Vec4d_exposer.def( bp::init< double, double, double, double >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3") )) );
        Vec4d_exposer.def( bp::init< double, double, double, double, double >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4") )) );
        Vec4d_exposer.def( bp::init< double, double, double, double, double, double >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5") )) );
        Vec4d_exposer.def( bp::init< double, double, double, double, double, double, double >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6") )) );
        Vec4d_exposer.def( bp::init< double, double, double, double, double, double, double, double >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7") )) );
        Vec4d_exposer.def( bp::init< double, double, double, double, double, double, double, double, double >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8") )) );
        Vec4d_exposer.def( bp::init< double, double, double, double, double, double, double, double, double, double >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8"), bp::arg("v9") )) );
        Vec4d_exposer.def( bp::init< cv::Vec< double, 4 > const & >(( bp::arg("v") )) );
        { //::cv::Vec< double, 4 >::all
        
            typedef cv::Vec< double, 4 > exported_class_t;
            typedef ::cv::Vec< double, 4 > ( *all_function_type )( double );
            
            Vec4d_exposer.def( 
                "all"
                , all_function_type( &::cv::Vec< double, 4 >::all )
                , ( bp::arg("alpha") ) );
        
        }
        { //::cv::Vec< double, 4 >::cross
        
            typedef cv::Vec< double, 4 > exported_class_t;
            typedef ::cv::Vec< double, 4 > ( exported_class_t::*cross_function_type )( ::cv::Vec< double, 4 > const & ) const;
            
            Vec4d_exposer.def( 
                "cross"
                , cross_function_type( &::cv::Vec< double, 4 >::cross )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< double, 4 >::ddot
        
            typedef cv::Vec< double, 4 > exported_class_t;
            typedef double ( exported_class_t::*ddot_function_type )( ::cv::Vec< double, 4 > const & ) const;
            
            Vec4d_exposer.def( 
                "ddot"
                , ddot_function_type( &::cv::Vec< double, 4 >::ddot )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< double, 4 >::dot
        
            typedef cv::Vec< double, 4 > exported_class_t;
            typedef double ( exported_class_t::*dot_function_type )( ::cv::Vec< double, 4 > const & ) const;
            
            Vec4d_exposer.def( 
                "dot"
                , dot_function_type( &::cv::Vec< double, 4 >::dot )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< double, 4 >::operator[]
        
            typedef cv::Vec< double, 4 > exported_class_t;
            typedef double ( exported_class_t::*__getitem___function_type )( int ) const;
            
            Vec4d_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< double, 4 >::operator[] )
                , ( bp::arg("i") )
                , "\nWrapped function:"
    "\n    operator[]" );
        
        }
        { //::cv::Vec< double, 4 >::operator[]
        
            typedef cv::Vec< double, 4 > exported_class_t;
            typedef double & ( exported_class_t::*__getitem___function_type )( int ) ;
            
            Vec4d_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< double, 4 >::operator[] )
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_non_const_reference >()
                , "\nWrapped function:"
    "\n    operator[]" );
        
        }
        Vec4d_exposer.staticmethod( "all" );
        Vec4d_exposer.add_property("ndarray", &sdcpp::as_ndarray< cv::Vec<double,4> >);
        Vec4d_exposer.def("__iadd__", &__iadd__<cv::Vec4d, cv::Vec4b>, bp::return_self<>() );
        Vec4d_exposer.def("__isub__", &__isub__<cv::Vec4d, cv::Vec4b>, bp::return_self<>() );
        Vec4d_exposer.def("__iadd__", &__iadd__<cv::Vec4d, cv::Vec4s>, bp::return_self<>() );
        Vec4d_exposer.def("__isub__", &__isub__<cv::Vec4d, cv::Vec4s>, bp::return_self<>() );
        Vec4d_exposer.def("__iadd__", &__iadd__<cv::Vec4d, cv::Vec4w>, bp::return_self<>() );
        Vec4d_exposer.def("__isub__", &__isub__<cv::Vec4d, cv::Vec4w>, bp::return_self<>() );
        Vec4d_exposer.def("__iadd__", &__iadd__<cv::Vec4d, cv::Vec4i>, bp::return_self<>() );
        Vec4d_exposer.def("__isub__", &__isub__<cv::Vec4d, cv::Vec4i>, bp::return_self<>() );
        Vec4d_exposer.def("__iadd__", &__iadd__<cv::Vec4d, cv::Vec4f>, bp::return_self<>() );
        Vec4d_exposer.def("__isub__", &__isub__<cv::Vec4d, cv::Vec4f>, bp::return_self<>() );
        Vec4d_exposer.def("__iadd__", &__iadd__<cv::Vec4d, cv::Vec4d>, bp::return_self<>() );
        Vec4d_exposer.def("__isub__", &__isub__<cv::Vec4d, cv::Vec4d>, bp::return_self<>() );
        Vec4d_exposer.def("__add__", &__add__<cv::Vec4d, cv::Vec4d> );
        Vec4d_exposer.def("__sub__", &__sub__<cv::Vec4d, cv::Vec4d> );
        Vec4d_exposer.def("__eq__", &__eq__<cv::Vec4d, cv::Vec4d> );
        Vec4d_exposer.def("__ne__", &__ne__<cv::Vec4d, cv::Vec4d> );
        Vec4d_exposer.def("__imul__", &__imul__<cv::Vec4d, double>, bp::return_self<>() );
        Vec4d_exposer.def("__mul__", &__mul__<cv::Vec4d, double> );
        Vec4d_exposer.def("__rmul__", &__rmul__<double, cv::Vec4d> );
        Vec4d_exposer.def("__neg__", &__neg__<cv::Vec4d> );
    }

    { //::cv::Scalar_< double >
        typedef bp::class_< cv::Scalar_< double >, bp::bases< cv::Vec< double, 4 > > > Scalar_exposer_t;
        Scalar_exposer_t Scalar_exposer = Scalar_exposer_t( "Scalar", bp::init< >() );
        bp::scope Scalar_scope( Scalar_exposer );
        Scalar_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Scalar_< double > >() );
        Scalar_exposer.def( bp::init< double, double, bp::optional< double, double > >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2")=0, bp::arg("v3")=0 )) );
        Scalar_exposer.def( bp::init< double >(( bp::arg("v0") )) );
        bp::implicitly_convertible< double, cv::Scalar_< double > >();
        { //::cv::Scalar_< double >::all
        
            typedef cv::Scalar_< double > exported_class_t;
            typedef ::cv::Scalar_< double > ( *all_function_type )( double );
            
            Scalar_exposer.def( 
                "all"
                , all_function_type( &::cv::Scalar_< double >::all )
                , ( bp::arg("v0") ) );
        
        }
        { //::cv::Scalar_< double >::mul
        
            typedef cv::Scalar_< double > exported_class_t;
            typedef ::cv::Scalar_< double > ( exported_class_t::*mul_function_type )( ::cv::Scalar_< double > const &,double ) const;
            
            Scalar_exposer.def( 
                "mul"
                , mul_function_type( &::cv::Scalar_< double >::mul )
                , ( bp::arg("t"), bp::arg("scale")=1 ) );
        
        }
        Scalar_exposer.staticmethod( "all" );
        Scalar_exposer.add_property("ndarray", &sdcpp::as_ndarray< cv::Scalar_<double> >);
        Scalar_exposer.def("__iadd__", &__iadd__<cv::Scalar, cv::Scalar >, bp::return_self<>() );
        Scalar_exposer.def("__isub__", &__isub__<cv::Scalar, cv::Scalar >, bp::return_self<>() );
        Scalar_exposer.def("__imul__", &__imul__<cv::Scalar, double >, bp::return_self<>() );
        Scalar_exposer.def("__add__", &__add__<cv::Scalar, cv::Scalar> );
        Scalar_exposer.def("__sub__", &__sub__<cv::Scalar, cv::Scalar> );
        Scalar_exposer.def("__ne__", &__ne__<cv::Scalar, cv::Scalar> );
        Scalar_exposer.def("__eq__", &__eq__<cv::Scalar, cv::Scalar> );
        Scalar_exposer.def("__mul__", &__mul__<cv::Scalar, double> );
        Scalar_exposer.def("__rmul__", &__rmul__<double, cv::Scalar> );
        Scalar_exposer.def("__neg__", &__neg__<cv::Scalar> );
    }

    { //::cv::Vec< double, 2 >
        typedef bp::class_< cv::Vec< double, 2 > > Vec2d_exposer_t;
        Vec2d_exposer_t Vec2d_exposer = Vec2d_exposer_t( "Vec2d", bp::init< >() );
        bp::scope Vec2d_scope( Vec2d_exposer );
        Vec2d_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Vec< double, 2 > >() );
        bp::scope().attr("depth") = (int)cv::Vec<double, 2>::depth;
        bp::scope().attr("channels") = (int)cv::Vec<double, 2>::channels;
        bp::scope().attr("type") = (int)cv::Vec<double, 2>::type;
        Vec2d_exposer.def( bp::init< double >(( bp::arg("v0") )) );
        bp::implicitly_convertible< double, cv::Vec< double, 2 > >();
        Vec2d_exposer.def( bp::init< double, double >(( bp::arg("v0"), bp::arg("v1") )) );
        Vec2d_exposer.def( bp::init< double, double, double >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2") )) );
        Vec2d_exposer.def( bp::init< double, double, double, double >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3") )) );
        Vec2d_exposer.def( bp::init< double, double, double, double, double >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4") )) );
        Vec2d_exposer.def( bp::init< double, double, double, double, double, double >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5") )) );
        Vec2d_exposer.def( bp::init< double, double, double, double, double, double, double >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6") )) );
        Vec2d_exposer.def( bp::init< double, double, double, double, double, double, double, double >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7") )) );
        Vec2d_exposer.def( bp::init< double, double, double, double, double, double, double, double, double >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8") )) );
        Vec2d_exposer.def( bp::init< double, double, double, double, double, double, double, double, double, double >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8"), bp::arg("v9") )) );
        Vec2d_exposer.def( bp::init< cv::Vec< double, 2 > const & >(( bp::arg("v") )) );
        { //::cv::Vec< double, 2 >::all
        
            typedef cv::Vec< double, 2 > exported_class_t;
            typedef ::cv::Vec< double, 2 > ( *all_function_type )( double );
            
            Vec2d_exposer.def( 
                "all"
                , all_function_type( &::cv::Vec< double, 2 >::all )
                , ( bp::arg("alpha") ) );
        
        }
        { //::cv::Vec< double, 2 >::cross
        
            typedef cv::Vec< double, 2 > exported_class_t;
            typedef ::cv::Vec< double, 2 > ( exported_class_t::*cross_function_type )( ::cv::Vec< double, 2 > const & ) const;
            
            Vec2d_exposer.def( 
                "cross"
                , cross_function_type( &::cv::Vec< double, 2 >::cross )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< double, 2 >::ddot
        
            typedef cv::Vec< double, 2 > exported_class_t;
            typedef double ( exported_class_t::*ddot_function_type )( ::cv::Vec< double, 2 > const & ) const;
            
            Vec2d_exposer.def( 
                "ddot"
                , ddot_function_type( &::cv::Vec< double, 2 >::ddot )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< double, 2 >::dot
        
            typedef cv::Vec< double, 2 > exported_class_t;
            typedef double ( exported_class_t::*dot_function_type )( ::cv::Vec< double, 2 > const & ) const;
            
            Vec2d_exposer.def( 
                "dot"
                , dot_function_type( &::cv::Vec< double, 2 >::dot )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< double, 2 >::operator[]
        
            typedef cv::Vec< double, 2 > exported_class_t;
            typedef double ( exported_class_t::*__getitem___function_type )( int ) const;
            
            Vec2d_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< double, 2 >::operator[] )
                , ( bp::arg("i") )
                , "\nWrapped function:"
    "\n    operator[]" );
        
        }
        { //::cv::Vec< double, 2 >::operator[]
        
            typedef cv::Vec< double, 2 > exported_class_t;
            typedef double & ( exported_class_t::*__getitem___function_type )( int ) ;
            
            Vec2d_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< double, 2 >::operator[] )
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_non_const_reference >()
                , "\nWrapped function:"
    "\n    operator[]" );
        
        }
        Vec2d_exposer.staticmethod( "all" );
        Vec2d_exposer.add_property("ndarray", &sdcpp::as_ndarray< cv::Vec<double,2> >);
        Vec2d_exposer.def("__iadd__", &__iadd__<cv::Vec2d, cv::Vec2b>, bp::return_self<>() );
        Vec2d_exposer.def("__isub__", &__isub__<cv::Vec2d, cv::Vec2b>, bp::return_self<>() );
        Vec2d_exposer.def("__iadd__", &__iadd__<cv::Vec2d, cv::Vec2s>, bp::return_self<>() );
        Vec2d_exposer.def("__isub__", &__isub__<cv::Vec2d, cv::Vec2s>, bp::return_self<>() );
        Vec2d_exposer.def("__iadd__", &__iadd__<cv::Vec2d, cv::Vec2w>, bp::return_self<>() );
        Vec2d_exposer.def("__isub__", &__isub__<cv::Vec2d, cv::Vec2w>, bp::return_self<>() );
        Vec2d_exposer.def("__iadd__", &__iadd__<cv::Vec2d, cv::Vec2i>, bp::return_self<>() );
        Vec2d_exposer.def("__isub__", &__isub__<cv::Vec2d, cv::Vec2i>, bp::return_self<>() );
        Vec2d_exposer.def("__iadd__", &__iadd__<cv::Vec2d, cv::Vec2f>, bp::return_self<>() );
        Vec2d_exposer.def("__isub__", &__isub__<cv::Vec2d, cv::Vec2f>, bp::return_self<>() );
        Vec2d_exposer.def("__iadd__", &__iadd__<cv::Vec2d, cv::Vec2d>, bp::return_self<>() );
        Vec2d_exposer.def("__isub__", &__isub__<cv::Vec2d, cv::Vec2d>, bp::return_self<>() );
        Vec2d_exposer.def("__add__", &__add__<cv::Vec2d, cv::Vec2d> );
        Vec2d_exposer.def("__sub__", &__sub__<cv::Vec2d, cv::Vec2d> );
        Vec2d_exposer.def("__eq__", &__eq__<cv::Vec2d, cv::Vec2d> );
        Vec2d_exposer.def("__ne__", &__ne__<cv::Vec2d, cv::Vec2d> );
        Vec2d_exposer.def("__imul__", &__imul__<cv::Vec2d, double>, bp::return_self<>() );
        Vec2d_exposer.def("__mul__", &__mul__<cv::Vec2d, double> );
        Vec2d_exposer.def("__rmul__", &__rmul__<double, cv::Vec2d> );
        Vec2d_exposer.def("__neg__", &__neg__<cv::Vec2d> );
    }

    { //::cv::Vec< double, 3 >
        typedef bp::class_< cv::Vec< double, 3 > > Vec3d_exposer_t;
        Vec3d_exposer_t Vec3d_exposer = Vec3d_exposer_t( "Vec3d", bp::init< >() );
        bp::scope Vec3d_scope( Vec3d_exposer );
        Vec3d_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Vec< double, 3 > >() );
        bp::scope().attr("depth") = (int)cv::Vec<double, 3>::depth;
        bp::scope().attr("channels") = (int)cv::Vec<double, 3>::channels;
        bp::scope().attr("type") = (int)cv::Vec<double, 3>::type;
        Vec3d_exposer.def( bp::init< double >(( bp::arg("v0") )) );
        bp::implicitly_convertible< double, cv::Vec< double, 3 > >();
        Vec3d_exposer.def( bp::init< double, double >(( bp::arg("v0"), bp::arg("v1") )) );
        Vec3d_exposer.def( bp::init< double, double, double >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2") )) );
        Vec3d_exposer.def( bp::init< double, double, double, double >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3") )) );
        Vec3d_exposer.def( bp::init< double, double, double, double, double >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4") )) );
        Vec3d_exposer.def( bp::init< double, double, double, double, double, double >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5") )) );
        Vec3d_exposer.def( bp::init< double, double, double, double, double, double, double >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6") )) );
        Vec3d_exposer.def( bp::init< double, double, double, double, double, double, double, double >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7") )) );
        Vec3d_exposer.def( bp::init< double, double, double, double, double, double, double, double, double >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8") )) );
        Vec3d_exposer.def( bp::init< double, double, double, double, double, double, double, double, double, double >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8"), bp::arg("v9") )) );
        Vec3d_exposer.def( bp::init< cv::Vec< double, 3 > const & >(( bp::arg("v") )) );
        { //::cv::Vec< double, 3 >::all
        
            typedef cv::Vec< double, 3 > exported_class_t;
            typedef ::cv::Vec< double, 3 > ( *all_function_type )( double );
            
            Vec3d_exposer.def( 
                "all"
                , all_function_type( &::cv::Vec< double, 3 >::all )
                , ( bp::arg("alpha") ) );
        
        }
        { //::cv::Vec< double, 3 >::cross
        
            typedef cv::Vec< double, 3 > exported_class_t;
            typedef ::cv::Vec< double, 3 > ( exported_class_t::*cross_function_type )( ::cv::Vec< double, 3 > const & ) const;
            
            Vec3d_exposer.def( 
                "cross"
                , cross_function_type( &::cv::Vec< double, 3 >::cross )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< double, 3 >::ddot
        
            typedef cv::Vec< double, 3 > exported_class_t;
            typedef double ( exported_class_t::*ddot_function_type )( ::cv::Vec< double, 3 > const & ) const;
            
            Vec3d_exposer.def( 
                "ddot"
                , ddot_function_type( &::cv::Vec< double, 3 >::ddot )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< double, 3 >::dot
        
            typedef cv::Vec< double, 3 > exported_class_t;
            typedef double ( exported_class_t::*dot_function_type )( ::cv::Vec< double, 3 > const & ) const;
            
            Vec3d_exposer.def( 
                "dot"
                , dot_function_type( &::cv::Vec< double, 3 >::dot )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< double, 3 >::operator[]
        
            typedef cv::Vec< double, 3 > exported_class_t;
            typedef double ( exported_class_t::*__getitem___function_type )( int ) const;
            
            Vec3d_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< double, 3 >::operator[] )
                , ( bp::arg("i") )
                , "\nWrapped function:"
    "\n    operator[]" );
        
        }
        { //::cv::Vec< double, 3 >::operator[]
        
            typedef cv::Vec< double, 3 > exported_class_t;
            typedef double & ( exported_class_t::*__getitem___function_type )( int ) ;
            
            Vec3d_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< double, 3 >::operator[] )
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_non_const_reference >()
                , "\nWrapped function:"
    "\n    operator[]" );
        
        }
        Vec3d_exposer.staticmethod( "all" );
        Vec3d_exposer.add_property("ndarray", &sdcpp::as_ndarray< cv::Vec<double,3> >);
        Vec3d_exposer.def("__iadd__", &__iadd__<cv::Vec3d, cv::Vec3b>, bp::return_self<>() );
        Vec3d_exposer.def("__isub__", &__isub__<cv::Vec3d, cv::Vec3b>, bp::return_self<>() );
        Vec3d_exposer.def("__iadd__", &__iadd__<cv::Vec3d, cv::Vec3s>, bp::return_self<>() );
        Vec3d_exposer.def("__isub__", &__isub__<cv::Vec3d, cv::Vec3s>, bp::return_self<>() );
        Vec3d_exposer.def("__iadd__", &__iadd__<cv::Vec3d, cv::Vec3w>, bp::return_self<>() );
        Vec3d_exposer.def("__isub__", &__isub__<cv::Vec3d, cv::Vec3w>, bp::return_self<>() );
        Vec3d_exposer.def("__iadd__", &__iadd__<cv::Vec3d, cv::Vec3i>, bp::return_self<>() );
        Vec3d_exposer.def("__isub__", &__isub__<cv::Vec3d, cv::Vec3i>, bp::return_self<>() );
        Vec3d_exposer.def("__iadd__", &__iadd__<cv::Vec3d, cv::Vec3f>, bp::return_self<>() );
        Vec3d_exposer.def("__isub__", &__isub__<cv::Vec3d, cv::Vec3f>, bp::return_self<>() );
        Vec3d_exposer.def("__iadd__", &__iadd__<cv::Vec3d, cv::Vec3d>, bp::return_self<>() );
        Vec3d_exposer.def("__isub__", &__isub__<cv::Vec3d, cv::Vec3d>, bp::return_self<>() );
        Vec3d_exposer.def("__add__", &__add__<cv::Vec3d, cv::Vec3d> );
        Vec3d_exposer.def("__sub__", &__sub__<cv::Vec3d, cv::Vec3d> );
        Vec3d_exposer.def("__eq__", &__eq__<cv::Vec3d, cv::Vec3d> );
        Vec3d_exposer.def("__ne__", &__ne__<cv::Vec3d, cv::Vec3d> );
        Vec3d_exposer.def("__imul__", &__imul__<cv::Vec3d, double>, bp::return_self<>() );
        Vec3d_exposer.def("__mul__", &__mul__<cv::Vec3d, double> );
        Vec3d_exposer.def("__rmul__", &__rmul__<double, cv::Vec3d> );
        Vec3d_exposer.def("__neg__", &__neg__<cv::Vec3d> );
    }

}
