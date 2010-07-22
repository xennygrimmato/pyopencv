// This file has been generated by Py++.

#include "boost/python.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "opencv_headers.hpp"
#include "vector_CascadeClassifier_DTreeNode.pypp.hpp"

namespace bp = boost::python;

static inline void resize(::std::vector< cv::CascadeClassifier::DTreeNode > &inst, size_t num) { inst.resize(num); }

void register_vector_CascadeClassifier_DTreeNode_class(){

    { //::std::vector< cv::CascadeClassifier::DTreeNode >
        typedef bp::class_< std::vector< cv::CascadeClassifier::DTreeNode > > vector_CascadeClassifier_DTreeNode_exposer_t;
        vector_CascadeClassifier_DTreeNode_exposer_t vector_CascadeClassifier_DTreeNode_exposer = vector_CascadeClassifier_DTreeNode_exposer_t( "vector_CascadeClassifier_DTreeNode" );
        bp::scope vector_CascadeClassifier_DTreeNode_scope( vector_CascadeClassifier_DTreeNode_exposer );
        //WARNING: the next line of code will not compile, because "cv::CascadeClassifier::DTreeNode" does not have operator== !
        vector_CascadeClassifier_DTreeNode_exposer.def( bp::vector_indexing_suite< ::std::vector< cv::CascadeClassifier::DTreeNode > >() );
        vector_CascadeClassifier_DTreeNode_exposer.def("resize", &::resize, ( bp::arg("num") ));
    }

}