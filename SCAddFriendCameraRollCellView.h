//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class ALAssetsLibrary, NSMutableDictionary, UIImageView, UIView;

@interface SCAddFriendCameraRollCellView : UICollectionViewCell
{
    int _animationCount;
    float _centerPosition;
    ALAssetsLibrary *_assetLibrary;
    NSMutableDictionary *_assetUrlDescription;
    UIView *_animationView;
    UIImageView *_animationBaseImageView;
    UIImageView *_animationOverImageView;
    UIView *_animationScanBar;
    unsigned long long _state;
}

@property(nonatomic) float centerPosition; // @synthesize centerPosition=_centerPosition;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) int animationCount; // @synthesize animationCount=_animationCount;
@property(retain, nonatomic) UIView *animationScanBar; // @synthesize animationScanBar=_animationScanBar;
@property(retain, nonatomic) UIImageView *animationOverImageView; // @synthesize animationOverImageView=_animationOverImageView;
@property(retain, nonatomic) UIImageView *animationBaseImageView; // @synthesize animationBaseImageView=_animationBaseImageView;
@property(retain, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) NSMutableDictionary *assetUrlDescription; // @synthesize assetUrlDescription=_assetUrlDescription;
@property(retain, nonatomic) ALAssetsLibrary *assetLibrary; // @synthesize assetLibrary=_assetLibrary;
- (void).cxx_destruct;
- (void)fadeAway;
- (void)slideUp;
- (void)slideDown;
- (void)startAnimation;
- (void)lockInSuccessView;
- (void)resetState;
- (void)loadFullScreenImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopScanningAnimationWithState:(unsigned long long)arg1;
- (_Bool)startScanningAnimation;
- (void)loadAssetFromURLDescription:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
