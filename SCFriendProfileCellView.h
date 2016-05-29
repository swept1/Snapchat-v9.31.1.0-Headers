//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCAddFriendButtonV2Delegate.h"
#import "SCProfilePictureThumbnailDelegate.h"

@class Friend, NSString, SCAddFriendButtonV2, SCFriendProfileCellTextView, SCFriendProfileCellTextViewV2, SCFriendmojiView, SCProfilePictureThumbnail;

@interface SCFriendProfileCellView : UIView <SCProfilePictureThumbnailDelegate, SCAddFriendButtonV2Delegate>
{
    UIView *_thumbnailContainer;
    UIView *_emojiContainer;
    UIView *_buttonContainer;
    UIView *_buttonEmojiContainer;
    SCProfilePictureThumbnail *_thumbnail;
    SCFriendProfileCellTextView *_textView;
    SCFriendProfileCellTextViewV2 *_textViewV2;
    SCFriendmojiView *_friendMojiView;
    SCAddFriendButtonV2 *_button;
    id <SCFriendProfileCellViewDelegate> _delegate;
    Friend *_friend;
}

+ (id)profileCellView:(id)arg1;
@property(retain, nonatomic) Friend *friend; // @synthesize friend=_friend;
- (void).cxx_destruct;
- (void)didDisplayProfilePictureOnThumbnail:(id)arg1 friend:(id)arg2;
- (void)buttonV2Pressed:(id)arg1 friend:(id)arg2;
- (_Bool)didDisplayProfilePicture;
- (void)toggleRightOffset:(_Bool)arg1;
- (void)updateWithMainLabel:(id)arg1 subLabel:(id)arg2 thirdLabel:(id)arg3 style:(long long)arg4;
- (void)updateButtonWithState:(long long)arg1 friend:(id)arg2 style:(long long)arg3;
- (void)updateWithMainLabel:(id)arg1 subLabel:(id)arg2 style:(long long)arg3 paddingStyle:(long long)arg4;
- (void)updateWithMainLabel:(id)arg1 subLabel:(id)arg2 style:(long long)arg3;
- (void)updateEmojiViewWithFriend:(id)arg1 emojiViewType:(long long)arg2;
- (void)updateThumbnailWithFriend:(id)arg1 contexts:(id)arg2 style:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
