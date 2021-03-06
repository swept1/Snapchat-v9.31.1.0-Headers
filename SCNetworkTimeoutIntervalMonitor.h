//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSURL, NSURLSession, SCQueueWithCapacity, SCReachabilityFromNetworkPing, SCTimeoutIntervalEstimator;

@interface SCNetworkTimeoutIntervalMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_pingQueue;
    NSURL *_pingURL;
    _Bool _isMonitoringStarted;
    double _pingTimeoutInterval;
    NSURLSession *_pingSession;
    double _pingInterval;
    NSObject<OS_dispatch_source> *_pingTimer;
    unsigned long long _numOfPingRequestSent;
    SCTimeoutIntervalEstimator *_timeoutIntervalEstimator;
    SCQueueWithCapacity *_pingResults;
    SCReachabilityFromNetworkPing *_reachabilityFromNetworkPing;
}

+ (id)shared;
- (void).cxx_destruct;
- (id)_getPingResultssWithinStartTime:(double)arg1 endTime:(double)arg2;
- (id)_getRTTStatsWithinStartTime:(double)arg1 endTime:(double)arg2;
- (id)networkPingStatusAndParameters;
- (id)getRTTStatsFromStartTime:(double)arg1 endTime:(double)arg2 minumumSamples:(unsigned long long)arg3;
- (double)networkRTT;
- (double)timeoutInterval;
- (void)updateRTTEstimatorWithPingRequestIndex:(unsigned long long)arg1 latency:(double)arg2;
- (void)ping;
- (void)stopMonitoring;
- (id)createSessionTimerWithInterval:(double)arg1 queue:(id)arg2;
- (id)defaultPingURLString;
- (void)startMonitoring;
- (id)createSessionWithTimeoutInterval:(double)arg1;
- (void)dealloc;
- (id)init;

@end

