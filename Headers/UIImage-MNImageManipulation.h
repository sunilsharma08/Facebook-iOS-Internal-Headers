//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (MNImageManipulation)
- (void)addRoundedRectToPath:(struct CGRect)arg1 context:(struct CGContext *)arg2 ovalWidth:(float)arg3 ovalHeight:(float)arg4;
- (id)resizedImage:(struct CGSize)arg1 interpolationQuality:(int)arg2;
- (struct CGImage *)newBorderMask:(unsigned int)arg1 size:(struct CGSize)arg2;
- (id)tintedImageWithColor:(id)arg1;
- (id)roundedCornerImage:(int)arg1 borderSize:(int)arg2;
- (id)resizedImageWithContentMode:(int)arg1 bounds:(struct CGSize)arg2 interpolationQuality:(int)arg3;
- (id)thumbnailImage:(int)arg1 transparentBorder:(unsigned int)arg2 cornerRadius:(unsigned int)arg3 interpolationQuality:(int)arg4;
- (id)croppedImage:(struct CGRect)arg1;
- (id)transparentBorderImage:(unsigned int)arg1;
- (id)imageWithAlpha;
- (BOOL)hasAlpha;
@end

