//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EphemeralMedia.h"

#import "MediaDataSource.h"
#import "MediaDelegate.h"
#import "MediaImageProcessingDelegate.h"
#import "MediaUploadDelegate.h"
#import "SCStoriesViewDataModel.h"
#import "SCStoryChromeViewDataModel.h"
#import "SCStoryExporterItem.h"

@class NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSNumber, NSString, NSURL, SCAdRequestError, SCImageToVideoWriter, SCSnapTime, SCSnapVideoFilterState, SCSponsoredSlug, SOJUStoryCollaborator, SOJUStoryFrame;

@interface Story : EphemeralMedia <MediaDataSource, MediaDelegate, MediaUploadDelegate, MediaImageProcessingDelegate, SCStoriesViewDataModel, SCStoryChromeViewDataModel, SCStoryExporterItem>
{
    _Bool _isBeingViewed;
    _Bool _screenshotReported;
    _Bool _unviewedIsBeingViewed;
    _Bool _isMyStory;
    _Bool _isMySharedStory;
    _Bool _isSharedStory;
    _Bool _isMyVerifiedStory;
    _Bool _viewed;
    _Bool _needsAuthToFetch;
    _Bool _explorerSnap;
    _Bool _deleting;
    _Bool _recentlySaved;
    _Bool _saving;
    _Bool _isDynamicAdSlot;
    _Bool _adCanFollow;
    _Bool _isSponsored;
    _Bool _addToMyStory;
    _Bool _postMaster;
    _Bool _swipeUp;
    _Bool _unrecoverable;
    _Bool _skipStoryViewLogging;
    NSDate *_expirationDate;
    NSDate *_markedAsViewedTimestamp;
    NSString *_mediaKey;
    NSString *_mediaId;
    NSString *_thumbnailId;
    NSString *_mediaIv;
    long long _mediaState;
    NSURL *_mediaURL;
    NSError *_playbackError;
    long long _postingState;
    NSArray *_requestContexts;
    long long _screenshotCount;
    NSString *_thumbnailIv;
    NSURL *_thumbnailURL;
    long long _thumbnailMediaState;
    NSDate *_timestamp;
    double _unviewedTimeLeft;
    NSString *_username;
    NSString *_kvoUsername;
    NSString *_userDisplayName;
    NSDate *_userPostedTimestamp;
    NSString *_flushableStoryId;
    NSMutableArray *_notes;
    unsigned long long _viewedCount;
    SOJUStoryFrame *_framing;
    NSString *_adUnitId;
    NSDictionary *_targetingParameters;
    long long _adResolutionState;
    NSString *_adKey;
    NSString *_adPlacementId;
    NSString *_adLineItemId;
    NSString *_adId;
    SCAdRequestError *_adRequestError;
    NSString *_adRequestClientId;
    SCSponsoredSlug *_sponsoredSlug;
    long long _adPosition;
    NSArray *_sharedStoriesToPostTo;
    NSString *_sharedStoryGroupId;
    NSString *_sharedStoryDisplayName;
    SOJUStoryCollaborator *_verifiedStoryCollaborator;
    NSArray *_officialStoriesToPostTo;
    long long _exitReason;
    SCSnapTime *_snapTime;
    NSString *_parentSnapId;
    NSString *_rootSnapId;
    unsigned long long _explorerLevel;
    long long _isExplorable;
    long long _storyIndexInViewingSession;
    NSString *_submissionId;
    long long _storySessionId;
    NSNumber *_autoAdvanceIndex;
    long long _storyTypeSpecific;
    SCImageToVideoWriter *_imageToVideoWriter;
    NSMutableArray *_mediaFetchCompletionBlocks;
    NSString *_cacheThumbnailId;
    SCSnapVideoFilterState *_videoFilterState;
}

+ (id)fastCodingKeys;
+ (id)storyFromStory:(id)arg1;
+ (id)targetStoryFromEphemeralMedia:(id)arg1;
+ (id)storyFromEphemeralMedia:(id)arg1;
@property(retain, nonatomic) SCSnapVideoFilterState *videoFilterState; // @synthesize videoFilterState=_videoFilterState;
@property(retain, nonatomic) NSString *cacheThumbnailId; // @synthesize cacheThumbnailId=_cacheThumbnailId;
@property(retain, nonatomic) NSMutableArray *mediaFetchCompletionBlocks; // @synthesize mediaFetchCompletionBlocks=_mediaFetchCompletionBlocks;
@property(retain, nonatomic) SCImageToVideoWriter *imageToVideoWriter; // @synthesize imageToVideoWriter=_imageToVideoWriter;
@property(nonatomic) long long storyTypeSpecific; // @synthesize storyTypeSpecific=_storyTypeSpecific;
@property(retain, nonatomic) NSNumber *autoAdvanceIndex; // @synthesize autoAdvanceIndex=_autoAdvanceIndex;
@property(nonatomic) long long storySessionId; // @synthesize storySessionId=_storySessionId;
@property(copy, nonatomic) NSString *submissionId; // @synthesize submissionId=_submissionId;
@property(nonatomic) long long storyIndexInViewingSession; // @synthesize storyIndexInViewingSession=_storyIndexInViewingSession;
@property(nonatomic) _Bool skipStoryViewLogging; // @synthesize skipStoryViewLogging=_skipStoryViewLogging;
@property(nonatomic) long long isExplorable; // @synthesize isExplorable=_isExplorable;
@property(nonatomic) unsigned long long explorerLevel; // @synthesize explorerLevel=_explorerLevel;
@property(retain, nonatomic) NSString *rootSnapId; // @synthesize rootSnapId=_rootSnapId;
@property(retain, nonatomic) NSString *parentSnapId; // @synthesize parentSnapId=_parentSnapId;
@property(retain, nonatomic) SCSnapTime *snapTime; // @synthesize snapTime=_snapTime;
@property(nonatomic) _Bool unrecoverable; // @synthesize unrecoverable=_unrecoverable;
@property(nonatomic) _Bool swipeUp; // @synthesize swipeUp=_swipeUp;
@property(nonatomic) long long exitReason; // @synthesize exitReason=_exitReason;
@property(nonatomic) _Bool postMaster; // @synthesize postMaster=_postMaster;
@property(copy, nonatomic) NSArray *officialStoriesToPostTo; // @synthesize officialStoriesToPostTo=_officialStoriesToPostTo;
@property(copy, nonatomic) SOJUStoryCollaborator *verifiedStoryCollaborator; // @synthesize verifiedStoryCollaborator=_verifiedStoryCollaborator;
@property(retain, nonatomic) NSString *sharedStoryDisplayName; // @synthesize sharedStoryDisplayName=_sharedStoryDisplayName;
@property(retain, nonatomic) NSString *sharedStoryGroupId; // @synthesize sharedStoryGroupId=_sharedStoryGroupId;
@property(retain, nonatomic) NSArray *sharedStoriesToPostTo; // @synthesize sharedStoriesToPostTo=_sharedStoriesToPostTo;
@property(nonatomic) _Bool addToMyStory; // @synthesize addToMyStory=_addToMyStory;
@property(nonatomic) long long adPosition; // @synthesize adPosition=_adPosition;
@property(nonatomic) _Bool isSponsored; // @synthesize isSponsored=_isSponsored;
@property(retain, nonatomic) SCSponsoredSlug *sponsoredSlug; // @synthesize sponsoredSlug=_sponsoredSlug;
@property(nonatomic) _Bool adCanFollow; // @synthesize adCanFollow=_adCanFollow;
@property(copy, nonatomic) NSString *adRequestClientId; // @synthesize adRequestClientId=_adRequestClientId;
@property(retain, nonatomic) SCAdRequestError *adRequestError; // @synthesize adRequestError=_adRequestError;
@property(copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
@property(copy, nonatomic) NSString *adLineItemId; // @synthesize adLineItemId=_adLineItemId;
@property(copy, nonatomic) NSString *adPlacementId; // @synthesize adPlacementId=_adPlacementId;
@property(copy, nonatomic) NSString *adKey; // @synthesize adKey=_adKey;
@property(nonatomic) long long adResolutionState; // @synthesize adResolutionState=_adResolutionState;
@property(retain, nonatomic) NSDictionary *targetingParameters; // @synthesize targetingParameters=_targetingParameters;
@property(copy, nonatomic) NSString *adUnitId; // @synthesize adUnitId=_adUnitId;
@property(nonatomic) _Bool isDynamicAdSlot; // @synthesize isDynamicAdSlot=_isDynamicAdSlot;
@property(copy, nonatomic) SOJUStoryFrame *framing; // @synthesize framing=_framing;
@property(nonatomic) unsigned long long viewedCount; // @synthesize viewedCount=_viewedCount;
@property(nonatomic, getter=isSaving) _Bool saving; // @synthesize saving=_saving;
@property(nonatomic, getter=isRecentlySaved) _Bool recentlySaved; // @synthesize recentlySaved=_recentlySaved;
@property(retain, nonatomic) NSMutableArray *notes; // @synthesize notes=_notes;
@property(nonatomic, getter=isDeleting) _Bool deleting; // @synthesize deleting=_deleting;
@property(nonatomic, getter=isExplorerSnap) _Bool explorerSnap; // @synthesize explorerSnap=_explorerSnap;
@property(nonatomic) _Bool needsAuthToFetch; // @synthesize needsAuthToFetch=_needsAuthToFetch;
@property(copy, nonatomic) NSString *flushableStoryId; // @synthesize flushableStoryId=_flushableStoryId;
@property(nonatomic) _Bool viewed; // @synthesize viewed=_viewed;
@property(nonatomic) _Bool isMyVerifiedStory; // @synthesize isMyVerifiedStory=_isMyVerifiedStory;
@property(nonatomic) _Bool isSharedStory; // @synthesize isSharedStory=_isSharedStory;
@property(nonatomic) _Bool isMySharedStory; // @synthesize isMySharedStory=_isMySharedStory;
@property(nonatomic) _Bool isMyStory; // @synthesize isMyStory=_isMyStory;
@property(retain, nonatomic) NSDate *userPostedTimestamp; // @synthesize userPostedTimestamp=_userPostedTimestamp;
@property(copy, nonatomic) NSString *userDisplayName; // @synthesize userDisplayName=_userDisplayName;
@property(retain, nonatomic) NSString *kvoUsername; // @synthesize kvoUsername=_kvoUsername;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) _Bool unviewedIsBeingViewed; // @synthesize unviewedIsBeingViewed=_unviewedIsBeingViewed;
@property(nonatomic) double unviewedTimeLeft; // @synthesize unviewedTimeLeft=_unviewedTimeLeft;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) long long thumbnailMediaState; // @synthesize thumbnailMediaState=_thumbnailMediaState;
@property(retain, nonatomic) NSURL *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
@property(retain, nonatomic) NSString *thumbnailIv; // @synthesize thumbnailIv=_thumbnailIv;
@property(nonatomic) _Bool screenshotReported; // @synthesize screenshotReported=_screenshotReported;
@property(nonatomic) long long screenshotCount; // @synthesize screenshotCount=_screenshotCount;
@property(retain, nonatomic) NSArray *requestContexts; // @synthesize requestContexts=_requestContexts;
@property(nonatomic) long long postingState; // @synthesize postingState=_postingState;
@property(retain, nonatomic) NSError *playbackError; // @synthesize playbackError=_playbackError;
@property(retain, nonatomic) NSURL *mediaURL; // @synthesize mediaURL=_mediaURL;
@property(nonatomic) long long mediaState; // @synthesize mediaState=_mediaState;
@property(retain, nonatomic) NSString *mediaIv; // @synthesize mediaIv=_mediaIv;
@property(retain, nonatomic) NSString *thumbnailId; // @synthesize thumbnailId=_thumbnailId;
@property(retain, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(retain, nonatomic) NSString *mediaKey; // @synthesize mediaKey=_mediaKey;
@property(retain, nonatomic) NSDate *markedAsViewedTimestamp; // @synthesize markedAsViewedTimestamp=_markedAsViewedTimestamp;
@property(nonatomic) _Bool isBeingViewed; // @synthesize isBeingViewed=_isBeingViewed;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (void).cxx_destruct;
- (id)LSIDForStoryID:(id)arg1;
- (id)ASTrimmedstoryID;
- (void)temporaryLogStoryViewState:(id)arg1;
- (_Bool)isMyProfileStory;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)flushableViewedJsonDictionary;
- (id)viewedJsonDictionary;
- (long long)uniqueCellDataId;
- (long long)uniqueCellDataIdWithSection:(long long)arg1;
- (_Bool)veryRecentlyOpenForViewingType:(long long)arg1;
- (void)markAsViewedForViewingType:(long long)arg1;
- (void)markMyStoryAsViewed;
- (void)timerFired;
- (_Bool)isBeingViewedForViewingType:(long long)arg1;
- (void)setIsBeingViewed:(_Bool)arg1 forViewingType:(long long)arg2;
- (double)timeLeftForCounterForViewingType:(long long)arg1 isFirstSnap:(_Bool)arg2;
- (void)setViewingFriendStory:(_Bool)arg1 viewingType:(long long)arg2;
- (void)removePersistedFailedStoryData;
- (void)loadPersistedFailedStoryData;
- (void)saveStoryDataToPersistentStore;
- (id)uploadSuccessUserDefaultsKey;
- (id)tempMovieURLForSaving;
- (void)postSaveWithSuccess:(_Bool)arg1;
- (void)didFinishSavingSnapToAlbumWithError:(id)arg1 isVideo:(_Bool)arg2 videoDuration:(double)arg3;
- (void)exportToVideoURLCompletion:(CDUnknownBlockType)arg1;
- (void)saveStory:(id)arg1;
- (void)deleteStory;
- (void)updatePostingStateWhileUploading:(long long)arg1;
- (void)uploadStory;
- (void)removeStory;
- (void)resetDependentStoriesState;
- (void)setUploading;
- (CDUnknownBlockType)uploadFailureBlock;
- (void)updateThumbnailMediaWithStory:(id)arg1;
- (CDUnknownBlockType)uploadSuccessBlock;
- (id)uploadParametersWithData:(_Bool)arg1;
- (id)postedTimestamp;
- (void)processFailedStory;
- (void)_setupOfficialStory:(id)arg1;
- (void)_setupSharedStory:(id)arg1;
- (void)insertIntoList;
- (void)postStory;
- (void)uploadAndPostStory;
- (void)fetchMediaUserInitiated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)displayForCount:(unsigned long long)arg1;
- (id)screenshotCountDisplay;
- (id)viewedCountDisplay;
- (void)imageProcessingDidSucceedForMedia:(id)arg1;
- (void)mediaUploadDidFailForMedia:(id)arg1;
- (void)mediaUploadDidSucceedForMedia:(id)arg1;
- (long long)uploadMediaTypeForMedia:(id)arg1;
- (id)uploadMediaIdForMedia:(id)arg1;
- (void)didFinishDownload:(id)arg1 success:(_Bool)arg2 numBytes:(unsigned long long)arg3;
- (void)didStartDownload:(id)arg1;
- (void)fetchMediaDidSucceedForMedia:(id)arg1;
- (void)handleMediaNotFoundOrBadRequestForMedia:(id)arg1;
- (void)fetchMediaBadRequestForMedia:(id)arg1;
- (void)fetchMediaNotFoundForMedia:(id)arg1;
- (void)fetchMediaDidCancelForMedia:(id)arg1;
- (void)fetchMediaDidFailForMedia:(id)arg1;
- (void)fetchMediaIsLoadingForMedia:(id)arg1 userInitiated:(_Bool)arg2;
- (_Bool)isDynamicAd;
- (_Bool)isFromGallery;
- (id)snapPostTime;
- (id)snapDisplayTitle;
- (unsigned long long)trackingExpirationInDaysForMedia:(id)arg1;
- (id)trackingMediaTypeForMedia:(id)arg1;
- (id)storyType;
- (id)trackingTypeForMedia:(id)arg1;
- (id)trackingIdForMedia:(id)arg1;
- (id)trackingId;
- (_Bool)hasNoMedia;
- (long long)requestFallbackPriority;
- (long long)requestPriorityUserInitiated:(_Bool)arg1;
- (_Bool)encrypt;
- (_Bool)persist;
- (id)encryptionDictionaryForMedia:(id)arg1;
- (id)decryptData:(id)arg1 forMedia:(id)arg2;
- (id)endpointParamsForMedia:(id)arg1;
- (id)endpointForMedia:(id)arg1;
- (id)URLForMedia:(id)arg1;
- (id)mediaIdForMedia:(id)arg1;
- (id)persistingFailuresURL;
- (_Bool)shouldReportScreenshot;
- (_Bool)isRecentlyReported;
- (_Bool)isExpired;
- (_Bool)hasUploaded;
- (_Bool)isSendingOrHasFailed;
- (_Bool)isMediaProcessingOrFailedToProcess;
- (_Bool)isMediaProcessing;
- (_Bool)hasMediaProcessingFailed;
- (_Bool)isPostingOrHasFailed;
- (_Bool)hasUploadFailed;
- (_Bool)isProcessingOrUploading;
- (_Bool)isBrandSnapStory;
- (id)cacheMediaId;
- (void)clearMediaToUpload;
- (void)updateWithStory:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)didDecodeObject;
- (void)willEncodeObject;
- (void)setNilValueForKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (_Bool)preferFastCoding;
@property(readonly, nonatomic) double percentTimeLeft;
- (void)setClientId:(id)arg1;
- (id)findDuplicatedStoryForStory:(id)arg1;
- (id)initMyStoryWithDictionary:(id)arg1;
- (id)initFriendStoryWithDictionary:(id)arg1;
- (id)initExplorerStoryWithDictionary:(id)arg1;
- (id)initWithClientId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

