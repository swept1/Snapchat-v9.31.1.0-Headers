//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCDiscoverUserState;

@interface SCDiscoverEditionMediaLoader : NSObject
{
    id <SCDiscoverEditionMediaLoaderDataSource> _dataSource;
    id <SCDiscoverEditionMediaLoaderDelegate> _delegate;
    SCDiscoverUserState *_mostRecentUserState;
}

@property(retain, nonatomic) SCDiscoverUserState *mostRecentUserState; // @synthesize mostRecentUserState=_mostRecentUserState;
@property(nonatomic) __weak id <SCDiscoverEditionMediaLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SCDiscoverEditionMediaLoaderDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)newDownloadRequestForAdChunk:(id)arg1 withDownloadRequestForChunk:(id)arg2;
- (void)waitForAdTransform:(id)arg1 timeToWait:(double)arg2 intervalToCheck:(double)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)handleSkipLoadingAdChunk:(id)arg1;
- (void)handleDidFinishLoadingChunk:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)handleDidStartLoadingChunk:(id)arg1;
- (void)handleWillStartLoadingChunk:(id)arg1;
- (id)didUpdateNotificationUserInfoWithUpdateType:(unsigned long long)arg1 chunk:(id)arg2 success:(id)arg3 error:(id)arg4;
- (void)postDidFinishLoadingChunkNotificationWithChunk:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)postDidStartLoadingChunkNotificationWithChunk:(id)arg1;
- (void)loadAdChunk:(id)arg1 withDownloadingRequest:(id)arg2 editionIsBeingViewed:(_Bool)arg3;
- (void)loadChunk:(id)arg1 withDownloadingRequest:(id)arg2;
- (void)_loadMediaWithCurrentChunk:(id)arg1 currentChunkIndex:(long long)arg2 edition:(id)arg3;
- (void)loadMediaWithSession:(id)arg1;
- (void)loadEditionMedia;

@end

