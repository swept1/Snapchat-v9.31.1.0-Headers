//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatViewLifeCycleListener.h"
#import "UITableViewDelegate.h"

@class NSString, SCChatViewModelForChat;

@interface SCChatTableViewDelegate : NSObject <UITableViewDelegate, SCChatViewLifeCycleListener>
{
    SCChatViewModelForChat *_chatViewModel;
    id <SCChatTableViewCellGestureDelegate> _delegate;
    double _reloadingOldChatsTableHeight;
}

- (void).cxx_destruct;
- (void)_fetchMediaWithStoryMediaMessage:(id)arg1;
- (void)_fetchMediaWithBatchedMediaMessage:(id)arg1;
- (void)_fetchMediaWithBaseMediaMessage:(id)arg1;
- (void)stopAudioVideoNotePlayer;
- (void)stopAnimationForCells:(id)arg1;
- (void)startAnimationForCells:(id)arg1;
- (void)clearMediaForCells:(id)arg1;
- (void)loadVideoForVisibleCells:(id)arg1;
- (void)tableView:(id)arg1 loadMoreMessagesWithRetry:(_Bool)arg2 historicalLoader:(_Bool)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)hasBottomPaddingForIndexPath:(id)arg1;
- (void)tableViewDidLoadOldMessages:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)setChatViewModel:(id)arg1;
- (id)initWithGestureDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
