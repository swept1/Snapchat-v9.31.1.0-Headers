//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSNumber, NSString;

@protocol SOJUBroadcastArticleMetadata <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSNumber *horizontalTileCropPctOffset;
@property(readonly, copy, nonatomic) NSNumber *collapsedTileCropPctOffset;
@property(readonly, copy, nonatomic) NSString *imageUrl;
@property(readonly, copy, nonatomic) NSString *headline;
@property(readonly, copy, nonatomic) NSString *tileId;
@end
