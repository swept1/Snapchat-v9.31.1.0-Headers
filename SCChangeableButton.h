//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAlertViewActionButton.h"

@class NSString, SCLoadingIndicatorView, UIImageView, UIView;

@interface SCChangeableButton : SCAlertViewActionButton
{
    _Bool _shouldPresentHighlightedStyle;
    UIView *_assetView;
    NSString *_buttonTitle;
    UIImageView *_actionView;
    UIImageView *_reverseActionView;
    SCLoadingIndicatorView *_loadingView;
    NSString *_actionButtonTitle;
    NSString *_reverseActionTitle;
    NSString *_loadingButtonTitle;
    NSString *_reverseLoadingTitle;
    unsigned long long _style;
    struct CGSize _buttonSize;
}

+ (id)_highlightFillColorWithButtonStyle:(unsigned long long)arg1;
+ (id)_fillColorWithButtonStyle:(unsigned long long)arg1;
+ (id)_highlightBorderColorWithButtonStyle:(unsigned long long)arg1;
+ (id)_borderColorWithButtonStyle:(unsigned long long)arg1;
+ (id)_highlightTextColorWithButtonStyle:(unsigned long long)arg1;
+ (id)_textColorWithButtonStyle:(unsigned long long)arg1;
+ (id)_fontForButtonStyle:(unsigned long long)arg1;
+ (double)_textHeightWithTitle:(id)arg1 style:(unsigned long long)arg2;
+ (unsigned long long)_kerningWithStyle:(unsigned long long)arg1;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *reverseLoadingTitle; // @synthesize reverseLoadingTitle=_reverseLoadingTitle;
@property(copy, nonatomic) NSString *loadingButtonTitle; // @synthesize loadingButtonTitle=_loadingButtonTitle;
@property(copy, nonatomic) NSString *reverseActionTitle; // @synthesize reverseActionTitle=_reverseActionTitle;
@property(copy, nonatomic) NSString *actionButtonTitle; // @synthesize actionButtonTitle=_actionButtonTitle;
@property(retain, nonatomic) SCLoadingIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIImageView *reverseActionView; // @synthesize reverseActionView=_reverseActionView;
@property(retain, nonatomic) UIImageView *actionView; // @synthesize actionView=_actionView;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) UIView *assetView; // @synthesize assetView=_assetView;
@property(readonly, nonatomic) struct CGSize buttonSize; // @synthesize buttonSize=_buttonSize;
- (void).cxx_destruct;
- (void)_updateShouldPresentHighlightedStyle:(_Bool)arg1;
- (id)attributedTitle;
- (id)attributedHighlightTitle;
- (void)setAssetViewWithSpacing:(double)arg1;
- (void)setColor;
- (void)setTitle;
- (void)setButtonState:(unsigned long long)arg1;
- (id)initWithState:(unsigned long long)arg1 config:(id)arg2;

@end

