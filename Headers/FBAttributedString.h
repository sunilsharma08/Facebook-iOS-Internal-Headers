//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@class NSString;

@interface FBAttributedString : NSAttributedString
{
    NSString *_string;
    struct vector<FBRangeAttributes, std::__1::allocator<FBRangeAttributes>> _elements;
}

+ (void)load;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)attributesAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)string;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAttributedString:(id)arg1;
- (id)initWithString:(id)arg1 attributes:(id)arg2;
- (id)initWithString:(id)arg1;

@end

