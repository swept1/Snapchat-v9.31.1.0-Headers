//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ADLSpeechActivityInfo : NSObject
{
    int _activity;
    long long _userId;
}

+ (id)SpeechActivityInfoWithUserId:(long long)arg1 activity:(int)arg2;
@property(readonly, nonatomic) int activity; // @synthesize activity=_activity;
@property(readonly, nonatomic) long long userId; // @synthesize userId=_userId;
- (id)description;
- (id)initWithUserId:(long long)arg1 activity:(int)arg2;

@end
