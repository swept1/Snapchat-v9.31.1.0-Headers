//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class Friend, NSNumberFormatter, SCFriendmojiView, UILabel;

@interface SCMiniProfileTextView : UIView
{
    int _session;
    UILabel *_displayNameLabel;
    UILabel *_usernameScoreLabel;
    UIView *_friendMojiContainer;
    SCFriendmojiView *_friendMojiView;
    id <SCMiniProfileTextViewDelegate> _delegate;
    Friend *_friend;
    NSNumberFormatter *_numberFormatter;
}

+ (id)miniProfileTextView:(id)arg1 delegate:(id)arg2;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
- (void).cxx_destruct;
- (_Bool)_checkIfDisplayNameEditable:(id)arg1;
- (void)_displayNamePressed;
- (void)_resetFriendEmojiWithFriend:(id)arg1 LineHeight:(unsigned long long)arg2;
- (void)_resetWithDisplay:(id)arg1 username:(id)arg2 score:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateWithFriend:(id)arg1;

@end

