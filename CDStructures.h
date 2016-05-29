//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct ALSize {
    int width;
    int height;
};

struct ALVideoFrameYuv {
    int _field1;
    char *_field2[3];
    unsigned int _field3[3];
    unsigned int _field4;
    unsigned int _field5;
    unsigned long long _field6;
    void *_field7;
};

struct AudioQueueBuffer {
    unsigned int _field1;
    void *_field2;
    unsigned int _field3;
    void *_field4;
    unsigned int _field5;
    struct AudioStreamPacketDescription *_field6;
    unsigned int _field7;
};

struct AudioStreamPacketDescription {
    long long _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct CATransform3D {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CGVector {
    double dx;
    double dy;
};

struct CVPlanarComponentInfo {
    int _field1;
    unsigned int _field2;
};

struct CVPlanarPixelBufferInfo_YCbCrBiPlanar {
    struct CVPlanarComponentInfo _field1;
    struct CVPlanarComponentInfo _field2;
};

struct DirectRendererCallback;

struct FBAnimationPerformanceTrackerConfig {
    long long smallDropEventFrameNumber;
    long long largeDropEventFrameNumber;
    long long maxFrameDropAccount;
    _Bool reportStackTraces;
};

struct GADAdSize {
    struct CGSize size;
    unsigned long long flags;
};

struct Handle<std::__1::shared_ptr<addlive::DirectRendererCallback>, std::__1::shared_ptr<addlive::DirectRendererCallback>> {
    struct shared_ptr<djinni::ProxyCache<djinni::CppProxyCacheTraits>::Pimpl> m_cache;
    shared_ptr_fe59ffec m_obj;
};

struct Handle<std::__1::shared_ptr<addlive::NumberResponder>, std::__1::shared_ptr<addlive::NumberResponder>> {
    struct shared_ptr<djinni::ProxyCache<djinni::CppProxyCacheTraits>::Pimpl> m_cache;
    shared_ptr_b2984fc8 m_obj;
};

struct Handle<std::__1::shared_ptr<addlive::RendererCallback>, std::__1::shared_ptr<addlive::RendererCallback>> {
    struct shared_ptr<djinni::ProxyCache<djinni::CppProxyCacheTraits>::Pimpl> m_cache;
    shared_ptr_e8cb2ba3 m_obj;
};

struct Handle<std::__1::shared_ptr<addlive::Service>, std::__1::shared_ptr<addlive::Service>> {
    struct shared_ptr<djinni::ProxyCache<djinni::CppProxyCacheTraits>::Pimpl> m_cache;
    shared_ptr_756dba43 m_obj;
};

struct Handle<std::__1::shared_ptr<addlive::ServiceListener>, std::__1::shared_ptr<addlive::ServiceListener>> {
    struct shared_ptr<djinni::ProxyCache<djinni::CppProxyCacheTraits>::Pimpl> m_cache;
    shared_ptr_5fdff3df m_obj;
};

struct Handle<std::__1::shared_ptr<addlive::StringDictResponder>, std::__1::shared_ptr<addlive::StringDictResponder>> {
    struct shared_ptr<djinni::ProxyCache<djinni::CppProxyCacheTraits>::Pimpl> m_cache;
    shared_ptr_13f5941a m_obj;
};

struct Handle<std::__1::shared_ptr<addlive::StringListResponder>, std::__1::shared_ptr<addlive::StringListResponder>> {
    struct shared_ptr<djinni::ProxyCache<djinni::CppProxyCacheTraits>::Pimpl> m_cache;
    shared_ptr_382e76bc m_obj;
};

struct Handle<std::__1::shared_ptr<addlive::StringResponder>, std::__1::shared_ptr<addlive::StringResponder>> {
    struct shared_ptr<djinni::ProxyCache<djinni::CppProxyCacheTraits>::Pimpl> m_cache;
    shared_ptr_c924c628 m_obj;
};

struct Handle<std::__1::shared_ptr<addlive::VoidResponder>, std::__1::shared_ptr<addlive::VoidResponder>> {
    struct shared_ptr<djinni::ProxyCache<djinni::CppProxyCacheTraits>::Pimpl> m_cache;
    shared_ptr_c0f0acb2 m_obj;
};

struct HttpResult {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> body;
    int resultCode;
    struct map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char>>>> headers;
};

struct IosCamera;

struct LSAAudioDelegate {
    CDUnknownFunctionPointerType *_field1;
};

struct LSAHintsDelegateWrapper {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct LSCoreManager {
    struct unique_ptr<LSCoreManagerImpl, std::__1::default_delete<LSCoreManagerImpl>> _field1;
};

struct LSCoreManagerImpl;

struct LSDrawTexture {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct LSForegroundTaskScheduler {
    CDUnknownFunctionPointerType *_field1;
    struct mutex _field2;
    struct condition_variable _field3;
    struct condition_variable _field4;
    int _field5;
    int _field6;
    id _field7;
};

struct LSFrameBuffer {
    int _field1;
    int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    struct LSTextureBase *_field8;
    _Bool _field9;
};

struct LSRGB2NV21Convertor {
    struct _shRGB2NV21Convertor _field1;
    struct _shRGB2NV21Convertor _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    int _field8;
    int _field9;
    int _field10;
    char *_field11;
    struct LSFrameBuffer *_field12;
    struct RectTransform _field13;
    int _field14;
};

struct LSTextureBase;

struct LSTransform {
    int _field1;
    int _field2;
};

struct MSize {
    int *_field1;
};

struct MStep {
    unsigned long long *_field1;
    unsigned long long _field2[2];
};

struct Mat {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    char *_field5;
    int *_field6;
    char *_field7;
    char *_field8;
    char *_field9;
    struct MatAllocator *_field10;
    struct MSize _field11;
    struct MStep _field12;
};

struct MatAllocator;

struct MultiplePlaneTracker;

struct NSDictionary {
    Class _field1;
};

struct NumberResponder;

struct PLCrashHostInfoVersion {
    unsigned long long major;
    unsigned long long minor;
    unsigned long long revision;
};

struct PLCrashReporterCallbacks {
    unsigned short _field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
};

struct Pimpl;

struct RectTransform {
    int transformMask_;
};

struct RendererCallback;

struct SCALVideoResolution {
    struct CGSize resolution;
    int fps;
};

struct SCAudioNoteWaveformAnimationFrame {
    unsigned char _field1[14];
};

struct ScannedData {
    _Bool _field1;
    int _field2;
    int _field3;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field4;
    struct vector<unsigned char, std::__1::allocator<unsigned char>> _field5;
};

struct Service;

struct ServiceListener;

struct StringDictResponder;

struct StringListResponder;

struct StringResponder;

struct UIColor {
    Class _field1;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UIOffset {
    double horizontal;
    double vertical;
};

struct VoidResponder;

struct _IplImage {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    char _field6[4];
    char _field7[4];
    int _field8;
    int _field9;
    int _field10;
    int _field11;
    int _field12;
    struct _IplROI *_field13;
    struct _IplImage *_field14;
    void *_field15;
    struct _IplTileInfo *_field16;
    int _field17;
    char *_field18;
    int _field19;
    int _field20[4];
    int _field21[4];
    char *_field22;
};

struct _IplROI;

struct _IplTileInfo;

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _PLCrashReportDecoder {
    struct _Plcrash__CrashReport *_field1;
};

struct _Plcrash__CrashReport {
    struct _ProtobufCMessage _field1;
    struct _Plcrash__CrashReport__SystemInfo *_field2;
    struct _Plcrash__CrashReport__ApplicationInfo *_field3;
    unsigned long long _field4;
    struct _Plcrash__CrashReport__Thread **_field5;
    unsigned long long _field6;
    struct _Plcrash__CrashReport__BinaryImage **_field7;
    struct _Plcrash__CrashReport__Exception *_field8;
    struct _Plcrash__CrashReport__Signal *_field9;
    struct _Plcrash__CrashReport__ProcessInfo *_field10;
    struct _Plcrash__CrashReport__MachineInfo *_field11;
    struct _Plcrash__CrashReport__ReportInfo *_field12;
};

struct _Plcrash__CrashReport__ApplicationInfo {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
};

struct _Plcrash__CrashReport__BinaryImage;

struct _Plcrash__CrashReport__Exception {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
    unsigned long long _field4;
    struct _Plcrash__CrashReport__Thread__StackFrame **_field5;
};

struct _Plcrash__CrashReport__MachineInfo {
    struct _ProtobufCMessage _field1;
    char *_field2;
    struct _Plcrash__CrashReport__Processor *_field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct _Plcrash__CrashReport__ProcessInfo {
    struct _ProtobufCMessage _field1;
    char *_field2;
    unsigned int _field3;
    char *_field4;
    char *_field5;
    unsigned int _field6;
    int _field7;
    int _field8;
    unsigned long long _field9;
};

struct _Plcrash__CrashReport__Processor {
    struct _ProtobufCMessage _field1;
    int _field2;
    int _field3;
    unsigned long long _field4;
    unsigned long long _field5;
};

struct _Plcrash__CrashReport__ReportInfo;

struct _Plcrash__CrashReport__Signal {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
    unsigned long long _field4;
    struct _Plcrash__CrashReport__Signal__MachException *_field5;
};

struct _Plcrash__CrashReport__Signal__MachException {
    struct _ProtobufCMessage _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long *_field4;
};

struct _Plcrash__CrashReport__Symbol {
    struct _ProtobufCMessage _field1;
    char *_field2;
    unsigned long long _field3;
    int _field4;
    unsigned long long _field5;
};

struct _Plcrash__CrashReport__SystemInfo {
    struct _ProtobufCMessage _field1;
    int _field2;
    int _field3;
    char *_field4;
    int _field5;
    long long _field6;
    char *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
};

struct _Plcrash__CrashReport__Thread;

struct _Plcrash__CrashReport__Thread__StackFrame {
    struct _ProtobufCMessage _field1;
    unsigned long long _field2;
    struct _Plcrash__CrashReport__Symbol *_field3;
};

struct _ProtobufCMessage {
    struct _ProtobufCMessageDescriptor *_field1;
    unsigned int _field2;
    struct _ProtobufCMessageUnknownField *_field3;
};

struct _ProtobufCMessageDescriptor;

struct _ProtobufCMessageUnknownField;

struct __shared_weak_count;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct _opaque_pthread_cond_t {
    long long __sig;
    char __opaque[40];
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct _shRGB2NV21Convertor {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field3;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field4;
    unsigned int _field5;
    unsigned short _field6;
    struct map<std::__1::basic_string<char>, LSShader::uniformInfo, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, LSShader::uniformInfo>>> _field7;
    struct map<std::__1::basic_string<char>, std::__1::pair<std::__1::basic_string<char>, int *>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::pair<std::__1::basic_string<char>, int *>>>> _field8;
    struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> _field9;
    struct vector<char, std::__1::allocator<char>> _field10;
    _Bool _field11;
    struct uniTexture_mapper _field12;
    struct uniXYStep_mapper _field13;
    struct atbTexPosition_mapper _field14;
    struct atbPosition_mapper _field15;
};

struct atbPosition_mapper {
    struct _shRGB2NV21Convertor *_field1;
    struct vec2 *_field2;
    char *_field3;
    int _field4;
};

struct atbTexPosition_mapper {
    struct _shRGB2NV21Convertor *_field1;
    struct vec2 *_field2;
    char *_field3;
    int _field4;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    char *__data_;
                    unsigned long long __size_;
                    unsigned long long __cap_;
                } __l;
                struct __short {
                    char __data_[23];
                    struct {
                        unsigned char __size_;
                    } ;
                } __s;
                struct __raw {
                    unsigned long long __words[3];
                } __r;
            } ;
        } __first_;
    } __r_;
};

struct condition_variable {
    struct _opaque_pthread_cond_t __cv_;
};

struct cr_found_class_t {
    char *_field1;
    unsigned int _field2;
};

struct function<void (const adl::netio::HttpResult &)> {
    struct type __buf_;
    struct __base<void (const adl::netio::HttpResult &)> *__f_;
};

struct in6_addr {
    union {
        unsigned char _field1[16];
        unsigned short _field2[8];
        unsigned int _field3[4];
    } _field1;
};

struct in_addr {
    unsigned int s_addr;
};

struct internal_state;

struct map<double, SOJUGalleryTransform *, std::__1::less<double>, std::__1::allocator<std::__1::pair<const double, SOJUGalleryTransform *>>> {
    struct __tree<std::__1::__value_type<double, SOJUGalleryTransform *>, std::__1::__map_value_compare<double, std::__1::__value_type<double, SOJUGalleryTransform *>, std::__1::less<double>, true>, std::__1::allocator<std::__1::__value_type<double, SOJUGalleryTransform *>>> {
        struct __tree_node<std::__1::__value_type<double, SOJUGalleryTransform *>, void *> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<double, SOJUGalleryTransform *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<double, std::__1::__value_type<double, SOJUGalleryTransform *>, std::__1::less<double>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct map<std::__1::basic_string<char>, LSShader::uniformInfo, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, LSShader::uniformInfo>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, LSShader::uniformInfo>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, LSShader::uniformInfo>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, LSShader::uniformInfo>>> {
        struct __tree_node<std::__1::__value_type<std::__1::basic_string<char>, LSShader::uniformInfo>, void *> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, LSShader::uniformInfo>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, LSShader::uniformInfo>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char>>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>>> {
        struct __tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, void *> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct map<std::__1::basic_string<char>, std::__1::pair<std::__1::basic_string<char>, int *>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::pair<std::__1::basic_string<char>, int *>>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::pair<std::__1::basic_string<char>, int *>>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::pair<std::__1::basic_string<char>, int *>>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::pair<std::__1::basic_string<char>, int *>>>> {
        struct __tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::pair<std::__1::basic_string<char>, int *>>, void *> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::pair<std::__1::basic_string<char>, int *>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::pair<std::__1::basic_string<char>, int *>>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct mutex {
    struct _opaque_pthread_mutex_t __m_;
};

struct plcrash_exception_server_context {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    CDUnknownFunctionPointerType _field5;
    void *_field6;
    struct _opaque_pthread_mutex_t _field7;
    struct _opaque_pthread_cond_t _field8;
    unsigned int _field9;
    _Bool _field10;
};

struct plcrash_mach_exception_port_set {
    unsigned int count;
    unsigned int masks[13];
    unsigned int ports[13];
    int behaviors[13];
    int flavors[13];
};

struct recursive_mutex {
    struct _opaque_pthread_mutex_t __m_;
};

struct shared_ptr<LSTextureBase> {
    struct LSTextureBase *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<MultiplePlaneTracker> {
    struct MultiplePlaneTracker *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<addlive::DirectRendererCallback> {
    struct DirectRendererCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<addlive::NumberResponder> {
    struct NumberResponder *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<addlive::RendererCallback> {
    struct RendererCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<addlive::Service> {
    struct Service *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<addlive::ServiceListener> {
    struct ServiceListener *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<addlive::StringDictResponder> {
    struct StringDictResponder *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<addlive::StringListResponder> {
    struct StringListResponder *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<addlive::StringResponder> {
    struct StringResponder *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<addlive::VoidResponder> {
    struct VoidResponder *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<adl::media::IosCamera> {
    struct IosCamera *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<djinni::ProxyCache<djinni::CppProxyCacheTraits>::Pimpl> {
    struct Pimpl *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<std::__1::vector<__weak id<LSAEffectsManagerListener>, std::__1::allocator<__weak id<LSAEffectsManagerListener>>>> {
    struct vector<__weak id<LSAEffectsManagerListener>, std::__1::allocator<__weak id<LSAEffectsManagerListener>>> *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<std::__1::vector<__weak id<SCAddressSummaryListener>, std::__1::allocator<__weak id<SCAddressSummaryListener>>>> {
    struct vector<__weak id<SCAddressSummaryListener>, std::__1::allocator<__weak id<SCAddressSummaryListener>>> *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<std::__1::vector<__weak id<SCAudioSessionListener>, std::__1::allocator<__weak id<SCAudioSessionListener>>>> {
    struct vector<__weak id<SCAudioSessionListener>, std::__1::allocator<__weak id<SCAudioSessionListener>>> *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<std::__1::vector<__weak id<SCChatViewLifeCycleListener>, std::__1::allocator<__weak id<SCChatViewLifeCycleListener>>>> {
    struct vector<__weak id<SCChatViewLifeCycleListener>, std::__1::allocator<__weak id<SCChatViewLifeCycleListener>>> *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<std::__1::vector<__weak id<SCChatViewModelListener>, std::__1::allocator<__weak id<SCChatViewModelListener>>>> {
    struct vector<__weak id<SCChatViewModelListener>, std::__1::allocator<__weak id<SCChatViewModelListener>>> *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<std::__1::vector<__weak id<SCImageProcessVideoPlaybackSessionListener>, std::__1::allocator<__weak id<SCImageProcessVideoPlaybackSessionListener>>>> {
    struct vector<__weak id<SCImageProcessVideoPlaybackSessionListener>, std::__1::allocator<__weak id<SCImageProcessVideoPlaybackSessionListener>>> *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<std::__1::vector<__weak id<SCManagedCapturerListener>, std::__1::allocator<__weak id<SCManagedCapturerListener>>>> {
    struct vector<__weak id<SCManagedCapturerListener>, std::__1::allocator<__weak id<SCManagedCapturerListener>>> *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<std::__1::vector<__weak id<SCManagedDeviceCapacityAnalyzerListener>, std::__1::allocator<__weak id<SCManagedDeviceCapacityAnalyzerListener>>>> {
    struct vector<__weak id<SCManagedDeviceCapacityAnalyzerListener>, std::__1::allocator<__weak id<SCManagedDeviceCapacityAnalyzerListener>>> *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<std::__1::vector<__weak id<SCManagedVideoDataSourceListener>, std::__1::allocator<__weak id<SCManagedVideoDataSourceListener>>>> {
    struct vector<__weak id<SCManagedVideoDataSourceListener>, std::__1::allocator<__weak id<SCManagedVideoDataSourceListener>>> *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<std::__1::vector<__weak id<SCNetworkConnectivityListener>, std::__1::allocator<__weak id<SCNetworkConnectivityListener>>>> {
    struct vector<__weak id<SCNetworkConnectivityListener>, std::__1::allocator<__weak id<SCNetworkConnectivityListener>>> *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<std::__1::vector<__weak id<SCOperaEventListener>, std::__1::allocator<__weak id<SCOperaEventListener>>>> {
    struct vector<__weak id<SCOperaEventListener>, std::__1::allocator<__weak id<SCOperaEventListener>>> *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<std::__1::vector<__weak id<SCPreloadListener>, std::__1::allocator<__weak id<SCPreloadListener>>>> {
    struct vector<__weak id<SCPreloadListener>, std::__1::allocator<__weak id<SCPreloadListener>>> *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<std::__1::vector<__weak id<SCStudySettingsListener>, std::__1::allocator<__weak id<SCStudySettingsListener>>>> {
    struct vector<__weak id<SCStudySettingsListener>, std::__1::allocator<__weak id<SCStudySettingsListener>>> *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<std::__1::vector<__weak id<SCSubscriptionListener>, std::__1::allocator<__weak id<SCSubscriptionListener>>>> {
    struct vector<__weak id<SCSubscriptionListener>, std::__1::allocator<__weak id<SCSubscriptionListener>>> *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<std::__1::vector<__weak id<SCUIStatusBarOrientationListener>, std::__1::allocator<__weak id<SCUIStatusBarOrientationListener>>>> {
    struct vector<__weak id<SCUIStatusBarOrientationListener>, std::__1::allocator<__weak id<SCUIStatusBarOrientationListener>>> *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<std::__1::vector<__weak id<SCURLSummaryListener>, std::__1::allocator<__weak id<SCURLSummaryListener>>>> {
    struct vector<__weak id<SCURLSummaryListener>, std::__1::allocator<__weak id<SCURLSummaryListener>>> *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct sockaddr_in6 {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned int _field4;
    struct in6_addr _field5;
    unsigned int _field6;
};

struct timeval {
    long long tv_sec;
    int tv_usec;
};

struct tm_zip_s {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
};

struct type {
    unsigned char __lx[24];
};

struct uniTexture_mapper {
    struct _shRGB2NV21Convertor *_field1;
    int *_field2;
    char *_field3;
    int _field4;
    int _field5;
    unsigned int _field6;
};

struct uniXYStep_mapper {
    struct _shRGB2NV21Convertor *_field1;
    struct vec2 *_field2;
    char *_field3;
    int _field4;
    int _field5;
    unsigned int _field6;
};

struct unique_ptr<LSCoreManagerImpl, std::__1::default_delete<LSCoreManagerImpl>> {
    struct __compressed_pair<LSCoreManagerImpl *, std::__1::default_delete<LSCoreManagerImpl>> {
        struct LSCoreManagerImpl *_field1;
    } _field1;
};

struct vec2;

struct vector<__weak id<LSAEffectsManagerListener>, std::__1::allocator<__weak id<LSAEffectsManagerListener>>>;

struct vector<__weak id<SCAddressSummaryListener>, std::__1::allocator<__weak id<SCAddressSummaryListener>>>;

struct vector<__weak id<SCAudioSessionListener>, std::__1::allocator<__weak id<SCAudioSessionListener>>>;

struct vector<__weak id<SCChatViewLifeCycleListener>, std::__1::allocator<__weak id<SCChatViewLifeCycleListener>>>;

struct vector<__weak id<SCChatViewModelListener>, std::__1::allocator<__weak id<SCChatViewModelListener>>>;

struct vector<__weak id<SCImageProcessVideoPlaybackSessionListener>, std::__1::allocator<__weak id<SCImageProcessVideoPlaybackSessionListener>>>;

struct vector<__weak id<SCManagedCapturerListener>, std::__1::allocator<__weak id<SCManagedCapturerListener>>>;

struct vector<__weak id<SCManagedDeviceCapacityAnalyzerListener>, std::__1::allocator<__weak id<SCManagedDeviceCapacityAnalyzerListener>>>;

struct vector<__weak id<SCManagedVideoDataSourceListener>, std::__1::allocator<__weak id<SCManagedVideoDataSourceListener>>>;

struct vector<__weak id<SCNetworkConnectivityListener>, std::__1::allocator<__weak id<SCNetworkConnectivityListener>>>;

struct vector<__weak id<SCOperaEventListener>, std::__1::allocator<__weak id<SCOperaEventListener>>>;

struct vector<__weak id<SCPreloadListener>, std::__1::allocator<__weak id<SCPreloadListener>>>;

struct vector<__weak id<SCStudySettingsListener>, std::__1::allocator<__weak id<SCStudySettingsListener>>>;

struct vector<__weak id<SCSubscriptionListener>, std::__1::allocator<__weak id<SCSubscriptionListener>>>;

struct vector<__weak id<SCUIStatusBarOrientationListener>, std::__1::allocator<__weak id<SCUIStatusBarOrientationListener>>>;

struct vector<__weak id<SCURLSummaryListener>, std::__1::allocator<__weak id<SCURLSummaryListener>>>;

struct vector<char, std::__1::allocator<char>> {
    char *_field1;
    char *_field2;
    struct __compressed_pair<char *, std::__1::allocator<char>> {
        char *_field1;
    } _field3;
};

struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field2;
    struct __compressed_pair<std::__1::basic_string<char>*, std::__1::allocator<std::__1::basic_string<char>>> {
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field1;
    } _field3;
};

struct vector<unsigned char, std::__1::allocator<unsigned char>> {
    char *_field1;
    char *_field2;
    struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char>> {
        char *_field1;
    } _field3;
};

struct weak_ptr<adl::media::IosCamera> {
    struct IosCamera *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct z_stream_s {
    char *next_in;
    unsigned int avail_in;
    unsigned long long total_in;
    char *next_out;
    unsigned int avail_out;
    unsigned long long total_out;
    char *msg;
    struct internal_state *state;
    CDUnknownFunctionPointerType zalloc;
    CDUnknownFunctionPointerType zfree;
    void *opaque;
    int data_type;
    unsigned long long adler;
    unsigned long long reserved;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    float Position[3];
    float TexCoord[2];
} CDStruct_ab452293;

typedef struct {
    unsigned int didChangeInsertionPointContext:1;
    unsigned int didChangeValidCashTagRanges:1;
    unsigned int didChangeHighlightedCashTagRanges:1;
    unsigned int didChangeSwipeToSendMarkerEntered:1;
} CDStruct_193cfb47;

typedef struct {
    unsigned int :3;
    unsigned int :20;
    unsigned int :20;
    unsigned int :20;
    unsigned int :1;
} CDStruct_55d6cf6b;

typedef struct {
    double latitude;
    double longitude;
} CDStruct_2c43369c;

typedef struct {
    float _field1;
    float _field2;
    _Bool _field3;
} CDStruct_6fe4de6c;

typedef struct {
    long long version;
    void *info;
    CDUnknownFunctionPointerType retain;
    CDUnknownFunctionPointerType release;
    CDUnknownFunctionPointerType copyDescription;
} CDStruct_4210025a;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    long long _field1;
    int _field2;
} CDStruct_87dc826d;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct {
    struct __CVOpenGLESTextureCache *textureCache;
    unsigned int positionSlot;
    unsigned int texCoordSlot;
    unsigned int texUniformY;
    unsigned int texUniformUV;
    unsigned int scaleUniformUV;
    float scaleUV;
    unsigned int sizeUniform;
    CDStruct_ab452293 vertices[4];
    int srcWidth;
    int srcHeight;
} CDStruct_bed3c653;

typedef struct {
    CDStruct_2c43369c _field1;
    CDStruct_2c43369c _field2;
} CDStruct_2f492f29;

typedef struct {
    struct tm_zip_s _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
} CDStruct_192a48cb;

// Template types
typedef struct function<void (const adl::netio::HttpResult &)> {
    struct type __buf_;
    struct __base<void (const adl::netio::HttpResult &)> *__f_;
} function_1dcf92b8;

typedef struct shared_ptr<LSTextureBase> {
    struct LSTextureBase *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_a891c4af;

typedef struct shared_ptr<addlive::DirectRendererCallback> {
    struct DirectRendererCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_fe59ffec;

typedef struct shared_ptr<addlive::NumberResponder> {
    struct NumberResponder *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_b2984fc8;

typedef struct shared_ptr<addlive::RendererCallback> {
    struct RendererCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_e8cb2ba3;

typedef struct shared_ptr<addlive::Service> {
    struct Service *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_756dba43;

typedef struct shared_ptr<addlive::ServiceListener> {
    struct ServiceListener *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_5fdff3df;

typedef struct shared_ptr<addlive::StringDictResponder> {
    struct StringDictResponder *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_13f5941a;

typedef struct shared_ptr<addlive::StringListResponder> {
    struct StringListResponder *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_382e76bc;

typedef struct shared_ptr<addlive::StringResponder> {
    struct StringResponder *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_c924c628;

typedef struct shared_ptr<addlive::VoidResponder> {
    struct VoidResponder *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_c0f0acb2;

typedef struct shared_ptr<adl::media::IosCamera> {
    struct IosCamera *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_12afbc6d;
