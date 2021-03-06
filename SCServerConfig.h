//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SOJUConfigConfigResponse;

@interface SCServerConfig : NSObject
{
    _Bool _shouldReloadApp;
    SOJUConfigConfigResponse *_configs;
}

+ (id)path;
+ (id)shared;
@property(retain) SOJUConfigConfigResponse *configs; // @synthesize configs=_configs;
@property _Bool shouldReloadApp; // @synthesize shouldReloadApp=_shouldReloadApp;
- (void).cxx_destruct;
- (id)getFullNameFromNamespace:(id)arg1 configName:(id)arg2;
- (void)clear;
- (_Bool)saveState;
- (double)floatValueForConfig:(id)arg1 withNamespace:(id)arg2 default:(double)arg3;
- (_Bool)booleanValueForConfig:(id)arg1 withNamespace:(id)arg2 default:(_Bool)arg3;
- (long long)integerValueForConfig:(id)arg1 withNamespace:(id)arg2 default:(long long)arg3;
- (id)stringValueForConfig:(id)arg1 withNamespace:(id)arg2 default:(id)arg3;
- (_Bool)shouldUpdateReloadMarkerWithOldConfigs:(id)arg1 newConfigs:(id)arg2;
- (id)updateWithJsonDictionary:(id)arg1;
- (void)fetchAndUpdateConfigs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

