//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADAd, GADRequestError, GADSlot;

@protocol GADSlotAdResponseDelegate <NSObject>
- (_Bool)slot:(GADSlot *)arg1 didReceiveAd:(GADAd *)arg2;
- (void)slot:(GADSlot *)arg1 didFailToReceiveAdWithError:(GADRequestError *)arg2;
@end

