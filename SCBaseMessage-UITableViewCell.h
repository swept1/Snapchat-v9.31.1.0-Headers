//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCBaseMessage.h"

#import "SCMessageTableViewCellDelegate.h"

@class NSString;

@interface SCBaseMessage (UITableViewCell) <SCMessageTableViewCellDelegate>
+ (id)defaultToChatTextWithTimestamp:(id)arg1;
- (_Bool)shouldShowSubLabelForWelcomeMessage;
- (id)messageViewType;
- (_Bool)shouldShowActivityIndicator;
- (_Bool)shouldHideActionText;
- (id)substituteActionText;
- (id)actionTextWithTimestamp:(id)arg1;
- (id)iconImageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

