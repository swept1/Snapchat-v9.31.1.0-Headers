//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSIndexPath;

@protocol SCChatViewModelListener <NSObject>

@optional
- (void)didViewModelsChange;
- (void)stackedViewModel:(NSIndexPath *)arg1 didChildrenChangeAt:(NSArray *)arg2;
- (void)didMessagesDeleteAtIndexPaths:(NSArray *)arg1;
- (void)didMessagesAddAtIndexPaths:(NSArray *)arg1;
- (void)didMessagesChangeAtIndexPaths:(NSArray *)arg1;
- (void)willViewModelsChange;
- (void)presenceUpdated;
@end

