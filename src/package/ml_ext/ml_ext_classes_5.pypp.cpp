// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "opencv_converters.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "ml_wrapper.hpp"
#include "arrayobject.h"
#include "ndarray.hpp"
#include "ml_ext_classes_5.pypp.hpp"

namespace bp = boost::python;

struct CvEM_wrapper : CvEM, bp::wrapper< CvEM > {

    CvEM_wrapper(CvEM const & arg )
    : CvEM( arg )
      , bp::wrapper< CvEM >(){
        // copy constructor
        
    }

    CvEM_wrapper( )
    : CvEM( )
      , bp::wrapper< CvEM >(){
        // null constructor
    
    }

    CvEM_wrapper(::CvMat const * samples, ::CvMat const * sample_idx=0, ::CvEMParams params=::CvEMParams( ), ::CvMat * labels=0 )
    : CvEM( boost::python::ptr(samples), boost::python::ptr(sample_idx), params, boost::python::ptr(labels) )
      , bp::wrapper< CvEM >(){
        // constructor
    
    }

    CvEM_wrapper(::cv::Mat const & samples, ::cv::Mat const & sample_idx=cv::Mat(), ::CvEMParams params=::CvEMParams( ), ::cv::Mat * labels=0 )
    : CvEM( boost::ref(samples), boost::ref(sample_idx), params, boost::python::ptr(labels) )
      , bp::wrapper< CvEM >(){
        // constructor
    
    }

    virtual void clear(  ) {
        if( bp::override func_clear = this->get_override( "clear" ) )
            func_clear(  );
        else{
            this->CvEM::clear(  );
        }
    }
    
    void default_clear(  ) {
        CvEM::clear( );
    }

    virtual float predict( ::CvMat const * sample, ::CvMat * probs ) const  {
        namespace bpl = boost::python;
        if( bpl::override func_predict = this->get_override( "predict" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_predict.ptr(), sample, probs );
            return bpl::extract< float >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return CvEM::predict( boost::python::ptr(sample), boost::python::ptr(probs) );
        }
    }
    
    static boost::python::object default_predict_e2a6ccb3e80d0945b65e2adfc4d80129( ::CvEM const & inst, ::cv::Mat & sample, ::cv::Mat & probs ){
        float result;
        if( dynamic_cast< CvEM_wrapper const* >( boost::addressof( inst ) ) ){
            result = inst.::CvEM::predict(get_CvMat_ptr(sample), get_CvMat_ptr(probs));
        }
        else{
            result = inst.predict(get_CvMat_ptr(sample), get_CvMat_ptr(probs));
        }
        return bp::object( result );
    }

    virtual float predict( ::cv::Mat const & sample, ::cv::Mat * probs ) const  {
        if( bp::override func_predict = this->get_override( "predict" ) )
            return func_predict( boost::ref(sample), boost::python::ptr(probs) );
        else{
            return this->CvEM::predict( boost::ref(sample), boost::python::ptr(probs) );
        }
    }
    
    float default_predict( ::cv::Mat const & sample, ::cv::Mat * probs ) const  {
        return CvEM::predict( boost::ref(sample), boost::python::ptr(probs) );
    }

    virtual bool train( ::CvMat const * samples, ::CvMat const * sample_idx=0, ::CvEMParams params=::CvEMParams( ), ::CvMat * labels=0 ) {
        namespace bpl = boost::python;
        if( bpl::override func_train = this->get_override( "train" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_train.ptr(), samples, sample_idx, params, labels );
            return bpl::extract< bool >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return CvEM::train( boost::python::ptr(samples), boost::python::ptr(sample_idx), params, boost::python::ptr(labels) );
        }
    }
    
    static boost::python::object default_train_ad96ec9280c0f7571752ed3a0ca86d28( ::CvEM & inst, ::cv::Mat & samples, ::cv::Mat sample_idx=cv::Mat(), ::CvEMParams params=::CvEMParams( ), ::cv::Mat labels=cv::Mat() ){
        bool result;
        if( dynamic_cast< CvEM_wrapper * >( boost::addressof( inst ) ) ){
            result = inst.::CvEM::train(get_CvMat_ptr(samples), get_CvMat_ptr(sample_idx), params, get_CvMat_ptr(labels));
        }
        else{
            result = inst.train(get_CvMat_ptr(samples), get_CvMat_ptr(sample_idx), params, get_CvMat_ptr(labels));
        }
        return bp::object( result );
    }

    virtual bool train( ::cv::Mat const & samples, ::cv::Mat const & sample_idx=cv::Mat(), ::CvEMParams params=::CvEMParams( ), ::cv::Mat * labels=0 ) {
        if( bp::override func_train = this->get_override( "train" ) )
            return func_train( boost::ref(samples), boost::ref(sample_idx), params, boost::python::ptr(labels) );
        else{
            return this->CvEM::train( boost::ref(samples), boost::ref(sample_idx), params, boost::python::ptr(labels) );
        }
    }
    
    bool default_train( ::cv::Mat const & samples, ::cv::Mat const & sample_idx=cv::Mat(), ::CvEMParams params=::CvEMParams( ), ::cv::Mat * labels=0 ) {
        return CvEM::train( boost::ref(samples), boost::ref(sample_idx), params, boost::python::ptr(labels) );
    }

    virtual void load( char const * filename, char const * name=0 ) {
        if( bp::override func_load = this->get_override( "load" ) )
            func_load( filename, name );
        else{
            this->CvStatModel::load( filename, name );
        }
    }
    
    void default_load( char const * filename, char const * name=0 ) {
        CvStatModel::load( filename, name );
    }

    virtual void read( ::CvFileStorage * storage, ::CvFileNode * node ) {
        namespace bpl = boost::python;
        if( bpl::override func_read = this->get_override( "read" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_read.ptr(), storage, node );
        }
        else{
            CvStatModel::read( boost::python::ptr(storage), boost::python::ptr(node) );
        }
    }
    
    static void default_read( ::CvStatModel & inst, ::cv::FileStorage & storage, ::cv::FileNode & node ){
        if( dynamic_cast< CvEM_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvStatModel::read(storage.fs, *(node));
        }
        else{
            inst.read(storage.fs, *(node));
        }
    }

    virtual void save( char const * filename, char const * name=0 ) const  {
        if( bp::override func_save = this->get_override( "save" ) )
            func_save( filename, name );
        else{
            this->CvStatModel::save( filename, name );
        }
    }
    
    void default_save( char const * filename, char const * name=0 ) const  {
        CvStatModel::save( filename, name );
    }

    virtual void write( ::CvFileStorage * storage, char const * name ) const  {
        namespace bpl = boost::python;
        if( bpl::override func_write = this->get_override( "write" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_write.ptr(), storage, name );
        }
        else{
            CvStatModel::write( boost::python::ptr(storage), name );
        }
    }
    
    static void default_write( ::CvStatModel const & inst, ::cv::FileStorage & storage, char const * name ){
        if( dynamic_cast< CvEM_wrapper const* >( boost::addressof( inst ) ) ){
            inst.::CvStatModel::write(storage.fs, name);
        }
        else{
            inst.write(storage.fs, name);
        }
    }

};

struct CvERTreeTrainData_wrapper : CvERTreeTrainData, bp::wrapper< CvERTreeTrainData > {

    CvERTreeTrainData_wrapper(CvERTreeTrainData const & arg )
    : CvERTreeTrainData( arg )
      , bp::wrapper< CvERTreeTrainData >(){
        // copy constructor
        
    }

    CvERTreeTrainData_wrapper()
    : CvERTreeTrainData()
      , bp::wrapper< CvERTreeTrainData >(){
        // null constructor
        
    }

    virtual void get_vectors( ::CvMat const * _subsample_idx, float * values, ::uchar * missing, float * responses, bool get_class_idx=false ) {
        namespace bpl = boost::python;
        if( bpl::override func_get_vectors = this->get_override( "get_vectors" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_get_vectors.ptr(), _subsample_idx, values, missing, responses, get_class_idx );
        }
        else{
            CvERTreeTrainData::get_vectors( boost::python::ptr(_subsample_idx), values, missing, responses, get_class_idx );
        }
    }
    
    static void default_get_vectors( ::CvERTreeTrainData & inst, ::cv::Mat & _subsample_idx, std::vector<float> const & values, std::vector<unsigned char> const & missing, std::vector<float> const & responses, bool get_class_idx=false ){
        if( dynamic_cast< CvERTreeTrainData_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvERTreeTrainData::get_vectors(get_CvMat_ptr(_subsample_idx), (float *)(&values[0]), (::uchar *)(&missing[0]), (float *)(&responses[0]), get_class_idx);
        }
        else{
            inst.get_vectors(get_CvMat_ptr(_subsample_idx), (float *)(&values[0]), (::uchar *)(&missing[0]), (float *)(&responses[0]), get_class_idx);
        }
    }

    virtual void set_data( ::CvMat const * _train_data, int _tflag, ::CvMat const * _responses, ::CvMat const * _var_idx=0, ::CvMat const * _sample_idx=0, ::CvMat const * _var_type=0, ::CvMat const * _missing_mask=0, ::CvDTreeParams const & _params=::CvDTreeParams( ), bool _shared=false, bool _add_labels=false, bool _update_data=false ) {
        namespace bpl = boost::python;
        if( bpl::override func_set_data = this->get_override( "set_data" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_set_data.ptr(), _train_data, _tflag, _responses, _var_idx, _sample_idx, _var_type, _missing_mask, _params, _shared, _add_labels, _update_data );
        }
        else{
            CvERTreeTrainData::set_data( boost::python::ptr(_train_data), _tflag, boost::python::ptr(_responses), boost::python::ptr(_var_idx), boost::python::ptr(_sample_idx), boost::python::ptr(_var_type), boost::python::ptr(_missing_mask), boost::ref(_params), _shared, _add_labels, _update_data );
        }
    }
    
    static void default_set_data( ::CvERTreeTrainData & inst, ::cv::Mat & _train_data, int _tflag, ::cv::Mat & _responses, ::cv::Mat _var_idx=cv::Mat(), ::cv::Mat _sample_idx=cv::Mat(), ::cv::Mat _var_type=cv::Mat(), ::cv::Mat _missing_mask=cv::Mat(), ::CvDTreeParams const & _params=::CvDTreeParams( ), bool _shared=false, bool _add_labels=false, bool _update_data=false ){
        if( dynamic_cast< CvERTreeTrainData_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvERTreeTrainData::set_data(get_CvMat_ptr(_train_data), _tflag, get_CvMat_ptr(_responses), get_CvMat_ptr(_var_idx), get_CvMat_ptr(_sample_idx), get_CvMat_ptr(_var_type), get_CvMat_ptr(_missing_mask), _params, _shared, _add_labels, _update_data);
        }
        else{
            inst.set_data(get_CvMat_ptr(_train_data), _tflag, get_CvMat_ptr(_responses), get_CvMat_ptr(_var_idx), get_CvMat_ptr(_sample_idx), get_CvMat_ptr(_var_type), get_CvMat_ptr(_missing_mask), _params, _shared, _add_labels, _update_data);
        }
    }

    virtual CvDTreeNode * subsample_data( ::CvMat const * _subsample_idx ) {
        namespace bpl = boost::python;
        if( bpl::override func_subsample_data = this->get_override( "subsample_data" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_subsample_data.ptr(), _subsample_idx );
            return bpl::extract< CvDTreeNode * >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return CvERTreeTrainData::subsample_data( boost::python::ptr(_subsample_idx) );
        }
    }
    
    static boost::python::object default_subsample_data( ::CvERTreeTrainData & inst, ::cv::Mat & _subsample_idx ){
        CvDTreeNode * result;
        if( dynamic_cast< CvERTreeTrainData_wrapper * >( boost::addressof( inst ) ) ){
            result = inst.::CvERTreeTrainData::subsample_data(get_CvMat_ptr(_subsample_idx));
        }
        else{
            result = inst.subsample_data(get_CvMat_ptr(_subsample_idx));
        }
        typedef bp::return_internal_reference< > call_policies_t;
        return bp::object( pyplusplus::call_policies::make_object< call_policies_t, CvDTreeNode * >( result ) );
    }

    virtual void clear(  ) {
        if( bp::override func_clear = this->get_override( "clear" ) )
            func_clear(  );
        else{
            this->CvDTreeTrainData::clear(  );
        }
    }
    
    void default_clear(  ) {
        CvDTreeTrainData::clear( );
    }

    virtual void do_responses_copy(  ) {
        if( bp::override func_do_responses_copy = this->get_override( "do_responses_copy" ) )
            func_do_responses_copy(  );
        else{
            this->CvDTreeTrainData::do_responses_copy(  );
        }
    }
    
    void default_do_responses_copy(  ) {
        CvDTreeTrainData::do_responses_copy( );
    }

    virtual void free_node( ::CvDTreeNode * node ) {
        if( bp::override func_free_node = this->get_override( "free_node" ) )
            func_free_node( boost::python::ptr(node) );
        else{
            this->CvDTreeTrainData::free_node( boost::python::ptr(node) );
        }
    }
    
    void default_free_node( ::CvDTreeNode * node ) {
        CvDTreeTrainData::free_node( boost::python::ptr(node) );
    }

    virtual void free_node_data( ::CvDTreeNode * node ) {
        if( bp::override func_free_node_data = this->get_override( "free_node_data" ) )
            func_free_node_data( boost::python::ptr(node) );
        else{
            this->CvDTreeTrainData::free_node_data( boost::python::ptr(node) );
        }
    }
    
    void default_free_node_data( ::CvDTreeNode * node ) {
        CvDTreeTrainData::free_node_data( boost::python::ptr(node) );
    }

    virtual void free_train_data(  ) {
        if( bp::override func_free_train_data = this->get_override( "free_train_data" ) )
            func_free_train_data(  );
        else{
            this->CvDTreeTrainData::free_train_data(  );
        }
    }
    
    void default_free_train_data(  ) {
        CvDTreeTrainData::free_train_data( );
    }

    virtual int get_child_buf_idx( ::CvDTreeNode * n ) {
        if( bp::override func_get_child_buf_idx = this->get_override( "get_child_buf_idx" ) )
            return func_get_child_buf_idx( boost::python::ptr(n) );
        else{
            return this->CvDTreeTrainData::get_child_buf_idx( boost::python::ptr(n) );
        }
    }
    
    int default_get_child_buf_idx( ::CvDTreeNode * n ) {
        return CvDTreeTrainData::get_child_buf_idx( boost::python::ptr(n) );
    }

    virtual ::CvDTreeNode * new_node( ::CvDTreeNode * parent, int count, int storage_idx, int offset ) {
        if( bp::override func_new_node = this->get_override( "new_node" ) )
            return func_new_node( boost::python::ptr(parent), count, storage_idx, offset );
        else{
            return this->CvDTreeTrainData::new_node( boost::python::ptr(parent), count, storage_idx, offset );
        }
    }
    
    ::CvDTreeNode * default_new_node( ::CvDTreeNode * parent, int count, int storage_idx, int offset ) {
        return CvDTreeTrainData::new_node( boost::python::ptr(parent), count, storage_idx, offset );
    }

    virtual ::CvDTreeSplit * new_split_cat( int vi, float quality ) {
        if( bp::override func_new_split_cat = this->get_override( "new_split_cat" ) )
            return func_new_split_cat( vi, quality );
        else{
            return this->CvDTreeTrainData::new_split_cat( vi, quality );
        }
    }
    
    ::CvDTreeSplit * default_new_split_cat( int vi, float quality ) {
        return CvDTreeTrainData::new_split_cat( vi, quality );
    }

    virtual ::CvDTreeSplit * new_split_ord( int vi, float cmp_val, int split_point, int inversed, float quality ) {
        if( bp::override func_new_split_ord = this->get_override( "new_split_ord" ) )
            return func_new_split_ord( vi, cmp_val, split_point, inversed, quality );
        else{
            return this->CvDTreeTrainData::new_split_ord( vi, cmp_val, split_point, inversed, quality );
        }
    }
    
    ::CvDTreeSplit * default_new_split_ord( int vi, float cmp_val, int split_point, int inversed, float quality ) {
        return CvDTreeTrainData::new_split_ord( vi, cmp_val, split_point, inversed, quality );
    }

    virtual void read_params( ::CvFileStorage * fs, ::CvFileNode * node ) {
        namespace bpl = boost::python;
        if( bpl::override func_read_params = this->get_override( "read_params" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_read_params.ptr(), fs, node );
        }
        else{
            CvDTreeTrainData::read_params( boost::python::ptr(fs), boost::python::ptr(node) );
        }
    }
    
    static void default_read_params( ::CvDTreeTrainData & inst, ::cv::FileStorage & fs, ::cv::FileNode & node ){
        if( dynamic_cast< CvERTreeTrainData_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvDTreeTrainData::read_params(fs.fs, *(node));
        }
        else{
            inst.read_params(fs.fs, *(node));
        }
    }

    virtual bool set_params( ::CvDTreeParams const & params ) {
        if( bp::override func_set_params = this->get_override( "set_params" ) )
            return func_set_params( boost::ref(params) );
        else{
            return this->CvDTreeTrainData::set_params( boost::ref(params) );
        }
    }
    
    bool default_set_params( ::CvDTreeParams const & params ) {
        return CvDTreeTrainData::set_params( boost::ref(params) );
    }

    virtual void write_params( ::CvFileStorage * fs ) const  {
        namespace bpl = boost::python;
        if( bpl::override func_write_params = this->get_override( "write_params" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_write_params.ptr(), fs );
        }
        else{
            CvDTreeTrainData::write_params( boost::python::ptr(fs) );
        }
    }
    
    static void default_write_params( ::CvDTreeTrainData const & inst, ::cv::FileStorage & fs ){
        if( dynamic_cast< CvERTreeTrainData_wrapper const* >( boost::addressof( inst ) ) ){
            inst.::CvDTreeTrainData::write_params(fs.fs);
        }
        else{
            inst.write_params(fs.fs);
        }
    }

};

static bp::object CvERTreeTrainData_get_cat_var_data(bp::object const &bpinst, CvDTreeNode* n, int vi)
{
    CvERTreeTrainData &inst = bp::extract<CvERTreeTrainData &>(bpinst);
    int size = n->sample_count;
    sdcpp::ndarray result = sdcpp::simplenew_ndarray(1, &size, NPY_INT);
    int *in_arr = (int*)result.data();
    const int *out_arr = inst.get_cat_var_data(n, vi, in_arr);
    
    if(!out_arr) return bp::object();
    if(out_arr == in_arr) return result.get_obj();
    
    result = sdcpp::new_ndarray1d(size, NPY_INT, (void *)out_arr);
    bp::objects::make_nurse_and_patient(result.get_obj().ptr(), bpinst.ptr());
    return result.get_obj();
}

static bp::object CvERTreeTrainData_get_cv_labels(bp::object const &bpinst, CvDTreeNode* n)
{
    CvERTreeTrainData &inst = bp::extract<CvERTreeTrainData &>(bpinst);
    int size = n->sample_count;
    sdcpp::ndarray result = sdcpp::simplenew_ndarray(1, &size, NPY_INT);
    int *in_arr = (int*)result.data();
    const int *out_arr = inst.get_cv_labels(n, in_arr);
    
    if(!out_arr) return bp::object();
    if(out_arr == in_arr) return result.get_obj();
    
    result = sdcpp::new_ndarray1d(size, NPY_INT, (void *)out_arr);
    bp::objects::make_nurse_and_patient(result.get_obj().ptr(), bpinst.ptr());
    return result.get_obj();
}

static bp::object CvERTreeTrainData_get_sample_indices(bp::object const &bpinst, CvDTreeNode* n)
{
    CvERTreeTrainData &inst = bp::extract<CvERTreeTrainData &>(bpinst);
    int size = n->sample_count;
    sdcpp::ndarray result = sdcpp::simplenew_ndarray(1, &size, NPY_INT);
    int *in_arr = (int*)result.data();
    const int *out_arr = inst.get_sample_indices(n, in_arr);
    
    if(!out_arr) return bp::object();
    if(out_arr == in_arr) return result.get_obj();
    
    result = sdcpp::new_ndarray1d(size, NPY_INT, (void *)out_arr);
    bp::objects::make_nurse_and_patient(result.get_obj().ptr(), bpinst.ptr());
    return result.get_obj();
}

static bp::tuple CvERTreeTrainData_get_ord_var_data(bp::object const &bpinst, CvDTreeNode* n, int vi)
{
    CvERTreeTrainData &inst = bp::extract<CvERTreeTrainData &>(bpinst);
    int size = n->sample_count;
    std::vector<int> sample_indices(size);
    sdcpp::ndarray result1 = sdcpp::simplenew_ndarray(1, &size, NPY_FLOAT);
    sdcpp::ndarray result2 = sdcpp::simplenew_ndarray(1, &size, NPY_INT);
    float *in_arr1 = (float*)result1.data();
    int *in_arr2 = (int*)result2.data();
    const float *out_arr1;
    const int *out_arr2;
    inst.get_ord_var_data(n, vi, in_arr1, in_arr2, &out_arr1, &out_arr2, &sample_indices[0]);
    
    bp::object obj1, obj2;
    
    if(out_arr1 && out_arr1 != in_arr1)
    {
        result1 = sdcpp::new_ndarray1d(size, NPY_FLOAT, (void *)out_arr1);
        bp::objects::make_nurse_and_patient(result1.get_obj().ptr(), bpinst.ptr());
    }
    if(out_arr1) obj1 = result1.get_obj();
    
    if(out_arr2 && out_arr2 != in_arr2)
    {
        result2 = sdcpp::new_ndarray1d(size, NPY_INT, (void *)out_arr2);
        bp::objects::make_nurse_and_patient(result2.get_obj().ptr(), bpinst.ptr());
    }
    if(out_arr2) obj2 = result2.get_obj();
    
    return bp::make_tuple(obj1, obj2);
}

static cv::Mat get_CvERTreeTrainData_missing_mask(CvERTreeTrainData const &inst) { return inst.missing_mask? cv::Mat(inst.missing_mask): cv::Mat(); }

static cv::TermCriteria *get_CvRTParams_term_crit(CvRTParams const &inst) { return (cv::TermCriteria *)(&inst.term_crit); }

void register_classes_5(){

    { //::CvEM
        typedef bp::class_< CvEM_wrapper, bp::bases< CvStatModel > > CvEM_exposer_t;
        CvEM_exposer_t CvEM_exposer = CvEM_exposer_t( "CvEM", bp::init< >() );
        bp::scope CvEM_scope( CvEM_exposer );
        CvEM_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< CvEM >() );
        bp::scope().attr("COV_MAT_SPHERICAL") = (int)CvEM::COV_MAT_SPHERICAL;
        bp::scope().attr("COV_MAT_DIAGONAL") = (int)CvEM::COV_MAT_DIAGONAL;
        bp::scope().attr("COV_MAT_GENERIC") = (int)CvEM::COV_MAT_GENERIC;
        bp::scope().attr("START_E_STEP") = (int)CvEM::START_E_STEP;
        bp::scope().attr("START_M_STEP") = (int)CvEM::START_M_STEP;
        bp::scope().attr("START_AUTO_STEP") = (int)CvEM::START_AUTO_STEP;
        CvEM_exposer.def( bp::init< CvMat const *, bp::optional< CvMat const *, CvEMParams, CvMat * > >(( bp::arg("samples"), bp::arg("sample_idx")=bp::object(), bp::arg("params")=::CvEMParams( ), bp::arg("labels")=bp::object() ), "\nWrapped function:"
    "\n    CvEM"
    "\nArgument 'samples':"\
    "\n    C++ type: ::CvMat const *"\
    "\n    Python type: Mat"\
    "\nArgument 'sample_idx':"\
    "\n    C++ type: ::CvMat const *"\
    "\n    Python type: Mat"\
    "\nArgument 'labels':"\
    "\n    C++ type: ::CvMat *"\
    "\n    Python type: Mat") );
        bp::implicitly_convertible< CvMat const *, CvEM >();
        CvEM_exposer.def( bp::init< cv::Mat const &, bp::optional< cv::Mat const &, CvEMParams, cv::Mat * > >(( bp::arg("samples"), bp::arg("sample_idx")=cv::Mat(), bp::arg("params")=::CvEMParams( ), bp::arg("labels")=bp::object() )) );
        bp::implicitly_convertible< cv::Mat const &, CvEM >();
        { //::CvEM::clear
        
            typedef void ( ::CvEM::*clear_function_type )(  ) ;
            typedef void ( CvEM_wrapper::*default_clear_function_type )(  ) ;
            
            CvEM_exposer.def( 
                "clear"
                , clear_function_type(&::CvEM::clear)
                , default_clear_function_type(&CvEM_wrapper::default_clear) );
        
        }
        { //::CvEM::get_log_likelihood
        
            typedef double ( ::CvEM::*get_log_likelihood_function_type )(  ) const;
            
            CvEM_exposer.def( 
                "get_log_likelihood"
                , get_log_likelihood_function_type( &::CvEM::get_log_likelihood ) );
        
        }
        { //::CvEM::get_means
        
            typedef ::CvMat const * ( ::CvEM::*get_means_function_type )(  ) const;
            
            CvEM_exposer.def( 
                "get_means"
                , get_means_function_type( &::CvEM::get_means )
                , bp::return_internal_reference< >() );
        
        }
        { //::CvEM::get_nclusters
        
            typedef int ( ::CvEM::*get_nclusters_function_type )(  ) const;
            
            CvEM_exposer.def( 
                "get_nclusters"
                , get_nclusters_function_type( &::CvEM::get_nclusters ) );
        
        }
        { //::CvEM::get_probs
        
            typedef ::CvMat const * ( ::CvEM::*get_probs_function_type )(  ) const;
            
            CvEM_exposer.def( 
                "get_probs"
                , get_probs_function_type( &::CvEM::get_probs )
                , bp::return_internal_reference< >() );
        
        }
        { //::CvEM::get_weights
        
            typedef ::CvMat const * ( ::CvEM::*get_weights_function_type )(  ) const;
            
            CvEM_exposer.def( 
                "get_weights"
                , get_weights_function_type( &::CvEM::get_weights )
                , bp::return_internal_reference< >() );
        
        }
        { //::CvEM::predict
        
            typedef boost::python::object ( *default_predict_function_type )( CvEM const &,::cv::Mat &,::cv::Mat & );
            
            CvEM_exposer.def( 
                "predict"
                , default_predict_function_type( &CvEM_wrapper::default_predict_e2a6ccb3e80d0945b65e2adfc4d80129 )
                , ( bp::arg("inst"), bp::arg("sample"), bp::arg("probs") )
                , "\nArgument 'sample':"\
    "\n    C++ type: ::CvMat const *"\
    "\n    Python type: Mat"\
    "\nArgument 'probs':"\
    "\n    C++ type: ::CvMat *"\
    "\n    Python type: Mat" );
        
        }
        { //::CvEM::predict
        
            typedef float ( ::CvEM::*predict_function_type )( ::cv::Mat const &,::cv::Mat * ) const;
            typedef float ( CvEM_wrapper::*default_predict_function_type )( ::cv::Mat const &,::cv::Mat * ) const;
            
            CvEM_exposer.def( 
                "predict"
                , predict_function_type(&::CvEM::predict)
                , default_predict_function_type(&CvEM_wrapper::default_predict)
                , ( bp::arg("sample"), bp::arg("probs") ) );
        
        }
        { //::CvEM::train
        
            typedef boost::python::object ( *default_train_function_type )( CvEM &,::cv::Mat &,::cv::Mat,CvEMParams,::cv::Mat );
            
            CvEM_exposer.def( 
                "train"
                , default_train_function_type( &CvEM_wrapper::default_train_ad96ec9280c0f7571752ed3a0ca86d28 )
                , ( bp::arg("inst"), bp::arg("samples"), bp::arg("sample_idx")=cv::Mat(), bp::arg("params")=::CvEMParams( ), bp::arg("labels")=cv::Mat() )
                , "\nArgument 'samples':"\
    "\n    C++ type: ::CvMat const *"\
    "\n    Python type: Mat"\
    "\nArgument 'sample_idx':"\
    "\n    C++ type: ::CvMat const *"\
    "\n    Python type: Mat"\
    "\nArgument 'labels':"\
    "\n    C++ type: ::CvMat *"\
    "\n    Python type: Mat" );
        
        }
        { //::CvEM::train
        
            typedef bool ( ::CvEM::*train_function_type )( ::cv::Mat const &,::cv::Mat const &,::CvEMParams,::cv::Mat * ) ;
            typedef bool ( CvEM_wrapper::*default_train_function_type )( ::cv::Mat const &,::cv::Mat const &,::CvEMParams,::cv::Mat * ) ;
            
            CvEM_exposer.def( 
                "train"
                , train_function_type(&::CvEM::train)
                , default_train_function_type(&CvEM_wrapper::default_train)
                , ( bp::arg("samples"), bp::arg("sample_idx")=cv::Mat(), bp::arg("params")=::CvEMParams( ), bp::arg("labels")=bp::object() ) );
        
        }
        { //::CvStatModel::load
        
            typedef void ( ::CvStatModel::*load_function_type )( char const *,char const * ) ;
            typedef void ( CvEM_wrapper::*default_load_function_type )( char const *,char const * ) ;
            
            CvEM_exposer.def( 
                "load"
                , load_function_type(&::CvStatModel::load)
                , default_load_function_type(&CvEM_wrapper::default_load)
                , ( bp::arg("filename"), bp::arg("name")=bp::object() ) );
        
        }
        { //::CvStatModel::read
        
            typedef void ( *default_read_function_type )( CvStatModel &,::cv::FileStorage &,::cv::FileNode & );
            
            CvEM_exposer.def( 
                "read"
                , default_read_function_type( &CvEM_wrapper::default_read )
                , ( bp::arg("inst"), bp::arg("storage"), bp::arg("node") )
                , "\nArgument 'storage':"\
    "\n    C++ type: ::CvFileStorage *"\
    "\n    Python type: FileStorage"\
    "\nArgument 'node':"\
    "\n    C++ type: ::CvFileNode *"\
    "\n    Python type: FileNode" );
        
        }
        { //::CvStatModel::save
        
            typedef void ( ::CvStatModel::*save_function_type )( char const *,char const * ) const;
            typedef void ( CvEM_wrapper::*default_save_function_type )( char const *,char const * ) const;
            
            CvEM_exposer.def( 
                "save"
                , save_function_type(&::CvStatModel::save)
                , default_save_function_type(&CvEM_wrapper::default_save)
                , ( bp::arg("filename"), bp::arg("name")=bp::object() ) );
        
        }
        { //::CvStatModel::write
        
            typedef void ( *default_write_function_type )( CvStatModel const &,::cv::FileStorage &,char const * );
            
            CvEM_exposer.def( 
                "write"
                , default_write_function_type( &CvEM_wrapper::default_write )
                , ( bp::arg("inst"), bp::arg("storage"), bp::arg("name") )
                , "\nArgument 'storage':"\
    "\n    C++ type: ::CvFileStorage *"\
    "\n    Python type: FileStorage" );
        
        }
    }

    bp::class_< CvERTreeTrainData_wrapper, bp::bases< CvDTreeTrainData > >( "CvERTreeTrainData" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvERTreeTrainData >() )    
        .def( 
            "get_vectors"
            , (void (*)( CvERTreeTrainData &,::cv::Mat &,std::vector<float> const &,std::vector<unsigned char> const &,std::vector<float> const &,bool ))( &CvERTreeTrainData_wrapper::default_get_vectors )
            , ( bp::arg("inst"), bp::arg("_subsample_idx"), bp::arg("values"), bp::arg("missing"), bp::arg("responses"), bp::arg("get_class_idx")=(bool)(false) )
            , "\nArgument '_subsample_idx':"\
    "\n    C++ type: ::CvMat const *"\
    "\n    Python type: Mat"\
    "\nArgument 'values':"\
    "\n    C++ type: float *"\
    "\n    Python type: vector_float32"\
    "\nArgument 'missing':"\
    "\n    C++ type: ::uchar *"\
    "\n    Python type: vector_uint8"\
    "\nArgument 'responses':"\
    "\n    C++ type: float *"\
    "\n    Python type: vector_float32" )    
        .def( 
            "set_data"
            , (void (*)( CvERTreeTrainData &,::cv::Mat &,int,::cv::Mat &,::cv::Mat,::cv::Mat,::cv::Mat,::cv::Mat,CvDTreeParams const &,bool,bool,bool ))( &CvERTreeTrainData_wrapper::default_set_data )
            , ( bp::arg("inst"), bp::arg("_train_data"), bp::arg("_tflag"), bp::arg("_responses"), bp::arg("_var_idx")=cv::Mat(), bp::arg("_sample_idx")=cv::Mat(), bp::arg("_var_type")=cv::Mat(), bp::arg("_missing_mask")=cv::Mat(), bp::arg("_params")=::CvDTreeParams( ), bp::arg("_shared")=(bool)(false), bp::arg("_add_labels")=(bool)(false), bp::arg("_update_data")=(bool)(false) )
            , "\nArgument '_train_data':"\
    "\n    C++ type: ::CvMat const *"\
    "\n    Python type: Mat"\
    "\nArgument '_responses':"\
    "\n    C++ type: ::CvMat const *"\
    "\n    Python type: Mat"\
    "\nArgument '_var_idx':"\
    "\n    C++ type: ::CvMat const *"\
    "\n    Python type: Mat"\
    "\nArgument '_sample_idx':"\
    "\n    C++ type: ::CvMat const *"\
    "\n    Python type: Mat"\
    "\nArgument '_var_type':"\
    "\n    C++ type: ::CvMat const *"\
    "\n    Python type: Mat"\
    "\nArgument '_missing_mask':"\
    "\n    C++ type: ::CvMat const *"\
    "\n    Python type: Mat" )    
        .def( 
            "subsample_data"
            , (boost::python::object (*)( CvERTreeTrainData &,::cv::Mat & ))( &CvERTreeTrainData_wrapper::default_subsample_data )
            , ( bp::arg("inst"), bp::arg("_subsample_idx") )
            , "\nArgument '_subsample_idx':"\
    "\n    C++ type: ::CvMat const *"\
    "\n    Python type: Mat" )    
        .def( 
            "clear"
            , (void ( CvDTreeTrainData::* )(  ) )(&::CvDTreeTrainData::clear)
            , (void ( CvERTreeTrainData_wrapper::* )(  ) )(&CvERTreeTrainData_wrapper::default_clear) )    
        .def( 
            "do_responses_copy"
            , (void ( CvDTreeTrainData::* )(  ) )(&::CvDTreeTrainData::do_responses_copy)
            , (void ( CvERTreeTrainData_wrapper::* )(  ) )(&CvERTreeTrainData_wrapper::default_do_responses_copy) )    
        .def( 
            "free_node"
            , (void ( CvDTreeTrainData::* )( ::CvDTreeNode * ) )(&::CvDTreeTrainData::free_node)
            , (void ( CvERTreeTrainData_wrapper::* )( ::CvDTreeNode * ) )(&CvERTreeTrainData_wrapper::default_free_node)
            , ( bp::arg("node") ) )    
        .def( 
            "free_node_data"
            , (void ( CvDTreeTrainData::* )( ::CvDTreeNode * ) )(&::CvDTreeTrainData::free_node_data)
            , (void ( CvERTreeTrainData_wrapper::* )( ::CvDTreeNode * ) )(&CvERTreeTrainData_wrapper::default_free_node_data)
            , ( bp::arg("node") ) )    
        .def( 
            "free_train_data"
            , (void ( CvDTreeTrainData::* )(  ) )(&::CvDTreeTrainData::free_train_data)
            , (void ( CvERTreeTrainData_wrapper::* )(  ) )(&CvERTreeTrainData_wrapper::default_free_train_data) )    
        .def( 
            "get_child_buf_idx"
            , (int ( CvDTreeTrainData::* )( ::CvDTreeNode * ) )(&::CvDTreeTrainData::get_child_buf_idx)
            , (int ( CvERTreeTrainData_wrapper::* )( ::CvDTreeNode * ) )(&CvERTreeTrainData_wrapper::default_get_child_buf_idx)
            , ( bp::arg("n") ) )    
        .def( 
            "new_node"
            , (::CvDTreeNode * ( CvDTreeTrainData::* )( ::CvDTreeNode *,int,int,int ) )(&::CvDTreeTrainData::new_node)
            , (::CvDTreeNode * ( CvERTreeTrainData_wrapper::* )( ::CvDTreeNode *,int,int,int ) )(&CvERTreeTrainData_wrapper::default_new_node)
            , ( bp::arg("parent"), bp::arg("count"), bp::arg("storage_idx"), bp::arg("offset") )
            , bp::return_internal_reference< >() )    
        .def( 
            "new_split_cat"
            , (::CvDTreeSplit * ( CvDTreeTrainData::* )( int,float ) )(&::CvDTreeTrainData::new_split_cat)
            , (::CvDTreeSplit * ( CvERTreeTrainData_wrapper::* )( int,float ) )(&CvERTreeTrainData_wrapper::default_new_split_cat)
            , ( bp::arg("vi"), bp::arg("quality") )
            , bp::return_internal_reference< >() )    
        .def( 
            "new_split_ord"
            , (::CvDTreeSplit * ( CvDTreeTrainData::* )( int,float,int,int,float ) )(&::CvDTreeTrainData::new_split_ord)
            , (::CvDTreeSplit * ( CvERTreeTrainData_wrapper::* )( int,float,int,int,float ) )(&CvERTreeTrainData_wrapper::default_new_split_ord)
            , ( bp::arg("vi"), bp::arg("cmp_val"), bp::arg("split_point"), bp::arg("inversed"), bp::arg("quality") )
            , bp::return_internal_reference< >() )    
        .def( 
            "read_params"
            , (void (*)( CvDTreeTrainData &,::cv::FileStorage &,::cv::FileNode & ))( &CvERTreeTrainData_wrapper::default_read_params )
            , ( bp::arg("inst"), bp::arg("fs"), bp::arg("node") )
            , "\nArgument 'fs':"\
    "\n    C++ type: ::CvFileStorage *"\
    "\n    Python type: FileStorage"\
    "\nArgument 'node':"\
    "\n    C++ type: ::CvFileNode *"\
    "\n    Python type: FileNode" )    
        .def( 
            "set_params"
            , (bool ( CvDTreeTrainData::* )( ::CvDTreeParams const & ) )(&::CvDTreeTrainData::set_params)
            , (bool ( CvERTreeTrainData_wrapper::* )( ::CvDTreeParams const & ) )(&CvERTreeTrainData_wrapper::default_set_params)
            , ( bp::arg("params") ) )    
        .def( 
            "write_params"
            , (void (*)( CvDTreeTrainData const &,::cv::FileStorage & ))( &CvERTreeTrainData_wrapper::default_write_params )
            , ( bp::arg("inst"), bp::arg("fs") )
            , "\nArgument 'fs':"\
    "\n    C++ type: ::CvFileStorage *"\
    "\n    Python type: FileStorage" )    
        .def("get_cat_var_data", &::CvERTreeTrainData_get_cat_var_data, (bp::arg("self"), bp::arg("n"), bp::arg("vi")))    
        .def("get_cv_labels", &::CvERTreeTrainData_get_cv_labels, (bp::arg("self"), bp::arg("n")))    
        .def("get_sample_indices", &::CvERTreeTrainData_get_sample_indices, (bp::arg("self"), bp::arg("n")))    
        .def("get_ord_var_data", &::CvERTreeTrainData_get_ord_var_data, (bp::arg("self"), bp::arg("n"), bp::arg("vi")))    
        .add_property( "missing_mask", &::get_CvERTreeTrainData_missing_mask );

    bp::class_< CvRTParams, bp::bases< CvDTreeParams > >( "CvRTParams", bp::init< >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvRTParams >() )    
        .def( bp::init< int, int, float, bool, int, float const *, bool, int, int, float, int >(( bp::arg("_max_depth"), bp::arg("_min_sample_count"), bp::arg("_regression_accuracy"), bp::arg("_use_surrogates"), bp::arg("_max_categories"), bp::arg("_priors"), bp::arg("_calc_var_importance"), bp::arg("_nactive_vars"), bp::arg("max_num_of_trees_in_the_forest"), bp::arg("forest_accuracy"), bp::arg("termcrit_type") ), "\nWrapped function:"
    "\n    CvRTParams"
    "\nArgument '_priors':"\
    "\n    C++ type: float const *"\
    "\n    Python type: vector_float32") )    
        .def_readwrite( "calc_var_importance", &CvRTParams::calc_var_importance )    
        .def_readwrite( "nactive_vars", &CvRTParams::nactive_vars )    
        .add_property( "term_crit", bp::make_function(&::get_CvRTParams_term_crit, bp::return_internal_reference<>()) );

}
