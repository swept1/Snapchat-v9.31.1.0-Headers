//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSTimer;

@interface SCTileCoordinator : NSObject
{
    NSTimer *_timer;
    NSHashTable *_tileViews;
}

@property(retain, nonatomic) NSHashTable *tileViews; // @synthesize tileViews=_tileViews;
- (void).cxx_destruct;
- (void)_alternateTileWithTileView:(id)arg1;
- (void)_alternateTiles;
- (void)stopAlternating;
- (void)startAlternating;
- (void)setAllCoversHeadlineAlpha:(double)arg1;
- (id)init;

@end
