//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCRegisterV2ViewDelegate.h"

@class NSString, SCLoginV2View;

@interface SCLoginV2ViewController : UIViewController <SCRegisterV2ViewDelegate>
{
    _Bool _loggingIn;
    SCLoginV2View *_loginView;
}

- (void).cxx_destruct;
- (id)getPageViewName;
- (void)_presentEmptyUsernameAlertView;
- (void)_presentResetPasswordChoiceAlertView;
- (void)_SMSOptionSelected;
- (void)_toSMSResetPwdPage;
- (void)_toEmailResetPwdPage;
- (void)_setLoggingIn:(_Bool)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)backButtonPressed:(id)arg1;
- (void)continueButtonClicked;
- (void)forgotPasswordClicked;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_loginReactivationStatus:(id)arg1;
- (void)_loginReactivationConfirmationNeeded:(id)arg1;
- (void)_loginDidFail:(id)arg1;
- (void)_loginVerificationNeeded:(id)arg1;
- (void)_loginUsernameNeeded:(id)arg1;
- (void)_loginTwoFANeeded:(id)arg1;
- (void)_loginDidSucceed:(id)arg1;
- (void)_removeLoginNotificationListeners;
- (void)_addLoginNotificationListeners;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

