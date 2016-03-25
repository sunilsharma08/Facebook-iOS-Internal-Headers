//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBFIGConfigBuilder-Protocol.h"

@class FBNetworkImageView, NSString, UIColor, UIImage, UIView;

@interface FBItemViewConfigBuilder : NSObject <FBFIGConfigBuilder>
{
    UIImage *_image;
    FBNetworkImageView *_networkImageView;
    unsigned int _imageSize;
    UIView *_contentView;
    UIView *_auxView;
    unsigned int _verticalAlign;
    unsigned int _topSeparatorThickness;
    UIColor *_topSeparatorColor;
    unsigned int _bottomSeparatorThickness;
    UIColor *_bottomSeparatorColor;
    UIColor *_backgroundColor;
    struct UIEdgeInsets _insets;
    struct UIEdgeInsets _topSeparatorInsets;
    struct UIEdgeInsets _bottomSeparatorInsets;
}

+ (id)builderForInstance:(id)arg1;
+ (id)builderFromConfig:(id)arg1;
+ (id)builderIgnoringClassLevelOverrides;
+ (id)builder;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) UIColor *bottomSeparatorColor; // @synthesize bottomSeparatorColor=_bottomSeparatorColor;
@property(nonatomic) struct UIEdgeInsets bottomSeparatorInsets; // @synthesize bottomSeparatorInsets=_bottomSeparatorInsets;
@property(nonatomic) unsigned int bottomSeparatorThickness; // @synthesize bottomSeparatorThickness=_bottomSeparatorThickness;
@property(copy, nonatomic) UIColor *topSeparatorColor; // @synthesize topSeparatorColor=_topSeparatorColor;
@property(nonatomic) struct UIEdgeInsets topSeparatorInsets; // @synthesize topSeparatorInsets=_topSeparatorInsets;
@property(nonatomic) unsigned int topSeparatorThickness; // @synthesize topSeparatorThickness=_topSeparatorThickness;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) unsigned int verticalAlign; // @synthesize verticalAlign=_verticalAlign;
@property(retain, nonatomic) UIView *auxView; // @synthesize auxView=_auxView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) unsigned int imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) FBNetworkImageView *networkImageView; // @synthesize networkImageView=_networkImageView;
@property(copy, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)_init;
- (id)build;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

