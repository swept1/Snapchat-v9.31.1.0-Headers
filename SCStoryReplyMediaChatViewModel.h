//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCSavableItemChatViewModel.h"

#import "SCMediaChatCellViewConfig.h"

@class SCStoryReplyMediaMessageViewModel;

@interface SCStoryReplyMediaChatViewModel : SCSavableItemChatViewModel <SCMediaChatCellViewConfig>
{
    SCStoryReplyMediaMessageViewModel *_storyReplyMessageModel;
}

- (void).cxx_destruct;
- (double)thumbnailWidth;
- (double)thumbnailHeight;
- (double)bodyContentWidth;
- (double)payloadVerticalMargin;
- (double)payloadHeight;
- (id)storyReplyMessageModel;
- (id)mediaMessage;
- (id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2;
- (id)reusableCellIdentifier;

@end

