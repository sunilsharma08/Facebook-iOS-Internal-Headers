//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBRichStoryAnnotation.h"

@class NSArray, NSString;

@interface FBRichStoryTextAnnotation : FBRichStoryAnnotation
{
    BOOL _requiresShadow;
    NSString *_text;
    NSArray *_attributedEntities;
    NSArray *_attributedInlineStyles;
    unsigned int _presentationStyle;
    unsigned int _contentType;
    int _horizontalPosition;
    int _verticalPosition;
}

+ (id)annotationWithText:(id)arg1 attributedEntities:(id)arg2 attributedInlineStyles:(id)arg3 presentationStyle:(unsigned int)arg4 contentType:(unsigned int)arg5 horizontalPosition:(int)arg6 verticalPosition:(int)arg7 rendered:(BOOL)arg8 requiresShadow:(BOOL)arg9;
@property(readonly, nonatomic) BOOL requiresShadow; // @synthesize requiresShadow=_requiresShadow;
@property(readonly, nonatomic) int verticalPosition; // @synthesize verticalPosition=_verticalPosition;
@property(readonly, nonatomic) int horizontalPosition; // @synthesize horizontalPosition=_horizontalPosition;
@property(readonly, nonatomic) unsigned int contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) unsigned int presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(readonly, copy, nonatomic) NSArray *attributedInlineStyles; // @synthesize attributedInlineStyles=_attributedInlineStyles;
@property(readonly, copy, nonatomic) NSArray *attributedEntities; // @synthesize attributedEntities=_attributedEntities;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithText:(id)arg1 attributedEntities:(id)arg2 attributedInlineStyles:(id)arg3 presentationStyle:(unsigned int)arg4 contentType:(unsigned int)arg5 horizontalPosition:(int)arg6 verticalPosition:(int)arg7 rendered:(BOOL)arg8 requiresShadow:(BOOL)arg9;

@end

