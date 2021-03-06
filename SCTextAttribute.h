//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class SCAttribute;

@interface SCTextAttribute : NSObject <NSCoding>
{
    SCAttribute *_attribute;
    struct _NSRange _range;
}

+ (id)_textAttributeForFormatType:(id)arg1 range:(struct _NSRange)arg2;
+ (id)textAttributesFromAttributedText:(id)arg1;
+ (id)attributeFromDictionary:(id)arg1;
+ (id)textAttributesDictionariesFromTextAttributes:(id)arg1;
+ (id)formatAttributesFromResponse:(id)arg1;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(retain, nonatomic) SCAttribute *attribute; // @synthesize attribute=_attribute;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)textAttributeDictionary;
- (id)initWithAttribute:(id)arg1 range:(struct _NSRange)arg2;

@end

