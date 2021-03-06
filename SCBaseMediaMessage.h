//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCBaseMessage.h"

#import "BaseNoteMediaProcessingDelegate.h"
#import "MediaDataSource.h"
#import "MediaDelegate.h"
#import "MediaImageProcessingDelegate.h"
#import "SnapVideoFilterDelegate.h"

@class Media, NSString, NSURL, SnapVideoFilter;

@interface SCBaseMediaMessage : SCBaseMessage <BaseNoteMediaProcessingDelegate, MediaImageProcessingDelegate, MediaDelegate, SnapVideoFilterDelegate, MediaDataSource>
{
    _Bool _failedToSendToNonFriend;
    _Bool _didRetryLoadingMedia;
    Media *_media;
    double _height;
    NSString *_mediaId;
    NSString *_mediaUrl;
    long long _mediaState;
    long long _senderState;
    NSURL *_url;
    double _width;
    SnapVideoFilter *_videoFilter;
    id <SCBaseMediaMessageUploadingDelegate> _uploadingDelegate;
    unsigned long long _sourceDrawerPosition;
    long long _sourceDrawerViewMode;
    NSString *_iv;
    NSString *_key;
    struct CGSize _size;
}

+ (id)stringForChatMediaType:(long long)arg1;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *iv; // @synthesize iv=_iv;
@property(nonatomic) _Bool didRetryLoadingMedia; // @synthesize didRetryLoadingMedia=_didRetryLoadingMedia;
@property(nonatomic) long long sourceDrawerViewMode; // @synthesize sourceDrawerViewMode=_sourceDrawerViewMode;
@property(nonatomic) unsigned long long sourceDrawerPosition; // @synthesize sourceDrawerPosition=_sourceDrawerPosition;
@property(nonatomic) __weak id <SCBaseMediaMessageUploadingDelegate> uploadingDelegate; // @synthesize uploadingDelegate=_uploadingDelegate;
@property(retain, nonatomic) SnapVideoFilter *videoFilter; // @synthesize videoFilter=_videoFilter;
@property(nonatomic) double width; // @synthesize width=_width;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) long long senderState; // @synthesize senderState=_senderState;
@property(nonatomic) long long mediaState; // @synthesize mediaState=_mediaState;
@property(copy, nonatomic) NSString *mediaUrl; // @synthesize mediaUrl=_mediaUrl;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) _Bool failedToSendToNonFriend; // @synthesize failedToSendToNonFriend=_failedToSendToNonFriend;
- (void).cxx_destruct;
- (long long)scaMessageType;
- (_Bool)shouldNotifyUserOfFailure;
- (unsigned long long)notificationType;
- (id)sendJSON;
- (_Bool)_isSenderStateIntermediate;
- (_Bool)isInvalidAfterUnarchiving;
- (_Bool)isImage;
- (_Bool)isVideoWithSound;
- (_Bool)isVideo;
- (_Bool)isBroadcastForMedia:(id)arg1;
- (void)removeMediaFromCache;
- (long long)mediaType;
- (void)didFinishDownload:(id)arg1 success:(_Bool)arg2 numBytes:(unsigned long long)arg3;
- (void)didStartDownload:(id)arg1;
- (void)fetchMediaDidSucceedForMedia:(id)arg1;
- (void)fetchMediaBadRequestForMedia:(id)arg1;
- (void)fetchMediaNotFoundForMedia:(id)arg1;
- (void)fetchMediaDidFailForMedia:(id)arg1;
- (void)fetchMediaIsGoneForMedia:(id)arg1;
- (void)fetchMediaIsLoadingForMedia:(id)arg1;
- (id)requestContexts;
- (long long)requestFallbackPriority;
- (long long)requestPriorityUserInitiated:(_Bool)arg1;
- (id)endpointParamsForMedia:(id)arg1;
- (id)URLForMedia:(id)arg1;
- (_Bool)needsAuthToFetch;
- (_Bool)encrypt;
- (_Bool)persist;
- (id)encryptionDictionaryForMedia:(id)arg1;
- (id)decryptData:(id)arg1 forMedia:(id)arg2;
- (id)mediaIdForMedia:(id)arg1;
- (id)endpointForMedia:(id)arg1;
- (id)videoURL;
- (_Bool)containsVideo;
- (_Bool)containsGif;
- (id)cacheId;
- (_Bool)isNotLoaded;
- (_Bool)isLoading;
- (_Bool)isLoaded;
- (_Bool)isMediaDataLoadedInCache;
- (void)mediaFailedToLoadFromCache;
- (_Bool)isMediaExpired;
- (void)gifWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)imageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchMediaWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchMedia;
- (void)preloadMedia;
- (void)sentWithSuccess:(_Bool)arg1 response:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)failedToDecode;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasFailed;
- (void)videoProcessingDidFailForSnapVideoFilter:(id)arg1 error:(id)arg2;
- (void)videoProcessingDidSucceedForSnapVideoFilter:(id)arg1 data:(id)arg2;
- (void)imageProcessingDidSucceedForMedia:(id)arg1;
- (void)baseNoteMediaProcessingDidSucceedForMedia:(id)arg1;
- (void)setDataToUpload:(id)arg1;
- (void)didUploadFailure;
- (void)didUploadSuccess;
- (void)upload;
@property(retain, nonatomic) Media *media; // @synthesize media=_media;
- (id)initWithSender:(id)arg1 recipient:(id)arg2;
- (id)initWithUsername:(id)arg1 dictionary:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

