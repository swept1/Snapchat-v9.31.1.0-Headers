//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, SCBaseMessage;

@protocol SCBaseMessageParametersDelegate <NSObject>
- (_Bool)chatSequencesUpdated;
- (unsigned long long)nextUserChatMessageSequenceForMessage:(SCBaseMessage *)arg1;
- (NSDictionary *)chatMessageParametersWithSender:(NSString *)arg1 recipient:(NSString *)arg2;
@end

