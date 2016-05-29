//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatDrawerLogger.h"
#import "SCChatInputAccessory.h"
#import "SCChatMediaDrawerPhotoPermissionViewDelegate.h"
#import "SCChatMediaDrawerSendBarDelegate.h"
#import "SCMediaDrawerDataSourceDelegate.h"
#import "SCTimeProfilable.h"
#import "SendSnapNavigationControllerDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIViewControllerPreviewingDelegate.h"

@class NSArray, NSMutableArray, NSString, SCChatMediaDrawerCollectionViewCell, SCChatMediaDrawerEmptyPlaceholderView, SCChatMediaDrawerPhotoPermissionView, SCChatMediaDrawerSendBar, SCUserSession, UIButton, UICollectionView, UICollectionViewFlowLayout, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIScrollView, UIView, UIViewController;

@interface SCChatInputMediaAccessory : NSObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, SCMediaDrawerDataSourceDelegate, SCChatMediaDrawerSendBarDelegate, SendSnapNavigationControllerDelegate, UIGestureRecognizerDelegate, UIViewControllerPreviewingDelegate, SCChatMediaDrawerPhotoPermissionViewDelegate, SCTimeProfilable, SCChatInputAccessory, SCChatDrawerLogger>
{
    SCUserSession *_userSession;
    id <SCChatInputProvider> _inputProvider;
    id <SCChatDrawerSender> _sender;
    UIViewController *_parentViewController;
    UIButton *_miniatureView;
    UIView *_drawerView;
    double _drawerHeight;
    UIScrollView *_dummyScrollView;
    NSArray *_mediaList;
    UICollectionView *_collectionView;
    SCChatMediaDrawerSendBar *_sendBar;
    double _lastVerticalModeHeight;
    double _initialDrawerHeight;
    double _lastContentInsetTop;
    UICollectionViewFlowLayout *_verticalLayout;
    UICollectionViewFlowLayout *_horizontalLayout;
    UILongPressGestureRecognizer *_longPressGesture;
    UIPanGestureRecognizer *_panGesture;
    struct CGPoint _panGestureStartLocation;
    _Bool _collapsingDrawer;
    SCChatMediaDrawerEmptyPlaceholderView *_emptyDrawerPlaceholderView;
    SCChatMediaDrawerPhotoPermissionView *_photoPermissionView;
    NSMutableArray *_selectedMediaList;
    double _selectedVideoTotalSize;
    _Bool _didInitMediaDrawerDataSource;
    SCChatMediaDrawerCollectionViewCell *_centerCell;
    long long _sentItems;
    _Bool _fullscreenImageUsed;
}

+ (long long)context;
+ (id)profiledSelectorNames;
@property(nonatomic) _Bool fullscreenImageUsed; // @synthesize fullscreenImageUsed=_fullscreenImageUsed;
- (void).cxx_destruct;
- (void)setCenterCell:(id)arg1;
- (id)excludedProfiledSelectorNames;
- (void)onEditMedia:(id)arg1;
- (void)onSelectMedia:(id)arg1;
- (_Bool)openedWithSearch;
- (long long)sentItemCount;
- (long long)drawerType;
- (void)didPressAllow;
- (_Bool)isForceTouchAvailable;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)pan:(id)arg1;
- (void)longPress:(id)arg1;
- (void)_dismissPreviewIfPresented;
- (void)didSendChatMessage;
- (void)didCancelFromPreview:(id)arg1;
- (void)presentPreviewForVideoMediaIfNeccessary:(id)arg1;
- (void)presentPreviewForVideo:(id)arg1 firstFrame:(id)arg2;
- (void)presentPreviewForImage:(id)arg1;
- (void)_resetAllSelectedItems;
- (void)_resetMediaDrawer;
- (void)didPressSend;
- (void)didPressEdit;
- (void)_switchToCollapseState;
- (void)_exitHorizontalMode;
- (void)switchToLayout:(id)arg1;
- (void)generateRowForMedias:(id)arg1 media2:(id)arg2;
- (struct CGSize)sizeForItemAtIndexPathWithHorizontalLayout:(id)arg1;
- (struct CGSize)sizeForItemAtIndexPathWithVerticalLayout:(id)arg1;
- (void)_showEmptyDrawerPlaceholderIfNecessary;
- (void)_hideSendBar;
- (void)_showSendBar;
- (void)_updateSendBar;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)_reloadThumbnailsAtIndexPaths:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidEndScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)photoPermissionView;
- (id)emptyDrawerPlaceholderView;
- (void)_makeSendBar;
- (void)_makeSectionView;
- (void)_makeDummyView;
- (id)drawerView;
- (void)_updateCollectionViewAnimated:(_Bool)arg1 deltaContentOffset:(double)arg2;
- (void)setDrawerHeight:(double)arg1 resignWhenCollapsed:(_Bool)arg2 animated:(_Bool)arg3 deltaContentOffset:(double)arg4;
- (double)drawerHeight;
- (double)maximumDrawerHeight;
- (double)defaultDrawerHeight;
- (_Bool)shouldBeginDragging;
- (_Bool)readyForPanning;
- (_Bool)expandable;
- (void)applicationDidEnterBackground;
- (void)resetMiniatureViewImageForNormalControlState;
- (void)recycleDrawerView;
- (void)resignFromActive;
- (void)cleanupForVisibleCells;
- (void)_initMediaDrawerDataSource;
- (void)_checkPermissionAndPrepareMediaDrawer;
- (void)accessoryPressed;
- (id)miniatureView;
- (id)userSession;
- (void)mediaListDidChangeAtIndexes:(id)arg1;
- (void)_refreshSelectedMediaList;
- (void)refreshData;
- (void)dealloc;
- (void)_initGestures;
- (void)_initCollectionViewLayouts;
- (id)initWithInputProvider:(id)arg1 userSession:(id)arg2 sender:(id)arg3 parentViewController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
