//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"
#import "SOJUAuthPayload.h"

@class NSArray, NSNumber, NSString;

@protocol SOJUIdentitySuggestedFriendActionRequest <NSObject, NSCoding, NSCopying, SOJUAuthPayload>
@property(readonly, copy, nonatomic) NSArray *seenSuggestedFriendList;
@property(readonly, copy, nonatomic) NSNumber *identityCellIndex;
@property(readonly, copy, nonatomic) NSString *friendId;
@property(readonly, copy, nonatomic) NSString *friend;
@property(readonly, copy, nonatomic) NSNumber *hide;
@property(readonly, copy, nonatomic) NSNumber *seen;
@property(readonly, copy, nonatomic) NSString *action;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, copy, nonatomic) NSString *reqToken;
@property(readonly, copy, nonatomic) NSString *timestamp;
@end
