//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCScanCardTableViewCell.h"

@interface SCScanCardTableViewCell (UIHelpers)
- (void)fetchImageWithCompletion:(id)arg1 imageProxyCallback:(CDUnknownBlockType)arg2;
- (id)addSecondaryHeaderWithSize:(double)arg1 content:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
- (void)performCrossfadeAnimationWithShowViews:(id)arg1 hideViews:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performInitialAnimationWithHeaderView:(id)arg1 offset:(double)arg2 crossfadeHeader:(_Bool)arg3 hideViews:(id)arg4 showViews:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)addPrimaryHeaderWithSize:(double)arg1 content:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
- (id)addSecondaryHeaderLabelWithText:(id)arg1;
- (id)addFooterButtonWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 showsDivider:(_Bool)arg4;
- (id)addActionButtonWithWidth:(double)arg1 Title:(id)arg2 target:(id)arg3 selector:(SEL)arg4 aboveView:(id)arg5;
- (id)addActionButtonWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 aboveView:(id)arg4;
- (id)createCircularHeaderViewWithDiameter:(double)arg1;
- (id)createHorizontalDividerView;
- (void)updateTitleOnButton:(id)arg1 withText:(id)arg2 style:(unsigned long long)arg3;
- (id)buttonWithStyle:(unsigned long long)arg1 title:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
- (id)attributedStringWithFontSize:(double)arg1 fontWeight:(unsigned long long)arg2 textColor:(id)arg3 characterSpacing:(double)arg4 text:(id)arg5;
- (id)labelForAttributedText;
- (id)labelWithFontSize:(double)arg1 fontWeight:(unsigned long long)arg2 textColor:(id)arg3 textAlignment:(long long)arg4;
- (id)labelWithFontSize:(double)arg1 textColor:(id)arg2 textAlignment:(long long)arg3;
- (id)labelWithFontSize:(double)arg1 fontWeight:(unsigned long long)arg2 textColor:(id)arg3;
- (id)labelWithFontSize:(double)arg1 textColor:(id)arg2;
- (void)clearCardView;
@end
