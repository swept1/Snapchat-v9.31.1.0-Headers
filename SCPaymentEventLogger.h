//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCPaymentEventLogger : NSObject
{
}

+ (void)logPaymentStateViewed:(id)arg1;
+ (void)logPaymentReceiveFailed:(id)arg1;
+ (void)logPaymentReceiveInitiated:(id)arg1;
+ (void)logPaymentSent:(id)arg1;
+ (void)logPaymentSendFailed:(id)arg1;
+ (void)logPaymentSendRetried:(id)arg1;
+ (void)logPaymentSendInitiated:(id)arg1 withSwipe:(_Bool)arg2;
+ (void)logSwipeToSendInitiated;
+ (void)logCashTagCreated;
+ (void)logCashButtonTapped;
+ (void)logCardLinkingCanceled;
+ (void)logIdentityVerificationCanceled;
+ (void)logIdentityVerificationFailed;
+ (void)logIdentityVerificationSucceeded;
+ (void)logCardRelinking;
+ (void)logCardLinkingFailedWithReason:(id)arg1;
+ (void)logCardLinkingSucceededWithRelink:(_Bool)arg1;
+ (void)logPhoneNumberVerificationFailed;
+ (void)logPhoneNumberVerificationCanceled;
+ (void)logPhoneNumberVerificationSucceeded;
+ (void)logSquareTOSCanceled;
+ (void)logSquareTOSAccepted;

@end

