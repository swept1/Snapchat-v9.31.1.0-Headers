//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface SCBroadcastInitModel : NSObject <NSCoding>
{
    NSString *_sortOrderId;
    NSString *_lastUpdatedHashcode;
}

+ (id)fastCodingKeys;
@property(copy, nonatomic) NSString *lastUpdatedHashcode; // @synthesize lastUpdatedHashcode=_lastUpdatedHashcode;
@property(copy, nonatomic) NSString *sortOrderId; // @synthesize sortOrderId=_sortOrderId;
- (void).cxx_destruct;
- (void)setNilValueForKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (_Bool)preferFastCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)didSucceedWithDictionary:(id)arg1;
- (void)fetch;

@end

