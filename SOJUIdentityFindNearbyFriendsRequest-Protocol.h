//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"
#import "SOJUAuthPayload.h"

@class NSNumber, NSString;

@protocol SOJUIdentityFindNearbyFriendsRequest <NSObject, NSCoding, NSCopying, SOJUAuthPayload>
@property(readonly, copy, nonatomic) NSString *action;
@property(readonly, copy, nonatomic) NSNumber *totalPollingDurationMillis;
@property(readonly, copy, nonatomic) NSNumber *accuracyMeters;
@property(readonly, copy, nonatomic) NSNumber *longValue;
@property(readonly, copy, nonatomic) NSNumber *lat;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, copy, nonatomic) NSString *reqToken;
@property(readonly, copy, nonatomic) NSString *timestamp;
@end

