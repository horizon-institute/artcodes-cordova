// Generated by Apple Swift version 2.2 (swiftlang-703.0.18.8 clang-703.0.31)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
enum Match : NSInteger;

SWIFT_CLASS("_TtC15ArtcodesScanner6Action")
@interface Action : NSObject
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, copy) NSString * _Nullable url;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull codes;
@property (nonatomic) enum Match match;
@property (nonatomic, copy) NSString * _Nullable actionDescription;
@property (nonatomic, copy) NSString * _Nullable image;
@property (nonatomic, copy) NSString * _Nullable owner;
@property (nonatomic) BOOL showDetail;
@property (nonatomic, readonly, copy) NSString * _Nullable displayURL;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface Action (SWIFT_EXTENSION(ArtcodesScanner))
@end

@protocol MarkerDetectionHandler;
@class Experience;

SWIFT_CLASS("_TtC15ArtcodesScanner17DetectionSettings")
@interface DetectionSettings : NSObject
@property (nonatomic, readonly) NSInteger minRegions;
@property (nonatomic, readonly) NSInteger maxRegions;
@property (nonatomic, readonly) NSInteger maxRegionValue;
@property (nonatomic, readonly) NSInteger checksum;
@property (nonatomic, readonly) NSInteger maxEmptyRegions;
@property (nonatomic, readonly) BOOL ignoreEmptyRegions;
@property (nonatomic, readonly, copy) NSSet<NSString *> * _Nonnull validCodes;
@property (nonatomic) BOOL detected;
@property (nonatomic, strong) id <MarkerDetectionHandler> _Nonnull handler;
@property (nonatomic) NSInteger displayText;
@property (nonatomic) NSInteger displayOutline;
@property (nonatomic) NSInteger displayThreshold;
- (nonnull instancetype)initWithExperience:(Experience * _Nonnull)experience handler:(id <MarkerDetectionHandler> _Nonnull)handler OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15ArtcodesScanner10Experience")
@interface Experience : NSObject
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, copy) NSString * _Nullable icon;
@property (nonatomic, copy) NSString * _Nullable image;
@property (nonatomic, copy) NSString * _Nullable experienceDescription;
@property (nonatomic, copy) NSString * _Nullable author;
@property (nonatomic, copy) NSString * _Nullable originalID;
@property (nonatomic, copy) NSArray<Action *> * _Nonnull actions;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull pipeline;
@property (nonatomic, copy) void (^ _Nullable callback)(void);
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface Experience (SWIFT_EXTENSION(ArtcodesScanner))
- (nonnull instancetype)initWithExperience:(Experience * _Nonnull)experience;
@end

@class MarkerRegion;

SWIFT_CLASS("_TtC15ArtcodesScanner6Marker")
@interface Marker : NSObject
@property (nonatomic, readonly) NSInteger index;
@property (nonatomic, readonly, copy) NSArray<MarkerRegion *> * _Nonnull regions;
- (nonnull instancetype)initWithIndex:(NSInteger)index regions:(NSArray<MarkerRegion *> * _Nonnull)regions OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@end

@class SceneDetails;

SWIFT_PROTOCOL("_TtP15ArtcodesScanner22MarkerDetectionHandler_")
@protocol MarkerDetectionHandler
- (void)onMarkersDetected:(NSArray<Marker *> * _Nonnull)markers scene:(SceneDetails * _Nonnull)scene;
- (void)reset;
@end

@class UIImage;

SWIFT_CLASS("_TtC15ArtcodesScanner11MarkerImage")
@interface MarkerImage : NSObject
@property (nonatomic, copy) NSString * _Nonnull code;
@property (nonatomic, strong) UIImage * _Nonnull image;
@property (nonatomic) float x;
@property (nonatomic) float y;
@property (nonatomic) float width;
@property (nonatomic) float height;
@property (nonatomic) BOOL detectionActive;
@property (nonatomic) BOOL newDetection;
- (nonnull instancetype)initWithCode:(NSString * _Nonnull)code image:(UIImage * _Nonnull)image x:(float)x y:(float)y width:(float)width height:(float)height OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15ArtcodesScanner12MarkerRegion")
@interface MarkerRegion : NSObject
@property (nonatomic, readonly) NSInteger index;
@property (nonatomic, readonly) NSInteger value;
@property (nonatomic, strong) id _Nullable data;
- (nonnull instancetype)initWithIndex:(NSInteger)index value:(NSInteger)value OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@end


SWIFT_CLASS("_TtC15ArtcodesScanner26MarkerWithEmbeddedChecksum")
@interface MarkerWithEmbeddedChecksum : Marker
@property (nonatomic, readonly, strong) MarkerRegion * _Nonnull embeddedChecksumRegion;
- (nonnull instancetype)initWithIndex:(NSInteger)index regions:(NSArray<MarkerRegion *> * _Nonnull)regions embeddedChecksumRegion:(MarkerRegion * _Nonnull)embeddedChecksumRegion OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, Match) {
  Matchany = 0,
  Matchall = 1,
  Matchsequence = 2,
};

@class NSDictionary;
@class NSCoder;
@class UIView;
@class UIButton;

SWIFT_CLASS("_TtC15ArtcodesScanner21ScannerViewController")
@interface ScannerViewController : UIViewController
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified actionButton;
@property (nonatomic, strong) id <MarkerDetectionHandler> _Nullable markerDetectionHandler;
@property (nonatomic, strong) Experience * _Null_unspecified experience;
+ (ScannerViewController * _Nullable)scanner:(NSDictionary * _Nonnull)dict closure:(void (^ _Nonnull)(NSString * _Nonnull))closure;
- (nonnull instancetype)initWithExperience:(Experience * _Nonnull)experience OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillAppear:(BOOL)animated;
- (IBAction)openAction:(id _Nonnull)sender;
- (UIStatusBarStyle)preferredStatusBarStyle;
- (UIInterfaceOrientationMask)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
- (id <MarkerDetectionHandler> _Nonnull)getMarkerDetectionHandler;
- (void)onCodeDetected:(NSString * _Nonnull)code;
- (UIView * _Nonnull)getThumbnailView;
@end

#pragma clang diagnostic pop
