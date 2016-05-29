//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCHydraCardCell.h"

#import "UIWebViewDelegate.h"

@class NSString, NSURL, SCHydraPerformanceTiming, UIViewController, UIWebView;

@interface SCHydraBluelinksCard : SCHydraCardCell <UIWebViewDelegate>
{
    UIWebView *_webView;
    NSURL *_baseURL;
    SCHydraPerformanceTiming *_performanceTiming;
    UIViewController *_parentViewController;
}

@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) __weak SCHydraPerformanceTiming *performanceTiming; // @synthesize performanceTiming=_performanceTiming;
@property(copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
