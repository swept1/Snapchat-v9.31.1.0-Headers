//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Friend, SCAddFriendButtonV2, SCFeedTableViewCell;

@protocol SCFeedTableViewCellDelegate <NSObject>
- (void)cellDidEndPulling:(SCFeedTableViewCell *)arg1;
- (void)cell:(SCFeedTableViewCell *)arg1 didChangePullingOffset:(double)arg2;
- (void)cellDidBeginPulling:(SCFeedTableViewCell *)arg1;

@optional
- (void)cell:(SCFeedTableViewCell *)arg1 didPressAddFriendButton:(SCAddFriendButtonV2 *)arg2 friend:(Friend *)arg3;
- (void)cellDidEndScrolling:(SCFeedTableViewCell *)arg1;
- (void)cellDidBeginScrolling:(SCFeedTableViewCell *)arg1;
@end
