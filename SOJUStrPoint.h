//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUStrPoint.h"

@class NSString;

@interface SOJUStrPoint : NSObject <SOJUStrPoint>
{
    NSString *_x;
    NSString *_y;
}

@property(readonly, copy, nonatomic) NSString *y; // @synthesize y=_y;
@property(readonly, copy, nonatomic) NSString *x; // @synthesize x=_x;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithX:(id)arg1 y:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

