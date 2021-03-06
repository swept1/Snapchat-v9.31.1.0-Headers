//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Friend, NSString, Snap;

@protocol SCFeedItemDelegate <NSObject>
- (long long)addFriendButtonState;
- (_Bool)shouldDisableChatForInviteSnapFeed;
- (_Bool)shouldDisableChatForAddFriendFeed;
- (NSString *)username;
- (Snap *)snapToDisplay;
- (_Bool)isExpired;
- (void)resetFeedItem;
- (void)refreshData;
- (double)timeUntilDisplayedMessageExpires;
- (_Bool)shouldHighlightBackgroundIcon;
- (NSString *)iconForBackgroundHighlightedImageName;
- (NSString *)iconForBackgroundImageName;
- (_Bool)shouldShowActivityIndicator;
- (NSString *)feedIconImageName;
- (NSString *)timestamp;
- (NSString *)substituteSubLabelText;
- (NSString *)subLabelText;
- (NSString *)mainLabelText;

@optional
- (_Bool)shouldDisableMiniProfile;
- (_Bool)shouldDisableFeedSwiping;
- (long long)compareTo:(id <SCFeedItemDelegate>)arg1;
- (_Bool)shouldShowReplyLabelBriefly;
- (unsigned long long)displayedLeftTime;
- (_Bool)shouldShowIconWithTime;
- (void)resetNextVC:(id <SCChatAndFeedViewControllerDelegate>)arg1;
- (void)prepareNextVC:(id <SCChatAndFeedViewControllerDelegate>)arg1;
- (_Bool)shouldBounceCellByDefault;
- (void (^)(void))showedSubLabelCompletionHandler;
- (Friend *)friendForFeedItem;
- (NSString *)subLabelFontKey;
- (NSString *)mainLabelFontKey;
@end

