//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "RegisterPhoneNumberViewControllerDelegate.h"
#import "SCHeaderDataSource.h"
#import "SCHeaderDelegate.h"
#import "SCRegistrationAlertControllerDelegate.h"

@class NSString, RegisterPhoneNumberViewController, SCHeader, SCRegistrationAlertController;

@interface RegisterVerifyPhoneViewController : UIViewController <RegisterPhoneNumberViewControllerDelegate, SCHeaderDataSource, SCHeaderDelegate, SCRegistrationAlertControllerDelegate>
{
    _Bool _isResumingRegistration;
    SCRegistrationAlertController *_registrationAlertController;
    RegisterPhoneNumberViewController *_registerPhoneNumberVC;
    SCHeader *_header;
    unsigned long long _hideSkipButtonGroup;
}

@property(nonatomic) unsigned long long hideSkipButtonGroup; // @synthesize hideSkipButtonGroup=_hideSkipButtonGroup;
@property(retain, nonatomic) SCHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) RegisterPhoneNumberViewController *registerPhoneNumberVC; // @synthesize registerPhoneNumberVC=_registerPhoneNumberVC;
@property(retain, nonatomic) SCRegistrationAlertController *registrationAlertController; // @synthesize registrationAlertController=_registrationAlertController;
@property(nonatomic) _Bool isResumingRegistration; // @synthesize isResumingRegistration=_isResumingRegistration;
- (void).cxx_destruct;
- (id)_pageNameForPageView;
- (void)popToRootViewController;
- (void)didVerifyPhoneNumberFailed;
- (void)logRegisterPhoneNumberAttempt:(unsigned long long)arg1;
- (void)didRegisterPhoneNumber:(id)arg1;
- (_Bool)shouldSkipConfirmation;
- (void)rightButtonPressed;
- (void)leftButtonPressed;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (unsigned long long)supportedInterfaceOrientations;
- (void)presentNextViewController:(_Bool)arg1;
- (_Bool)shouldPopToRootViewController;
- (void)finishRegistration;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)enableHeaderRightButton;
- (void)initHeader;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
