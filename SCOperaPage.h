//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface SCOperaPage : NSObject
{
    _Bool _autoAdvanceEnabled;
    _Bool _skipDisabled;
    _Bool _longPressEnabled;
    NSString *__id;
    NSDictionary *_properties;
    NSArray *_layers;
    long long _loadingState;
    double _autoAdvanceTimeMS;
    NSString *_accessibilityLabel;
}

+ (id)pageWithProperties:(id)arg1;
@property(readonly, copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(readonly, nonatomic) _Bool longPressEnabled; // @synthesize longPressEnabled=_longPressEnabled;
@property(readonly, nonatomic) _Bool skipDisabled; // @synthesize skipDisabled=_skipDisabled;
@property(readonly, nonatomic) double autoAdvanceTimeMS; // @synthesize autoAdvanceTimeMS=_autoAdvanceTimeMS;
@property(readonly, nonatomic) _Bool autoAdvanceEnabled; // @synthesize autoAdvanceEnabled=_autoAdvanceEnabled;
@property(readonly, nonatomic) long long loadingState; // @synthesize loadingState=_loadingState;
@property(copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;
@property(copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly, copy, nonatomic) NSString *_id; // @synthesize _id=__id;
- (void).cxx_destruct;
- (void)copyIfNotNil:(id)arg1 to:(id)arg2 keys:(id)arg3;
- (id)_setupLayers:(id)arg1;
- (void)_updateBasedOnCurrentProperties;
- (id)initWithProperties:(id)arg1;

@end
