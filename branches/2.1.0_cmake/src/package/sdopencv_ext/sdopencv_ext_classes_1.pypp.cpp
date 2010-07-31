// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "sdopencv_wrapper.hpp"
#include "sdopencv_ext_classes_1.pypp.hpp"

namespace bp = boost::python;

void register_classes_1(){

    { //::sdopencv::DifferentialImage
        typedef bp::class_< sdopencv::DifferentialImage > DifferentialImage_exposer_t;
        DifferentialImage_exposer_t DifferentialImage_exposer = DifferentialImage_exposer_t( "DifferentialImage", bp::init< bp::optional< int, int, double, double, int > >(( bp::arg("max_order")=(int)(2), bp::arg("ksize")=(int)(3), bp::arg("scale")=1, bp::arg("delta")=0, bp::arg("borderType")=(int)(4) )) );
        bp::scope DifferentialImage_scope( DifferentialImage_exposer );
        DifferentialImage_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< sdopencv::DifferentialImage >() );
        bp::implicitly_convertible< int, sdopencv::DifferentialImage >();
        { //::sdopencv::DifferentialImage::curvature
        
            typedef void ( ::sdopencv::DifferentialImage::*curvature_function_type )( ::cv::Mat & ) ;
            
            DifferentialImage_exposer.def( 
                "curvature"
                , curvature_function_type( &::sdopencv::DifferentialImage::curvature )
                , ( bp::arg("output") ) );
        
        }
        { //::sdopencv::DifferentialImage::gradient
        
            typedef void ( ::sdopencv::DifferentialImage::*gradient_function_type )( ::cv::Mat & ) ;
            
            DifferentialImage_exposer.def( 
                "gradient"
                , gradient_function_type( &::sdopencv::DifferentialImage::gradient )
                , ( bp::arg("output") ) );
        
        }
        { //::sdopencv::DifferentialImage::gradient_magnitude
        
            typedef void ( ::sdopencv::DifferentialImage::*gradient_magnitude_function_type )( ::cv::Mat & ) ;
            
            DifferentialImage_exposer.def( 
                "gradient_magnitude"
                , gradient_magnitude_function_type( &::sdopencv::DifferentialImage::gradient_magnitude )
                , ( bp::arg("output") ) );
        
        }
        { //::sdopencv::DifferentialImage::gradient_magnitude_squared
        
            typedef void ( ::sdopencv::DifferentialImage::*gradient_magnitude_squared_function_type )( ::cv::Mat & ) ;
            
            DifferentialImage_exposer.def( 
                "gradient_magnitude_squared"
                , gradient_magnitude_squared_function_type( &::sdopencv::DifferentialImage::gradient_magnitude_squared )
                , ( bp::arg("output") ) );
        
        }
        { //::sdopencv::DifferentialImage::gradient_orientation
        
            typedef void ( ::sdopencv::DifferentialImage::*gradient_orientation_function_type )( ::cv::Mat & ) ;
            
            DifferentialImage_exposer.def( 
                "gradient_orientation"
                , gradient_orientation_function_type( &::sdopencv::DifferentialImage::gradient_orientation )
                , ( bp::arg("output") ) );
        
        }
        { //::sdopencv::DifferentialImage::gradient_polar
        
            typedef void ( ::sdopencv::DifferentialImage::*gradient_polar_function_type )( ::cv::Mat & ) ;
            
            DifferentialImage_exposer.def( 
                "gradient_polar"
                , gradient_polar_function_type( &::sdopencv::DifferentialImage::gradient_polar )
                , ( bp::arg("output") ) );
        
        }
        { //::sdopencv::DifferentialImage::hessian
        
            typedef void ( ::sdopencv::DifferentialImage::*hessian_function_type )( ::cv::Mat & ) ;
            
            DifferentialImage_exposer.def( 
                "hessian"
                , hessian_function_type( &::sdopencv::DifferentialImage::hessian )
                , ( bp::arg("output") ) );
        
        }
        { //::sdopencv::DifferentialImage::laplacian
        
            typedef void ( ::sdopencv::DifferentialImage::*laplacian_function_type )( ::cv::Mat & ) ;
            
            DifferentialImage_exposer.def( 
                "laplacian"
                , laplacian_function_type( &::sdopencv::DifferentialImage::laplacian )
                , ( bp::arg("output") ) );
        
        }
        { //::sdopencv::DifferentialImage::operator()
        
            typedef void ( ::sdopencv::DifferentialImage::*__call___function_type )( ::cv::Mat const & ) ;
            
            DifferentialImage_exposer.def( 
                "__call__"
                , __call___function_type( &::sdopencv::DifferentialImage::operator() )
                , ( bp::arg("image") )
                , "\nWrapped function:"
    "\n    operator()" );
        
        }
        { //::sdopencv::DifferentialImage::undirected_gradient_orientation
        
            typedef void ( ::sdopencv::DifferentialImage::*undirected_gradient_orientation_function_type )( ::cv::Mat & ) ;
            
            DifferentialImage_exposer.def( 
                "undirected_gradient_orientation"
                , undirected_gradient_orientation_function_type( &::sdopencv::DifferentialImage::undirected_gradient_orientation )
                , ( bp::arg("output") ) );
        
        }
        DifferentialImage_exposer.def_readwrite( "Ix", &sdopencv::DifferentialImage::Ix );
        DifferentialImage_exposer.def_readwrite( "Ixx", &sdopencv::DifferentialImage::Ixx );
        DifferentialImage_exposer.def_readwrite( "Ixy", &sdopencv::DifferentialImage::Ixy );
        DifferentialImage_exposer.def_readwrite( "Iy", &sdopencv::DifferentialImage::Iy );
        DifferentialImage_exposer.def_readwrite( "Iyy", &sdopencv::DifferentialImage::Iyy );
    }

    bp::class_< sdopencv::IntegralHistogram >( "IntegralHistogram", bp::init< int, std::vector< float > const &, bp::optional< bool > >(( bp::arg("histSize"), bp::arg("ranges"), bp::arg("uniform")=(bool)(true) )) )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< sdopencv::IntegralHistogram >() )    
        .def( 
            "calcHist"
            , (void ( sdopencv::IntegralHistogram::* )( ::cv::Rect,::std::vector< int > & ) )( &::sdopencv::IntegralHistogram::calcHist )
            , ( bp::arg("rect"), bp::arg("out_hist") ) )    
        .def( 
            "get_index"
            , (int ( sdopencv::IntegralHistogram::* )( float ) )( &::sdopencv::IntegralHistogram::get_index )
            , ( bp::arg("value") ) )    
        .def( 
            "__call__"
            , (void ( sdopencv::IntegralHistogram::* )( ::cv::Mat const & ) )( &::sdopencv::IntegralHistogram::operator() )
            , ( bp::arg("image") )
            , "\nWrapped function:"
    "\n    operator()" );

    { //::sdopencv::IntegralImage
        typedef bp::class_< sdopencv::IntegralImage > IntegralImage_exposer_t;
        IntegralImage_exposer_t IntegralImage_exposer = IntegralImage_exposer_t( "IntegralImage", bp::init< bp::optional< int > >(( bp::arg("sdepth")=(int)(6) )) );
        bp::scope IntegralImage_scope( IntegralImage_exposer );
        IntegralImage_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< sdopencv::IntegralImage >() );
        bp::implicitly_convertible< int, sdopencv::IntegralImage >();
        { //::sdopencv::IntegralImage::adjust_rect
        
            typedef bool ( ::sdopencv::IntegralImage::*adjust_rect_function_type )( ::cv::Rect & ) ;
            
            IntegralImage_exposer.def( 
                "adjust_rect"
                , adjust_rect_function_type( &::sdopencv::IntegralImage::adjust_rect )
                , ( bp::arg("rect") ) );
        
        }
        { //::sdopencv::IntegralImage::operator()
        
            typedef void ( ::sdopencv::IntegralImage::*__call___function_type )( ::cv::Mat const & ) ;
            
            IntegralImage_exposer.def( 
                "__call__"
                , __call___function_type( &::sdopencv::IntegralImage::operator() )
                , ( bp::arg("image") )
                , "\nWrapped function:"
    "\n    operator()" );
        
        }
        { //::sdopencv::IntegralImage::sum
        
            typedef ::cv::Scalar ( ::sdopencv::IntegralImage::*sum_function_type )( ::cv::Rect ) ;
            
            IntegralImage_exposer.def( 
                "sum"
                , sum_function_type( &::sdopencv::IntegralImage::sum )
                , ( bp::arg("rect") ) );
        
        }
        IntegralImage_exposer.def_readwrite( "image_size", &sdopencv::IntegralImage::image_size );
        IntegralImage_exposer.def_readwrite( "integral", &sdopencv::IntegralImage::integral );
        IntegralImage_exposer.def_readwrite( "sdepth", &sdopencv::IntegralImage::sdepth );
    }

    { //::sdopencv_dummy_struct
        typedef bp::class_< sdopencv_dummy_struct > __sdopencv_dummy_struct_exposer_t;
        __sdopencv_dummy_struct_exposer_t __sdopencv_dummy_struct_exposer = __sdopencv_dummy_struct_exposer_t( "__sdopencv_dummy_struct" );
        bp::scope __sdopencv_dummy_struct_scope( __sdopencv_dummy_struct_exposer );
        __sdopencv_dummy_struct_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< sdopencv_dummy_struct >() );
        bp::class_< sdopencv_dummy_struct::dummy_struct2 >( "dummy_struct2" )    
            .add_property( "this", pyplus_conv::make_addressof_inst_getter< sdopencv_dummy_struct::dummy_struct2 >() );
        __sdopencv_dummy_struct_exposer.setattr("v0", 0);
    }
    {;
    }

}