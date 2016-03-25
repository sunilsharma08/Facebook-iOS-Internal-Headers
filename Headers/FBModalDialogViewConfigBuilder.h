//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBFIGConfigBuilder-Protocol.h"

@class FBImageDownloader, FBModalDialogViewItem, NSArray, NSString, UIColor, UIFont, UIView;

@interface FBModalDialogViewConfigBuilder : NSObject <FBFIGConfigBuilder>
{
    NSString *_title;
    UIFont *_titleFont;
    UIColor *_titleColor;
    unsigned int _titleMaxNumberOfLines;
    NSString *_message;
    UIFont *_messageFont;
    UIColor *_messageColor;
    unsigned int _messageMaxNumberOfLines;
    NSString *_facepileTitle;
    UIFont *_facepileTitleFont;
    UIColor *_facepileTitleColor;
    unsigned int _facepileTitleMaxNumberOfLines;
    NSArray *_facepileItems;
    unsigned int _facepileItemSize;
    FBImageDownloader *_facepileImageDownloader;
    FBModalDialogViewItem *_imageItem;
    UIColor *_separatorColor;
    UIFont *_buttonTitleFont;
    NSString *_primaryButtonTitle;
    UIColor *_primaryButtonTitleColor;
    UIColor *_primaryButtonHighlightedTitleColor;
    NSString *_secondaryButtonTitle;
    UIColor *_secondaryButtonTitleColor;
    UIColor *_secondaryButtonHighlightedTitleColor;
    NSString *_tertiaryButtonTitle;
    UIColor *_tertiaryButtonTitleColor;
    UIColor *_tertiaryButtonHighlightedTitleColor;
    UIView *_customView;
    UIColor *_backgroundColor;
    struct UIEdgeInsets _edgeInsets;
}

+ (id)builderForInstance:(id)arg1;
+ (id)builderFromConfig:(id)arg1;
+ (id)builderIgnoringClassLevelOverrides;
+ (id)builder;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(copy, nonatomic) UIColor *tertiaryButtonHighlightedTitleColor; // @synthesize tertiaryButtonHighlightedTitleColor=_tertiaryButtonHighlightedTitleColor;
@property(copy, nonatomic) UIColor *tertiaryButtonTitleColor; // @synthesize tertiaryButtonTitleColor=_tertiaryButtonTitleColor;
@property(copy, nonatomic) NSString *tertiaryButtonTitle; // @synthesize tertiaryButtonTitle=_tertiaryButtonTitle;
@property(copy, nonatomic) UIColor *secondaryButtonHighlightedTitleColor; // @synthesize secondaryButtonHighlightedTitleColor=_secondaryButtonHighlightedTitleColor;
@property(copy, nonatomic) UIColor *secondaryButtonTitleColor; // @synthesize secondaryButtonTitleColor=_secondaryButtonTitleColor;
@property(copy, nonatomic) NSString *secondaryButtonTitle; // @synthesize secondaryButtonTitle=_secondaryButtonTitle;
@property(copy, nonatomic) UIColor *primaryButtonHighlightedTitleColor; // @synthesize primaryButtonHighlightedTitleColor=_primaryButtonHighlightedTitleColor;
@property(copy, nonatomic) UIColor *primaryButtonTitleColor; // @synthesize primaryButtonTitleColor=_primaryButtonTitleColor;
@property(copy, nonatomic) NSString *primaryButtonTitle; // @synthesize primaryButtonTitle=_primaryButtonTitle;
@property(copy, nonatomic) UIFont *buttonTitleFont; // @synthesize buttonTitleFont=_buttonTitleFont;
@property(copy, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(copy, nonatomic) FBModalDialogViewItem *imageItem; // @synthesize imageItem=_imageItem;
@property(retain, nonatomic) FBImageDownloader *facepileImageDownloader; // @synthesize facepileImageDownloader=_facepileImageDownloader;
@property(nonatomic) unsigned int facepileItemSize; // @synthesize facepileItemSize=_facepileItemSize;
@property(copy, nonatomic) NSArray *facepileItems; // @synthesize facepileItems=_facepileItems;
@property(nonatomic) unsigned int facepileTitleMaxNumberOfLines; // @synthesize facepileTitleMaxNumberOfLines=_facepileTitleMaxNumberOfLines;
@property(copy, nonatomic) UIColor *facepileTitleColor; // @synthesize facepileTitleColor=_facepileTitleColor;
@property(copy, nonatomic) UIFont *facepileTitleFont; // @synthesize facepileTitleFont=_facepileTitleFont;
@property(copy, nonatomic) NSString *facepileTitle; // @synthesize facepileTitle=_facepileTitle;
@property(nonatomic) unsigned int messageMaxNumberOfLines; // @synthesize messageMaxNumberOfLines=_messageMaxNumberOfLines;
@property(copy, nonatomic) UIColor *messageColor; // @synthesize messageColor=_messageColor;
@property(copy, nonatomic) UIFont *messageFont; // @synthesize messageFont=_messageFont;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) unsigned int titleMaxNumberOfLines; // @synthesize titleMaxNumberOfLines=_titleMaxNumberOfLines;
@property(copy, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)_init;
- (id)build;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

