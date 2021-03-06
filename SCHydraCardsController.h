//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCHydraBluelinksCardDelegate.h"
#import "SCHydraDynamicStoryCardDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSMutableArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIView;

@interface SCHydraCardsController : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, SCHydraBluelinksCardDelegate, SCHydraDynamicStoryCardDelegate>
{
    UICollectionViewFlowLayout *_layout;
    UICollectionView *_collectionView;
    NSMutableArray *_data;
    UIView *_view;
    id <SCHydraBluelinksCardDelegate><SCHydraDynamicStoryCardDelegate> _delegate;
}

@property(nonatomic) __weak id <SCHydraBluelinksCardDelegate><SCHydraDynamicStoryCardDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)displayBluelinksDebugInfo;
- (void)card:(id)arg1 loadedSuggestedQueries:(id)arg2;
- (void)card:(id)arg1 displayUrl:(id)arg2;
- (void)card:(id)arg1 displayStory:(id)arg2;
- (void)addCard:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)scrollRecognizer;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

