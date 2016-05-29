//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUDiscoverChannelResponse.h"

@class NSArray, NSNumber, NSString, SOJUAdPlacementMetadata, SOJUBroadcastArticleMetadataList, SOJUSponsoredSlugPosAndText;

@interface SOJUDiscoverChannelResponse : NSObject <SOJUDiscoverChannelResponse>
{
    NSString *_name;
    NSNumber *_position;
    NSNumber *_storiesPagePosition;
    NSNumber *_promotedStoriesPagePosition;
    NSString *_publisherName;
    NSString *_publisherFormalName;
    NSString *_publisherDescription;
    NSString *_publisherDeeplink;
    NSString *_filledIcon;
    NSString *_invertedIcon;
    NSString *_loadingIcon;
    NSString *_introMovie;
    NSString *_primaryColor;
    NSString *_secondaryColor;
    NSNumber *_editionId;
    NSString *_editionPublishingTimestamp;
    NSArray *_dsnapsData;
    SOJUAdPlacementMetadata *_introVideoAdMetadata;
    NSNumber *_sponsored;
    SOJUSponsoredSlugPosAndText *_sponsoredSlug;
    NSNumber *_subscribable;
    SOJUBroadcastArticleMetadataList *_tileList;
    NSString *_subscribedImage;
    NSString *_horizontalIcon;
}

@property(readonly, copy, nonatomic) NSString *horizontalIcon; // @synthesize horizontalIcon=_horizontalIcon;
@property(readonly, copy, nonatomic) NSString *subscribedImage; // @synthesize subscribedImage=_subscribedImage;
@property(readonly, copy, nonatomic) SOJUBroadcastArticleMetadataList *tileList; // @synthesize tileList=_tileList;
@property(readonly, copy, nonatomic) NSNumber *subscribable; // @synthesize subscribable=_subscribable;
@property(readonly, copy, nonatomic) SOJUSponsoredSlugPosAndText *sponsoredSlug; // @synthesize sponsoredSlug=_sponsoredSlug;
@property(readonly, copy, nonatomic) NSNumber *sponsored; // @synthesize sponsored=_sponsored;
@property(readonly, copy, nonatomic) SOJUAdPlacementMetadata *introVideoAdMetadata; // @synthesize introVideoAdMetadata=_introVideoAdMetadata;
@property(readonly, copy, nonatomic) NSArray *dsnapsData; // @synthesize dsnapsData=_dsnapsData;
@property(readonly, copy, nonatomic) NSString *editionPublishingTimestamp; // @synthesize editionPublishingTimestamp=_editionPublishingTimestamp;
@property(readonly, copy, nonatomic) NSNumber *editionId; // @synthesize editionId=_editionId;
@property(readonly, copy, nonatomic) NSString *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property(readonly, copy, nonatomic) NSString *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(readonly, copy, nonatomic) NSString *introMovie; // @synthesize introMovie=_introMovie;
@property(readonly, copy, nonatomic) NSString *loadingIcon; // @synthesize loadingIcon=_loadingIcon;
@property(readonly, copy, nonatomic) NSString *invertedIcon; // @synthesize invertedIcon=_invertedIcon;
@property(readonly, copy, nonatomic) NSString *filledIcon; // @synthesize filledIcon=_filledIcon;
@property(readonly, copy, nonatomic) NSString *publisherDeeplink; // @synthesize publisherDeeplink=_publisherDeeplink;
@property(readonly, copy, nonatomic) NSString *publisherDescription; // @synthesize publisherDescription=_publisherDescription;
@property(readonly, copy, nonatomic) NSString *publisherFormalName; // @synthesize publisherFormalName=_publisherFormalName;
@property(readonly, copy, nonatomic) NSString *publisherName; // @synthesize publisherName=_publisherName;
@property(readonly, copy, nonatomic) NSNumber *promotedStoriesPagePosition; // @synthesize promotedStoriesPagePosition=_promotedStoriesPagePosition;
@property(readonly, copy, nonatomic) NSNumber *storiesPagePosition; // @synthesize storiesPagePosition=_storiesPagePosition;
@property(readonly, copy, nonatomic) NSNumber *position; // @synthesize position=_position;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 position:(id)arg2 storiesPagePosition:(id)arg3 promotedStoriesPagePosition:(id)arg4 publisherName:(id)arg5 publisherFormalName:(id)arg6 publisherDescription:(id)arg7 publisherDeeplink:(id)arg8 filledIcon:(id)arg9 invertedIcon:(id)arg10 loadingIcon:(id)arg11 introMovie:(id)arg12 primaryColor:(id)arg13 secondaryColor:(id)arg14 editionId:(id)arg15 editionPublishingTimestamp:(id)arg16 dsnapsData:(id)arg17 introVideoAdMetadata:(id)arg18 sponsored:(id)arg19 sponsoredSlug:(id)arg20 subscribable:(id)arg21 tileList:(id)arg22 subscribedImage:(id)arg23 horizontalIcon:(id)arg24;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
