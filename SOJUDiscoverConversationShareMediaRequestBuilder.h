//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface SOJUDiscoverConversationShareMediaRequestBuilder : NSObject
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_recipients;
    NSString *_recipientIds;
    NSString *_mediaId;
    NSString *_mediaType;
    NSString *_bodyType;
    NSString *_mediaEncKey;
    NSString *_mediaEncIv;
    NSNumber *_mediaWidth;
    NSNumber *_mediaHeight;
    NSString *_seqNums;
}

+ (id)withJUDiscoverConversationShareMediaRequest:(id)arg1;
- (void).cxx_destruct;
- (id)setSeqNums:(id)arg1;
- (id)setMediaHeight:(id)arg1;
- (id)setMediaWidth:(id)arg1;
- (id)setMediaEncIv:(id)arg1;
- (id)setMediaEncKey:(id)arg1;
- (id)setBodyType:(id)arg1;
- (id)setMediaType:(id)arg1;
- (id)setMediaId:(id)arg1;
- (id)setRecipientIds:(id)arg1;
- (id)setRecipients:(id)arg1;
- (id)setUsername:(id)arg1;
- (id)setReqToken:(id)arg1;
- (id)setTimestamp:(id)arg1;
- (id)build;

@end

