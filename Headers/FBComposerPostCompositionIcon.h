//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, UIColor, UIImage;

@interface FBComposerPostCompositionIcon : NSObject <NSCopying>
{
    unsigned int _subtype;
    int _spinner_style;
    unsigned int _glyphIcon_glyphName;
    UIColor *_glyphIcon_glyphColor;
    NSString *_networkImage_imageURL;
    UIImage *_networkImage_defaultImage;
}

+ (id)spinnerWithStyle:(int)arg1;
+ (id)networkImageWithImageURL:(id)arg1 defaultImage:(id)arg2;
+ (id)glyphIconWithGlyphName:(unsigned int)arg1 glyphColor:(id)arg2;
- (void).cxx_destruct;
- (void)matchSpinner:(CDUnknownBlockType)arg1 glyphIcon:(CDUnknownBlockType)arg2 networkImage:(CDUnknownBlockType)arg3;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

