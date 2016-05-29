//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SCAdCache : NSObject
{
    NSMutableDictionary *_cachedAdSections;
}

+ (id)path;
+ (_Bool)initialized;
+ (id)shared;
@property(retain, nonatomic) NSMutableDictionary *cachedAdSections; // @synthesize cachedAdSections=_cachedAdSections;
- (void).cxx_destruct;
- (void)removeExpiredAdsForOwner:(id)arg1;
- (void)removeCachedSectionsForEndpoint:(id)arg1;
- (void)cacheSections:(id)arg1 forEndpoint:(id)arg2;
- (id)cachedSectionsForEndpoint:(id)arg1;
- (_Bool)saveState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)clear;

@end
