//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCPaymentSwipeMessage, SCPaymentSwipeSenderViewController;

@protocol SCPaymentSwipeSenderDelegate <NSObject>

@optional
- (void)didSwipe:(SCPaymentSwipeMessage *)arg1;
- (void)didFinishSwipeToSend:(SCPaymentSwipeSenderViewController *)arg1 completed:(_Bool)arg2;
- (void)didFinishSwipeDown;
@end
