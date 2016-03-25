//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class FBElementFamily, FBFrameDescriptor, NSDictionary, NSString;

@interface FBElementDescriptor : NSObject <NSCopying>
{
    BOOL _isRendered;
    NSString *_id;
    FBFrameDescriptor *_frame;
    FBElementFamily *_elementFamily;
    float _requiredTopPadding;
    float _requiredBottomPadding;
    NSDictionary *_dictionaryRepresentation;
}

+ (BOOL)_elementDescriptionIsRendered:(id)arg1;
+ (id)elementDescriptorForDescription:(id)arg1;
@property(copy, nonatomic) NSDictionary *dictionaryRepresentation; // @synthesize dictionaryRepresentation=_dictionaryRepresentation;
@property(nonatomic) float requiredBottomPadding; // @synthesize requiredBottomPadding=_requiredBottomPadding;
@property(nonatomic) float requiredTopPadding; // @synthesize requiredTopPadding=_requiredTopPadding;
@property(copy, nonatomic) FBElementFamily *elementFamily; // @synthesize elementFamily=_elementFamily;
@property(copy, nonatomic) FBFrameDescriptor *frame; // @synthesize frame=_frame;
@property(nonatomic) BOOL isRendered; // @synthesize isRendered=_isRendered;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;
- (id)unionWithElementDescriptor:(id)arg1;
- (float)insetForKey:(id)arg1 forElementOfSize:(struct CGSize)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

