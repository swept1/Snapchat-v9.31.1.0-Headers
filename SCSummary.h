//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class UIImage;

@interface SCSummary : NSObject <NSCoding>
{
    UIImage *_thumbnailImage;
    long long _thumbnailState;
}

@property(nonatomic) long long thumbnailState; // @synthesize thumbnailState=_thumbnailState;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
- (void).cxx_destruct;
- (long long)mediaMetadataAvailable;
- (_Bool)isValidSummary;
- (id)cacheId;
- (void)fetchData;
- (void)fetchThumbnailImageFromCacheWithCompletion:(CDUnknownBlockType)arg1;
- (id)cache;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

