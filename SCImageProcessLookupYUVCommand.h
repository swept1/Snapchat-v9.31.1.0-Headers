//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCImageProcessCommand.h"

@interface SCImageProcessLookupYUVCommand : SCImageProcessCommand
{
    int _imageTexture2;
    unsigned int _lookupTexture;
    int _luminanceTexture;
    int _chrominanceTexture;
    int _yuvConversionMatrix;
    struct CGImage *_lookupTable;
}

@property(nonatomic) struct CGImage *lookupTable; // @synthesize lookupTable=_lookupTable;
- (void)unload;
- (id)runWithContext:(id)arg1 pixelWidth:(unsigned long long)arg2 pixelHeight:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 outputWidth:(unsigned long long)arg5 outputHeight:(unsigned long long)arg6 renderRange:(CDStruct_6fe4de6c)arg7 orientation:(long long)arg8;
- (void)loadWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithLookupTable:(struct CGImage *)arg1;

@end

