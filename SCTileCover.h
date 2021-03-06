//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "SCMediaOwnerProtocol.h"

@class NSDictionary, NSString, NSURL, SCRequest, SCTiles;

@interface SCTileCover : NSObject <SCMediaOwnerProtocol, NSCoding>
{
    SCRequest *_imageRequest;
    _Bool _displayHasChanged;
    SCTiles *_tiles;
    NSDictionary *_imageTypeToLoadState;
    NSString *_tileCoverId;
    NSString *_headline;
    NSURL *_imageURL;
}

+ (id)fastCodingKeys;
@property(nonatomic) _Bool displayHasChanged; // @synthesize displayHasChanged=_displayHasChanged;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSString *headline; // @synthesize headline=_headline;
@property(readonly, copy, nonatomic) NSString *tileCoverId; // @synthesize tileCoverId=_tileCoverId;
@property(copy, nonatomic) NSDictionary *imageTypeToLoadState; // @synthesize imageTypeToLoadState=_imageTypeToLoadState;
@property(nonatomic) __weak SCTiles *tiles; // @synthesize tiles=_tiles;
- (void).cxx_destruct;
- (_Bool)displaysEqual:(id)arg1;
- (void)didDecodeObject;
- (void)setNilValueForKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (_Bool)preferFastCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)cacheKeyForCoverImageMediaWithImageType:(unsigned long long)arg1;
- (id)cacheMediaIds;
- (void)coverImageWithSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchMediaForSize:(struct CGSize)arg1 immediately:(_Bool)arg2;
- (unsigned long long)_imageTypeForSize:(struct CGSize)arg1;
- (unsigned long long)_loadStateForImageType:(unsigned long long)arg1;
- (unsigned long long)loadStateForSize:(struct CGSize)arg1;
- (void)_setLoadState:(unsigned long long)arg1 forImageType:(unsigned long long)arg2;
- (void)resetLoadStates;
- (id)initWithTileCover:(id)arg1;
- (void)updateWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

