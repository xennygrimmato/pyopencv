// This file has been generated by Py++.

#include "boost/python.hpp"
#include "with_ownershiplevel_postcall.hpp"
#include "cvaux_wrapper.hpp"
#include "cvaux_ext_free_functions.pypp.hpp"

namespace bp = boost::python;

void register_free_functions(){

    { //::cvBlob
    
        typedef ::CvBlob ( *blob_function_type )( float,float,float,float );
        
        bp::def( 
            "blob"
            , blob_function_type( &::cvBlob )
            , ( bp::arg("x"), bp::arg("y"), bp::arg("w"), bp::arg("h") )
            , "\nWrapped function:"
    "\n    cvBlob" );
    
    }

    { //::cvConDensUpdateByTime
    
        typedef void ( *conDensUpdateByTime_function_type )( ::CvConDensation * );
        
        bp::def( 
            "conDensUpdateByTime"
            , conDensUpdateByTime_function_type( &::cvConDensUpdateByTime )
            , ( bp::arg("condens") )
            , "\nWrapped function:"
    "\n    cvConDensUpdateByTime" );
    
    }

    { //::cvCreateBlobDetectorCC
    
        typedef ::CvBlobDetector * ( *createBlobDetectorCC_function_type )(  );
        
        bp::def( 
            "createBlobDetectorCC"
            , createBlobDetectorCC_function_type( &::cvCreateBlobDetectorCC )
            , bp::with_ownershiplevel_postcall< 1, bp::return_value_policy< bp::reference_existing_object > >()
            , "\nWrapped function:"
    "\n    cvCreateBlobDetectorCC" );
    
    }

    { //::cvCreateBlobDetectorSimple
    
        typedef ::CvBlobDetector * ( *createBlobDetectorSimple_function_type )(  );
        
        bp::def( 
            "createBlobDetectorSimple"
            , createBlobDetectorSimple_function_type( &::cvCreateBlobDetectorSimple )
            , bp::with_ownershiplevel_postcall< 1, bp::return_value_policy< bp::reference_existing_object > >()
            , "\nWrapped function:"
    "\n    cvCreateBlobDetectorSimple" );
    
    }

    { //::cvCreateBlobTrackerCC
    
        typedef ::CvBlobTracker * ( *createBlobTrackerCC_function_type )(  );
        
        bp::def( 
            "createBlobTrackerCC"
            , createBlobTrackerCC_function_type( &::cvCreateBlobTrackerCC )
            , bp::with_ownershiplevel_postcall< 1, bp::return_value_policy< bp::reference_existing_object > >()
            , "\nWrapped function:"
    "\n    cvCreateBlobTrackerCC" );
    
    }

    { //::cvCreateBlobTrackerCCMSPF
    
        typedef ::CvBlobTracker * ( *createBlobTrackerCCMSPF_function_type )(  );
        
        bp::def( 
            "createBlobTrackerCCMSPF"
            , createBlobTrackerCCMSPF_function_type( &::cvCreateBlobTrackerCCMSPF )
            , bp::with_ownershiplevel_postcall< 1, bp::return_value_policy< bp::reference_existing_object > >()
            , "\nWrapped function:"
    "\n    cvCreateBlobTrackerCCMSPF" );
    
    }

    { //::cvCreateBlobTrackerMS
    
        typedef ::CvBlobTracker * ( *createBlobTrackerMS_function_type )(  );
        
        bp::def( 
            "createBlobTrackerMS"
            , createBlobTrackerMS_function_type( &::cvCreateBlobTrackerMS )
            , bp::with_ownershiplevel_postcall< 1, bp::return_value_policy< bp::reference_existing_object > >()
            , "\nWrapped function:"
    "\n    cvCreateBlobTrackerMS" );
    
    }

    { //::cvCreateBlobTrackerMSFG
    
        typedef ::CvBlobTracker * ( *createBlobTrackerMSFG_function_type )(  );
        
        bp::def( 
            "createBlobTrackerMSFG"
            , createBlobTrackerMSFG_function_type( &::cvCreateBlobTrackerMSFG )
            , bp::with_ownershiplevel_postcall< 1, bp::return_value_policy< bp::reference_existing_object > >()
            , "\nWrapped function:"
    "\n    cvCreateBlobTrackerMSFG" );
    
    }

    { //::cvCreateBlobTrackerMSFGS
    
        typedef ::CvBlobTracker * ( *createBlobTrackerMSFGS_function_type )(  );
        
        bp::def( 
            "createBlobTrackerMSFGS"
            , createBlobTrackerMSFGS_function_type( &::cvCreateBlobTrackerMSFGS )
            , bp::with_ownershiplevel_postcall< 1, bp::return_value_policy< bp::reference_existing_object > >()
            , "\nWrapped function:"
    "\n    cvCreateBlobTrackerMSFGS" );
    
    }

    { //::cvCreateBlobTrackerMSPF
    
        typedef ::CvBlobTracker * ( *createBlobTrackerMSPF_function_type )(  );
        
        bp::def( 
            "createBlobTrackerMSPF"
            , createBlobTrackerMSPF_function_type( &::cvCreateBlobTrackerMSPF )
            , bp::with_ownershiplevel_postcall< 1, bp::return_value_policy< bp::reference_existing_object > >()
            , "\nWrapped function:"
    "\n    cvCreateBlobTrackerMSPF" );
    
    }

    { //::cvCreateConDensation
    
        typedef ::CvConDensation * ( *createConDensation_function_type )( int,int,int );
        
        bp::def( 
            "createConDensation"
            , createConDensation_function_type( &::cvCreateConDensation )
            , ( bp::arg("dynam_params"), bp::arg("measure_params"), bp::arg("sample_count") )
            , bp::with_ownershiplevel_postcall< 1, bp::return_value_policy< bp::reference_existing_object > >()
            , "\nWrapped function:"
    "\n    cvCreateConDensation" );
    
    }

    { //::cvCreateModuleBlobTrackAnalysisHistP
    
        typedef ::CvBlobTrackAnalysis * ( *createModuleBlobTrackAnalysisHistP_function_type )(  );
        
        bp::def( 
            "createModuleBlobTrackAnalysisHistP"
            , createModuleBlobTrackAnalysisHistP_function_type( &::cvCreateModuleBlobTrackAnalysisHistP )
            , bp::return_value_policy< bp::reference_existing_object >()
            , "\nWrapped function:"
    "\n    cvCreateModuleBlobTrackAnalysisHistP" );
    
    }

    { //::cvCreateModuleBlobTrackAnalysisHistPV
    
        typedef ::CvBlobTrackAnalysis * ( *createModuleBlobTrackAnalysisHistPV_function_type )(  );
        
        bp::def( 
            "createModuleBlobTrackAnalysisHistPV"
            , createModuleBlobTrackAnalysisHistPV_function_type( &::cvCreateModuleBlobTrackAnalysisHistPV )
            , bp::return_value_policy< bp::reference_existing_object >()
            , "\nWrapped function:"
    "\n    cvCreateModuleBlobTrackAnalysisHistPV" );
    
    }

    { //::cvCreateModuleBlobTrackAnalysisHistPVS
    
        typedef ::CvBlobTrackAnalysis * ( *createModuleBlobTrackAnalysisHistPVS_function_type )(  );
        
        bp::def( 
            "createModuleBlobTrackAnalysisHistPVS"
            , createModuleBlobTrackAnalysisHistPVS_function_type( &::cvCreateModuleBlobTrackAnalysisHistPVS )
            , bp::return_value_policy< bp::reference_existing_object >()
            , "\nWrapped function:"
    "\n    cvCreateModuleBlobTrackAnalysisHistPVS" );
    
    }

    { //::cvCreateModuleBlobTrackAnalysisHistSS
    
        typedef ::CvBlobTrackAnalysis * ( *createModuleBlobTrackAnalysisHistSS_function_type )(  );
        
        bp::def( 
            "createModuleBlobTrackAnalysisHistSS"
            , createModuleBlobTrackAnalysisHistSS_function_type( &::cvCreateModuleBlobTrackAnalysisHistSS )
            , bp::return_value_policy< bp::reference_existing_object >()
            , "\nWrapped function:"
    "\n    cvCreateModuleBlobTrackAnalysisHistSS" );
    
    }

    { //::cvCreateModuleBlobTrackAnalysisIOR
    
        typedef ::CvBlobTrackAnalysis * ( *createModuleBlobTrackAnalysisIOR_function_type )(  );
        
        bp::def( 
            "createModuleBlobTrackAnalysisIOR"
            , createModuleBlobTrackAnalysisIOR_function_type( &::cvCreateModuleBlobTrackAnalysisIOR )
            , bp::return_value_policy< bp::reference_existing_object >()
            , "\nWrapped function:"
    "\n    cvCreateModuleBlobTrackAnalysisIOR" );
    
    }

    { //::cvCreateModuleBlobTrackAnalysisTrackDist
    
        typedef ::CvBlobTrackAnalysis * ( *createModuleBlobTrackAnalysisTrackDist_function_type )(  );
        
        bp::def( 
            "createModuleBlobTrackAnalysisTrackDist"
            , createModuleBlobTrackAnalysisTrackDist_function_type( &::cvCreateModuleBlobTrackAnalysisTrackDist )
            , bp::return_value_policy< bp::reference_existing_object >()
            , "\nWrapped function:"
    "\n    cvCreateModuleBlobTrackAnalysisTrackDist" );
    
    }

    { //::cvCreateModuleBlobTrackGen1
    
        typedef ::CvBlobTrackGen * ( *createModuleBlobTrackGen1_function_type )(  );
        
        bp::def( 
            "createModuleBlobTrackGen1"
            , createModuleBlobTrackGen1_function_type( &::cvCreateModuleBlobTrackGen1 )
            , bp::with_ownershiplevel_postcall< 1, bp::return_value_policy< bp::reference_existing_object > >()
            , "\nWrapped function:"
    "\n    cvCreateModuleBlobTrackGen1" );
    
    }

    { //::cvCreateModuleBlobTrackGenYML
    
        typedef ::CvBlobTrackGen * ( *createModuleBlobTrackGenYML_function_type )(  );
        
        bp::def( 
            "createModuleBlobTrackGenYML"
            , createModuleBlobTrackGenYML_function_type( &::cvCreateModuleBlobTrackGenYML )
            , bp::with_ownershiplevel_postcall< 1, bp::return_value_policy< bp::reference_existing_object > >()
            , "\nWrapped function:"
    "\n    cvCreateModuleBlobTrackGenYML" );
    
    }

    { //::cvCreateModuleBlobTrackPostProcKalman
    
        typedef ::CvBlobTrackPostProc * ( *createModuleBlobTrackPostProcKalman_function_type )(  );
        
        bp::def( 
            "createModuleBlobTrackPostProcKalman"
            , createModuleBlobTrackPostProcKalman_function_type( &::cvCreateModuleBlobTrackPostProcKalman )
            , bp::return_value_policy< bp::reference_existing_object >()
            , "\nWrapped function:"
    "\n    cvCreateModuleBlobTrackPostProcKalman" );
    
    }

    { //::cvCreateModuleBlobTrackPostProcTimeAverExp
    
        typedef ::CvBlobTrackPostProc * ( *createModuleBlobTrackPostProcTimeAverExp_function_type )(  );
        
        bp::def( 
            "createModuleBlobTrackPostProcTimeAverExp"
            , createModuleBlobTrackPostProcTimeAverExp_function_type( &::cvCreateModuleBlobTrackPostProcTimeAverExp )
            , bp::return_value_policy< bp::reference_existing_object >()
            , "\nWrapped function:"
    "\n    cvCreateModuleBlobTrackPostProcTimeAverExp" );
    
    }

    { //::cvCreateModuleBlobTrackPostProcTimeAverRect
    
        typedef ::CvBlobTrackPostProc * ( *createModuleBlobTrackPostProcTimeAverRect_function_type )(  );
        
        bp::def( 
            "createModuleBlobTrackPostProcTimeAverRect"
            , createModuleBlobTrackPostProcTimeAverRect_function_type( &::cvCreateModuleBlobTrackPostProcTimeAverRect )
            , bp::return_value_policy< bp::reference_existing_object >()
            , "\nWrapped function:"
    "\n    cvCreateModuleBlobTrackPostProcTimeAverRect" );
    
    }

    { //::cvCreateModuleBlobTrackPredictKalman
    
        typedef ::CvBlobTrackPredictor * ( *createModuleBlobTrackPredictKalman_function_type )(  );
        
        bp::def( 
            "createModuleBlobTrackPredictKalman"
            , createModuleBlobTrackPredictKalman_function_type( &::cvCreateModuleBlobTrackPredictKalman )
            , bp::return_value_policy< bp::reference_existing_object >()
            , "\nWrapped function:"
    "\n    cvCreateModuleBlobTrackPredictKalman" );
    
    }

    { //::cvDetectedBlob
    
        typedef ::CvDetectedBlob ( *detectedBlob_function_type )( float,float,float,float,int,float );
        
        bp::def( 
            "detectedBlob"
            , detectedBlob_function_type( &::cvDetectedBlob )
            , ( bp::arg("x"), bp::arg("y"), bp::arg("w"), bp::arg("h"), bp::arg("ID")=(int)(0), bp::arg("response")=0.0f )
            , "\nWrapped function:"
    "\n    cvDetectedBlob" );
    
    }

    { //::cv::find4QuadCornerSubpix
    
        typedef bool ( *find4QuadCornerSubpix_function_type )( ::cv::Mat const &,::std::vector< cv::Point_<float> > &,::cv::Size );
        
        bp::def( 
            "find4QuadCornerSubpix"
            , find4QuadCornerSubpix_function_type( &::cv::find4QuadCornerSubpix )
            , ( bp::arg("img"), bp::arg("corners"), bp::arg("region_size") ) );
    
    }

}
