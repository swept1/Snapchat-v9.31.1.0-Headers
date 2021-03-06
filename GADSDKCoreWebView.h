//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADAdViewDelegate.h"

@class GADActiveViewGMSGHandler, GADAdView, GADAdViewDelegate, GADSDKCoreGMSGHandler, NSMapTable, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface GADSDKCoreWebView : NSObject <GADAdViewDelegate>
{
    long long _state;
    _Bool _hasSDKCoreLoadedAtLeastOnce;
    NSMutableArray *_pendingJSCommands;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSObject<OS_dispatch_queue> *_commandQueue;
    NSMutableSet *_SDKCoreObservers;
    GADAdViewDelegate *_adViewDelegate;
    GADAdView *_adView;
    GADActiveViewGMSGHandler *_activeViewGMSGHandler;
    NSMapTable *_activeViewObservers;
    NSMutableSet *_runningActiveViewObservers;
    GADSDKCoreGMSGHandler *_SDKCoreGMSGHandler;
}

@property(retain, nonatomic) GADSDKCoreGMSGHandler *SDKCoreGMSGHandler; // @synthesize SDKCoreGMSGHandler=_SDKCoreGMSGHandler;
- (void).cxx_destruct;
- (_Bool)isActiveViewRunning;
- (void)clearAllActiveViewInstances;
- (void)removeActiveViewObserverForActiveViewID:(unsigned long long)arg1;
- (void)setActiveViewObserver:(id)arg1 forActiveViewID:(unsigned long long)arg2;
- (void)postJSNotification:(id)arg1 userInfo:(id)arg2;
- (void)dispatchPendingJavaScriptCommands;
- (void)executePendingJavaScriptCommands;
- (void)executeJavaScriptCommand:(id)arg1;
@property _Bool hasSDKCoreLoadedAtLeastOnce;
@property long long state;
- (void)notifyAllObserversOnlyOnceThatSDKCoreRequestIsFinished;
- (void)adViewDidFinishLoad:(id)arg1;
- (void)adView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)adView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)refreshSDKCoreAndNotifyObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserverForOneTimeNotification:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

