//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSDictionary, NSNumber, NSString, SOJUAnalyticsAnalyticsMetrics;

@protocol SOJUAnalyticsAnalyticsEvent <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *userId;
@property(readonly, copy, nonatomic) NSNumber *ts;
@property(readonly, copy, nonatomic) SOJUAnalyticsAnalyticsMetrics *metrics;
@property(readonly, copy, nonatomic) NSDictionary *params;
@property(readonly, copy, nonatomic) NSString *eventName;
@end

