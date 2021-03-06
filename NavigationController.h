//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

@class SCVisualOverlayDataManager, SCVisualOverlayViewController;

@interface NavigationController : UINavigationController
{
    SCVisualOverlayViewController *_visualOverleyVC;
    SCVisualOverlayDataManager *_visualOverlayDataManager;
}

@property(retain, nonatomic) SCVisualOverlayDataManager *visualOverlayDataManager; // @synthesize visualOverlayDataManager=_visualOverlayDataManager;
@property(retain, nonatomic) SCVisualOverlayViewController *visualOverleyVC; // @synthesize visualOverleyVC=_visualOverleyVC;
- (void).cxx_destruct;
- (_Bool)shouldDisplayStatusBar;
- (_Bool)disablesAutomaticKeyboardDismissal;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (id)initWithRootViewController:(id)arg1;

@end

