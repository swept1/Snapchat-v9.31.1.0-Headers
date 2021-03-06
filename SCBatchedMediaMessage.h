//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCBaseMediaMessage.h"

#import "MediaUploadDelegate.h"
#import "SCChatMediaMessageStateDelegate.h"

@class NSMutableArray, NSString;

@interface SCBatchedMediaMessage : SCBaseMediaMessage <SCChatMediaMessageStateDelegate, MediaUploadDelegate>
{
    NSMutableArray *_mediaList;
}

@property(retain, nonatomic) NSMutableArray *mediaList; // @synthesize mediaList=_mediaList;
- (void).cxx_destruct;
- (void)retryToSend;
- (long long)scaMediaType;
- (_Bool)shouldNotifyUserOfFailure;
- (unsigned long long)notificationType;
- (id)sendJSON;
- (id)senderId;
- (_Bool)_allValidMediasAreUploaded;
- (void)mediaUploadDidFailForMedia:(id)arg1;
- (void)mediaUploadDidLoseMediaData:(id)arg1;
- (void)mediaUploadDidSucceedForMedia:(id)arg1;
- (long long)uploadMediaTypeForMedia:(id)arg1;
- (id)uploadMediaIdForMedia:(id)arg1;
- (_Bool)hasUploadedAllMedia;
- (_Bool)isLoaded;
- (_Bool)isNotLoaded;
- (_Bool)isMediaDataLoadedInCache;
- (void)fetchMediaWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchMedia;
- (void)preloadMedia;
- (void)setDefaultUploadingDelegateIfNecessary;
- (void)uploadAndSend;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)failedToDecode;
- (id)initWithCoder:(id)arg1;
- (id)initWithSender:(id)arg1 recipient:(id)arg2;
- (id)initWithUsername:(id)arg1 dictionary:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

