//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCBubbleView, SCMessageChatViewModel;

@protocol SCBubbleViewDelegate <NSObject>
- (void)didUpdateBubbleView:(SCBubbleView *)arg1;
- (void)bubbleView:(SCBubbleView *)arg1 didBeginExpiringWithDuration:(double)arg2;
- (void)bubbleView:(SCBubbleView *)arg1 didSelectViewModel:(SCMessageChatViewModel *)arg2;
@end
