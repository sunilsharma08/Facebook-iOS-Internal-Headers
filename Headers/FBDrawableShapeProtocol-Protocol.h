//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIBezierPath, UIColor, UIImage;

@protocol FBDrawableShapeProtocol <NSObject>
+ (id)compositeImageWithBlock;
+ (id)newWithRect:(struct CGRect)arg1 color:(UIColor *)arg2 lineWidth:(float)arg3 rotation:(float)arg4 filled:(BOOL)arg5 cornerRadius:(float)arg6 image:(UIImage *)arg7;
@property(retain, nonatomic) UIImage *image;
@property(nonatomic) BOOL filled;
@property(nonatomic) float cornerRadius;
@property(nonatomic) float rotation;
@property(nonatomic) float lineWidth;
@property(nonatomic) struct CGRect rect;
@property(copy, nonatomic) UIColor *color;
- (UIImage *)imageOfShapeWithSize:(struct CGSize)arg1;
- (UIBezierPath *)bezierPathInRect:(struct CGRect)arg1;
@end

