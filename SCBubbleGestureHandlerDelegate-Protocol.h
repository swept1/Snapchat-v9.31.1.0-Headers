//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCBaseMediaMessage, SCBaseMessage, SCBubbleGestureHandler, SCChatBaseNoteMediaMessage, SCPaymentMessage, Snap;

@protocol SCBubbleGestureHandlerDelegate <NSObject>
- (void)didDismissFullScreenWithGestureHandler:(SCBubbleGestureHandler *)arg1;
- (SCChatBaseNoteMediaMessage *)nextChatNoteMessageOfChatNoteMessage:(SCChatBaseNoteMediaMessage *)arg1;
- (void)unpreserveMediaMessage:(SCBaseMediaMessage *)arg1;
- (void)preserveMediaMessage:(SCBaseMediaMessage *)arg1;
- (void)loadSnap:(Snap *)arg1 userInitiated:(_Bool)arg2;
- (void)handleLongPressForCellWithPaymentMessage:(SCPaymentMessage *)arg1;
- (void)resolveBlockersForPaymentMessage:(SCPaymentMessage *)arg1;
- (_Bool)shouldResolveBlockersForPaymentMessage:(SCPaymentMessage *)arg1;
- (void)onPaymentTapped:(SCPaymentMessage *)arg1;
- (void)saveOrUnsaveMessage:(SCBaseMessage *)arg1 inStackedGroup:(_Bool)arg2;
- (void)deleteFailedMessage:(id <SCMessage>)arg1;
- (void)attemptRetryBlockForMessage:(SCBaseMessage *)arg1;
@end
