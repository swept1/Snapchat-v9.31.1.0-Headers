//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADInterstitial.h"

@class NSString;

@interface DFPInterstitial : GADInterstitial
{
    unsigned long long _previousCorrelationID;
    _Bool _customAdRenderingEnabled;
    id <GADAppEventDelegate> _appEventDelegate;
    id <DFPCustomRenderedInterstitialDelegate> _customRenderedInterstitialDelegate;
}

@property(nonatomic, getter=isCustomAdRenderingEnabled) _Bool customAdRenderingEnabled; // @synthesize customAdRenderingEnabled=_customAdRenderingEnabled;
@property(nonatomic) __weak id <DFPCustomRenderedInterstitialDelegate> customRenderedInterstitialDelegate; // @synthesize customRenderedInterstitialDelegate=_customRenderedInterstitialDelegate;
@property(nonatomic) __weak id <GADAppEventDelegate> appEventDelegate; // @synthesize appEventDelegate=_appEventDelegate;
- (void).cxx_destruct;
- (void)slot:(id)arg1 willLoadAdWithRequest:(id)arg2;
- (_Bool)slotShouldPreemptInProgressRequest:(id)arg1;
- (void)slot:(id)arg1 didReceiveAppEvent:(id)arg2 withInfo:(id)arg3;
- (void)presentFromRootViewController:(id)arg1;
- (_Bool)slot:(id)arg1 notifyPublisherToRenderCustomRenderingAd:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(copy, nonatomic) NSString *adUnitID; // @dynamic adUnitID;

@end

