//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCScanCardTableViewCell.h"

@class NSString, SCBrowserViewController, SOJUScannableActionOpenUrl, UIButton, UIImage, UIImageView, UILabel, UIView;

@interface SCScanCardOpenUrl : SCScanCardTableViewCell
{
    SOJUScannableActionOpenUrl *_openUrl;
    UIView *_horizontalSeparator;
    UIView *_headerBackgroundView;
    UIImageView *_headerImageView;
    UIImage *_headerImage;
    UILabel *_titleLabel;
    UILabel *_bylineLabel;
    UIView *_textContainer;
    UIButton *_openButton;
    UIButton *_cancelButton;
    NSString *_openButtonTitle;
    _Bool _shouldRenderHeaderCircle;
    SCBrowserViewController *_browserViewController;
    NSString *_scanData;
}

- (void).cxx_destruct;
- (void)_didTapCancelButton;
- (void)_didTapOpenButton;
- (void)_setupHeader;
- (void)updateStyle;
- (void)transitionToContentAnimated:(_Bool)arg1;
- (void)_setupView;
- (void)_setupBrowser;
- (id)initWithOpenUrl:(id)arg1 scanData:(id)arg2;

@end
