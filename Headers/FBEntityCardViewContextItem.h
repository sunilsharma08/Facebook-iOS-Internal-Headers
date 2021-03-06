//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBMemEntityCardContextItem, FBMemEntityCardContextItemIcon, NSArray, NSAttributedString, NSString, NSURL, UIColor;
@protocol FBHasAttributedString;

@interface FBEntityCardViewContextItem : NSObject
{
    FBMemEntityCardContextItemIcon *_icon;
    NSAttributedString *_title;
    id <FBHasAttributedString> _subtitle;
    NSArray *_items;
    NSString *_type;
    FBMemEntityCardContextItem *_node;
    UIColor *_titleColor;
    NSURL *_fallbackURL;
    NSString *_loggingParam;
}

@property(copy, nonatomic) NSString *loggingParam; // @synthesize loggingParam=_loggingParam;
@property(copy, nonatomic) NSURL *fallbackURL; // @synthesize fallbackURL=_fallbackURL;
@property(copy, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) FBMemEntityCardContextItem *node; // @synthesize node=_node;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) id <FBHasAttributedString> subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSAttributedString *title; // @synthesize title=_title;
@property(retain, nonatomic) FBMemEntityCardContextItemIcon *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)itemLinkURLToOpen;

@end

