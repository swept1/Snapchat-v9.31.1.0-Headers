//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCBaseMediaCardView.h"

#import "ABUnknownPersonViewControllerDelegate.h"
#import "CNContactViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, SCPhoneMediaCardViewModel, SCStatusView, UITapGestureRecognizer, UIViewController;

@interface SCPhoneNumberMediaCardView : SCBaseMediaCardView <ABUnknownPersonViewControllerDelegate, CNContactViewControllerDelegate, UIGestureRecognizerDelegate>
{
    SCStatusView *_phoneNumberStatusView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIViewController *_parentVC;
    SCPhoneMediaCardViewModel *_viewModel;
}

- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)dismissButtonPressed;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void *)arg2;
- (void)onTap:(id)arg1;
- (double)height;
- (id)initWithViewModel:(id)arg1 parentVC:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

