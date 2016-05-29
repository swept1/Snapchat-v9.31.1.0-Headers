//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface ALSpeechActivityEvent : NSObject
{
    NSString *_scopeId;
    NSArray *_speechActivity;
    NSArray *_activeSpeakers;
}

@property(copy, nonatomic) NSArray *activeSpeakers; // @synthesize activeSpeakers=_activeSpeakers;
@property(copy, nonatomic) NSArray *speechActivity; // @synthesize speechActivity=_speechActivity;
@property(copy, nonatomic) NSString *scopeId; // @synthesize scopeId=_scopeId;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDict:(id)arg1;

@end
