//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSString, SCSingleIconConfigurer, SCSingleIconView, UILabel;

@interface SCHorizontalScrollCollectionViewCell : UICollectionViewCell
{
    UILabel *_mainTextLabel;
    NSString *_idText;
    SCSingleIconView *_iconView;
    SCSingleIconConfigurer *_singleIconConfigurer;
}

+ (double)horizontalScrollThumbnailSize;
@property(retain, nonatomic) SCSingleIconConfigurer *singleIconConfigurer; // @synthesize singleIconConfigurer=_singleIconConfigurer;
@property(retain, nonatomic) SCSingleIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) NSString *idText; // @synthesize idText=_idText;
@property(retain, nonatomic) UILabel *mainTextLabel; // @synthesize mainTextLabel=_mainTextLabel;
- (void).cxx_destruct;
- (id)thumbnailLayer;
- (id)thumbnailIcon;
- (double)labelTextSize;
- (void)setDisplayNameForFriendStories:(id)arg1;
- (void)updateWithLiveStories:(id)arg1;
- (void)setupMainTextLabel;
- (void)setupIconView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

