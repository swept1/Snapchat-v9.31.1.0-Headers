//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUPresenceMessage.h"

@class NSDictionary, NSNumber, NSString, SOJUHeader, SOJUHereAuth;

@interface SOJUPresenceMessage : NSObject <SOJUPresenceMessage>
{
    SOJUHeader *_header;
    NSNumber *_retried;
    NSString *_type;
    NSString *_idValue;
    NSDictionary *_presences;
    NSNumber *_supportsHere;
    NSNumber *_receivingVideo;
    SOJUHereAuth *_hereAuth;
}

@property(readonly, copy, nonatomic) SOJUHereAuth *hereAuth; // @synthesize hereAuth=_hereAuth;
@property(readonly, copy, nonatomic) NSNumber *receivingVideo; // @synthesize receivingVideo=_receivingVideo;
@property(readonly, copy, nonatomic) NSNumber *supportsHere; // @synthesize supportsHere=_supportsHere;
@property(readonly, copy, nonatomic) NSDictionary *presences; // @synthesize presences=_presences;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSNumber *retried; // @synthesize retried=_retried;
@property(readonly, copy, nonatomic) SOJUHeader *header; // @synthesize header=_header;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHeader:(id)arg1 retried:(id)arg2 type:(id)arg3 idValue:(id)arg4 presences:(id)arg5 supportsHere:(id)arg6 receivingVideo:(id)arg7 hereAuth:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

