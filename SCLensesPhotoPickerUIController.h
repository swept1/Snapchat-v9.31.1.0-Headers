//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensesInputImagesProviderDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSString, SCLensesPhotoPickerPopoverView, UICollectionView, UILabel, UIView;

@interface SCLensesPhotoPickerUIController : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, SCLensesInputImagesProviderDelegate>
{
    SCLensesPhotoPickerPopoverView *_view;
    UIView *_contentView;
    UILabel *_warningMessageLabel;
    UIView *_photoAccessPromptView;
    UICollectionView *_photosCollectionView;
    _Bool _isShown;
    _Bool _canProcessMoreImages;
    _Bool _isWaitingForPhotoPermissionsToShow;
    id <SCLensesInputImagesProviderProtocol> _imagesProvider;
    UIView *_parentView;
    unsigned long long _imagesCount;
    long long _selectedPhotoIndex;
    NSString *_activeLensFaceId;
    NSString *_selectedPhotoRequestId;
}

@property(retain, nonatomic) NSString *selectedPhotoRequestId; // @synthesize selectedPhotoRequestId=_selectedPhotoRequestId;
@property(retain, nonatomic) NSString *activeLensFaceId; // @synthesize activeLensFaceId=_activeLensFaceId;
@property(nonatomic) long long selectedPhotoIndex; // @synthesize selectedPhotoIndex=_selectedPhotoIndex;
@property(nonatomic) _Bool isWaitingForPhotoPermissionsToShow; // @synthesize isWaitingForPhotoPermissionsToShow=_isWaitingForPhotoPermissionsToShow;
@property(nonatomic) _Bool canProcessMoreImages; // @synthesize canProcessMoreImages=_canProcessMoreImages;
@property(nonatomic) unsigned long long imagesCount; // @synthesize imagesCount=_imagesCount;
@property(retain, nonatomic) UICollectionView *photosCollectionView; // @synthesize photosCollectionView=_photosCollectionView;
@property(retain, nonatomic) UIView *photoAccessPromptView; // @synthesize photoAccessPromptView=_photoAccessPromptView;
@property(retain, nonatomic) UILabel *warningMessageLabel; // @synthesize warningMessageLabel=_warningMessageLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) SCLensesPhotoPickerPopoverView *view; // @synthesize view=_view;
@property(retain, nonatomic) UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) id <SCLensesInputImagesProviderProtocol> imagesProvider; // @synthesize imagesProvider=_imagesProvider;
@property(nonatomic) _Bool isShown; // @synthesize isShown=_isShown;
- (void).cxx_destruct;
- (void)setPhotoPermissionsPromptHidden:(_Bool)arg1;
- (void)hideWarning;
- (void)showWarningWithText:(id)arg1;
- (void)showWarningTextIfNeeded;
- (void)resizeCollectionViewToHugCellsAnimated:(_Bool)arg1;
- (void)selectPhotoAtIndex:(long long)arg1;
- (void)loadNextBatch;
- (void)loadNextBatchIfNeeded;
- (void)lensesInputImagesProvider:(id)arg1 didUpdateImagesCountFromValue:(long long)arg2 toValue:(long long)arg3 isIncrementalUpdate:(_Bool)arg4 canProcessMore:(_Bool)arg5;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)cleanup;
- (void)setLensFaceIdToRestore:(id)arg1;
- (_Bool)isPointInside:(struct CGPoint)arg1 view:(id)arg2;
- (void)hideAnimated:(_Bool)arg1;
- (void)showAnimated:(_Bool)arg1;
- (id)initWithParentView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

