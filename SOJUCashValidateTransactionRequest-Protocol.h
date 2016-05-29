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

@protocol SOJUCashValidateTransactionRequest <NSObject, NSCoding, NSCopying, SOJUAuthPayload>
@property(readonly, copy, nonatomic) NSNumber *rain;
@property(readonly, copy, nonatomic) NSArray *cashTags;
@property(readonly, copy, nonatomic) NSArray *mediaCardAttributes;
@property(readonly, copy, nonatomic) NSArray *textAttributes;
@property(readonly, copy, nonatomic) NSString *message;
@property(readonly, copy, nonatomic) NSString *currencyCode;
@property(readonly, copy, nonatomic) NSNumber *amount;
@property(readonly, copy, nonatomic) NSString *recipient;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, copy, nonatomic) NSString *reqToken;
@property(readonly, copy, nonatomic) NSString *timestamp;
@end
