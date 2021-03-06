//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADNativeAd.h"

#import "GADAdLoading.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSString;

@interface GADNativeCustomTemplateAd : GADNativeAd <GADAdLoading>
{
    NSDictionary *_optionalImageURLs;
    NSDictionary *_requiredImageURLs;
    NSMutableDictionary *_imageAssets;
    NSDictionary *_numberAssets;
    NSDictionary *_stringAssets;
    NSMutableSet *_availableAssetKeys;
    NSString *_templateID;
}

+ (id)requestParametersForAdLoader:(id)arg1;
+ (id)requiredDelegateProtocol;
@property(readonly, nonatomic) NSString *templateID; // @synthesize templateID=_templateID;
- (void).cxx_destruct;
- (void)didReceiveAdForAdLoader:(id)arg1;
- (void)loadAssets;
- (void)loadImageAssetsWithImageURLDictionary:(id)arg1;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (id)numberForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)imageForKey:(id)arg1;
@property(readonly, nonatomic) NSArray *availableAssetKeys;
- (id)requiredAssets;
- (void)performClickOnAsset:(id)arg1;
- (id)clickActionTemplateID;
- (_Bool)hasValidConfigurationForRequestParameters:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

