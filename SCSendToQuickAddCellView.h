//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCAddFriendButtonDelegate.h"

@class Friend, NSString, SCAddFriendButton, SCFriendProfileCellTextView;

@interface SCSendToQuickAddCellView : UIView <SCAddFriendButtonDelegate>
{
    UIView *_buttonContainer;
    SCFriendProfileCellTextView *_textView;
    SCAddFriendButton *_button;
    id <SCSendToQuickAddCellViewDelegate> _delegate;
    Friend *_friend;
}

+ (id)sendToQuickAddCellViewWithDelegate:(id)arg1;
@property(retain, nonatomic) Friend *friend; // @synthesize friend=_friend;
- (void).cxx_destruct;
- (void)addFriendPressed:(id)arg1 friend:(id)arg2;
- (void)updateButtonWithType:(long long)arg1 friend:(id)arg2 style:(long long)arg3;
- (void)updateWithMainLabel:(id)arg1 subLabel:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
