//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber;

@interface SOJUBroadcastArticleMetadataListBuilder : NSObject
{
    NSArray *_tiles;
    NSNumber *_generationTs;
}

+ (id)withJUBroadcastArticleMetadataList:(id)arg1;
- (void).cxx_destruct;
- (id)setGenerationTs:(id)arg1;
- (id)setTiles:(id)arg1;
- (id)build;

@end
