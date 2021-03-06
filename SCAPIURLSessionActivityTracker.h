//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSURLSession;

@interface SCAPIURLSessionActivityTracker : NSObject
{
    NSObject<OS_dispatch_queue> *_infoUpdateQueue;
    long long _maxFinishedTasks;
    long long _maxFinishedBytes;
    unsigned long long _finishedTasks;
    unsigned long long _finishedBytes;
    id <SCAPIURLSessionActivityTrackerDelegate> _delegate;
    NSURLSession *_session;
}

@property(nonatomic) __weak NSURLSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <SCAPIURLSessionActivityTrackerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reset;
- (void)updateWithMaxFinishedBytes:(long long)arg1 maxFinishedTasks:(long long)arg2;
- (_Bool)shouldRecreateSessionToAvoidThrottling;
- (void)sessionDidFinishBytes:(id)arg1 bytesCount:(unsigned long long)arg2;
- (void)sessionDidFinishTask:(id)arg1;
- (void)sessionCreated:(id)arg1;
- (id)initWithMaxFinishedBytes:(long long)arg1 maxFinishedTasks:(long long)arg2 delegate:(id)arg3;

@end

