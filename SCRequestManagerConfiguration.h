//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCStudySettingsListener.h"

@class NSString;

@interface SCRequestManagerConfiguration : NSObject <SCStudySettingsListener>
{
    unsigned long long _maxLargeRequests;
    unsigned long long _maxLargeRequestsFromSingleContext;
    unsigned long long _maxSmallRequests;
}

+ (unsigned long long)maxHighPriorityInContextMsgRequests;
+ (_Bool)shouldEnableHighPriorityInContextMsgRequests;
+ (id)shared;
@property unsigned long long maxSmallRequests; // @synthesize maxSmallRequests=_maxSmallRequests;
@property unsigned long long maxLargeRequestsFromSingleContext; // @synthesize maxLargeRequestsFromSingleContext=_maxLargeRequestsFromSingleContext;
@property unsigned long long maxLargeRequests; // @synthesize maxLargeRequests=_maxLargeRequests;
- (void)dealloc;
- (void)studySettingsDidChange:(id)arg1;
- (void)updateConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
