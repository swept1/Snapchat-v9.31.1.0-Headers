//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface SOJUIdentityPhoneVerifyResponseBuilder : NSObject
{
    NSString *_message;
    NSNumber *_logged;
    NSNumber *_throttled;
    NSString *_action;
    NSString *_messageFormat;
    NSString *_confirm;
}

+ (id)withJUIdentityPhoneVerifyResponse:(id)arg1;
- (void).cxx_destruct;
- (id)setConfirm:(id)arg1;
- (id)setMessageFormat:(id)arg1;
- (id)setAction:(id)arg1;
- (id)setThrottled:(id)arg1;
- (id)setLogged:(id)arg1;
- (id)setMessage:(id)arg1;
- (id)build;

@end

