//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SOJUUnlockablesMetricsBuilder : NSObject
{
    NSString *_unlockableId;
    NSString *_unlockableType;
}

+ (id)withJUUnlockablesMetrics:(id)arg1;
- (void).cxx_destruct;
- (id)setUnlockableType:(id)arg1;
- (id)setUnlockableId:(id)arg1;
- (id)build;

@end

