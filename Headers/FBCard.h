//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBFIGConfigurable-Protocol.h"

@class NSString;

@interface FBCard : NSObject <FBFIGConfigurable>
{
    struct UIEdgeInsets _fillCapInsets;
    struct UIEdgeInsets _contentInsets;
}

+ (id)cardlessBackgroundImageWithBorderColor:(id)arg1 borderInsets:(struct UIEdgeInsets)arg2;
+ (id)_cardlessBackgroundImage;
+ (id)backgroundTransparentImageViewForInsetStyle:(int)arg1 option:(int)arg2 style:(int)arg3;
+ (id)backgroundTransparentImageViewForInsetStyle:(int)arg1 option:(int)arg2;
+ (id)backgroundImageViewForInsetStyle:(int)arg1 option:(int)arg2 style:(int)arg3;
+ (id)backgroundImageViewForInsetStyle:(int)arg1 option:(int)arg2;
+ (struct UIEdgeInsets)contentInsetsForInsetStyle:(int)arg1 option:(int)arg2 style:(int)arg3;
+ (struct UIEdgeInsets)contentInsetsForInsetStyle:(int)arg1 option:(int)arg2;
+ (id)cardViewWithInsetStyle:(int)arg1 option:(int)arg2;
+ (id)cardViewWithInsetStyle:(int)arg1 option:(int)arg2 style:(int)arg3;
+ (id)cardCellWithInsetStyle:(int)arg1 option:(int)arg2 reuseIdentifier:(id)arg3;
+ (id)cardBackgroundTransparentImage;
+ (id)cardBackgroundImage;
+ (id)cardMaskDisabledImage;
+ (id)cardMaskImage;
+ (id)cardFooterBackgroundImage;
+ (id)cardMiddleBackgroundImage;
+ (id)cardHeaderBackgroundImage;
+ (id)cardImageForOption:(int)arg1;
+ (id)defaultFIGConfig;
+ (id)newWithInsetStyle:(int)arg1 option:(int)arg2 style:(int)arg3;
+ (id)newWithInsetStyle:(int)arg1 option:(int)arg2;
+ (id)newWithConfig:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic) struct UIEdgeInsets fillCapInsets; // @synthesize fillCapInsets=_fillCapInsets;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (id)_newCardWrappedInStackedView;
- (id)_newCardWrappedInWrappingCellWithIdentifier:(id)arg1;
- (id)_backgroundTransparentImageView;
- (id)_backgroundImageView;
- (void)oldConfig:(id)arg1 configDidChange:(id)arg2;
- (id)_init;
- (void)applyConfig:(id)arg1;
- (id)config;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

