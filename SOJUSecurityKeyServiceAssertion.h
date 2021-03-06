//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUSecurityKeyServiceAssertion.h"

@class NSNumber, NSString;

@interface SOJUSecurityKeyServiceAssertion : NSObject <SOJUSecurityKeyServiceAssertion>
{
    NSString *_purpose;
    NSString *_iss;
    NSString *_aud;
    NSNumber *_exp;
    NSNumber *_nbf;
    NSString *_name;
    NSString *_sub;
    NSString *_userId;
    NSString *_nonce;
}

@property(readonly, copy, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSString *sub; // @synthesize sub=_sub;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSNumber *nbf; // @synthesize nbf=_nbf;
@property(readonly, copy, nonatomic) NSNumber *exp; // @synthesize exp=_exp;
@property(readonly, copy, nonatomic) NSString *aud; // @synthesize aud=_aud;
@property(readonly, copy, nonatomic) NSString *iss; // @synthesize iss=_iss;
@property(readonly, copy, nonatomic) NSString *purpose; // @synthesize purpose=_purpose;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPurpose:(id)arg1 iss:(id)arg2 aud:(id)arg3 exp:(id)arg4 nbf:(id)arg5 name:(id)arg6 sub:(id)arg7 userId:(id)arg8 nonce:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

