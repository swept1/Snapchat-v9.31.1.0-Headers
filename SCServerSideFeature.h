//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABTestForFeature, NSString;

@interface SCServerSideFeature : NSObject
{
    _Bool _onByDefault;
    NSString *_featureName;
    ABTestForFeature *_ABTestForFeature;
}

@property(retain, nonatomic) ABTestForFeature *ABTestForFeature; // @synthesize ABTestForFeature=_ABTestForFeature;
@property(nonatomic) _Bool onByDefault; // @synthesize onByDefault=_onByDefault;
@property(copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
- (void).cxx_destruct;
- (_Bool)shouldBeTurnedOn:(id)arg1;
- (id)initWithFeatureName:(id)arg1 onByDefault:(_Bool)arg2 ABTestForFeature:(id)arg3;
- (id)initWithFeatureName:(id)arg1 onByDefault:(_Bool)arg2;
- (id)initWithFeatureName:(id)arg1 withABTestForFeature:(id)arg2;

@end
