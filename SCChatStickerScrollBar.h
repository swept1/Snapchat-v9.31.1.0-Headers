//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UICollectionView, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface SCChatStickerScrollBar : UIView
{
    UIView *_track;
    UIView *_slider;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    long long _rowsPerScroll;
    NSMutableArray *_originYs;
    _Bool _isPanning;
    UICollectionView *_collectionView;
    double _drawerHeight;
}

+ (id)colorForStickerScrollSlider;
+ (id)colorForStickerScrollTrack;
@property(readonly, nonatomic) _Bool isPanning; // @synthesize isPanning=_isPanning;
@property(nonatomic) double drawerHeight; // @synthesize drawerHeight=_drawerHeight;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (double)_correspondingOriginYWithCenterY:(double)arg1;
- (double)_adjustedOriginYWithOriginY:(double)arg1;
- (void)reGenerateOriginYs;
- (void)_scrollCollectionViewToOriginY:(double)arg1;
- (void)scrollScrollBarToRelativeOffset:(double)arg1;
- (double)_adjustedCenterYWithOriginY:(double)arg1;
- (void)_makeSliderWithCenterY:(double)arg1 sliderStyle:(long long)arg2;
- (void)_updateSliderWithLocation:(struct CGPoint)arg1 sliderStyle:(long long)arg2;
- (_Bool)_shouldRecognizeGestureWithLocation:(struct CGPoint)arg1;
- (void)_handleTapping:(id)arg1;
- (void)_handlePanning:(id)arg1;
- (void)dealloc;
- (id)init;

@end

