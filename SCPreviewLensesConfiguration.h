//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCPreviewLensesConfiguration : NSObject
{
    _Bool _hasGeoLens;
    _Bool _hasSponsoredLens;
    NSString *_lensId;
    NSString *_lensFaceId;
}

@property(nonatomic) _Bool hasSponsoredLens; // @synthesize hasSponsoredLens=_hasSponsoredLens;
@property(nonatomic) _Bool hasGeoLens; // @synthesize hasGeoLens=_hasGeoLens;
@property(copy, nonatomic) NSString *lensFaceId; // @synthesize lensFaceId=_lensFaceId;
@property(copy, nonatomic) NSString *lensId; // @synthesize lensId=_lensId;
- (void).cxx_destruct;

@end

