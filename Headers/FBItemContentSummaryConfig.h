//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBRichTextConfig, FBRichTextView, NSString, UIFont, UIView;

@interface FBItemContentSummaryConfig : NSObject
{
    BOOL _hasDisclosureIcon;
    unsigned int _thumbnailSize;
    NSString *_textLabelString;
    UIFont *_textLabelFont;
    FBRichTextConfig *_titleConfig;
    FBRichTextConfig *_primarySubtitleConfig;
    FBRichTextConfig *_secondarySubtitleConfig;
    FBRichTextConfig *_metadataConfig;
    UIView *_bottomView;
    FBRichTextView *_disclosureTextView;
    unsigned int _disclosureViewPosition;
    UIView *_accessoryView;
    float _accessoryViewLeftOffset;
    UIView *_thumbnailView;
    float _textThumbnailOffset;
    unsigned int _glyphSize;
    float _textContentPadding;
    struct CGSize _bottomViewSize;
    struct UIEdgeInsets _contentSummaryEdgeInset;
}

+ (id)defaultDiscloureTextView;
+ (float)defaultTextThumbnailOffset;
+ (float)defaultTextContentPadding;
+ (struct UIEdgeInsets)defaultContentSummaryEdgeInset;
+ (id)defaultTextLabelFont;
@property(nonatomic) float textContentPadding; // @synthesize textContentPadding=_textContentPadding;
@property(nonatomic) struct UIEdgeInsets contentSummaryEdgeInset; // @synthesize contentSummaryEdgeInset=_contentSummaryEdgeInset;
@property(nonatomic) unsigned int glyphSize; // @synthesize glyphSize=_glyphSize;
@property(nonatomic) BOOL hasDisclosureIcon; // @synthesize hasDisclosureIcon=_hasDisclosureIcon;
@property(nonatomic) float textThumbnailOffset; // @synthesize textThumbnailOffset=_textThumbnailOffset;
@property(retain, nonatomic) UIView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(nonatomic) float accessoryViewLeftOffset; // @synthesize accessoryViewLeftOffset=_accessoryViewLeftOffset;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic) unsigned int disclosureViewPosition; // @synthesize disclosureViewPosition=_disclosureViewPosition;
@property(copy, nonatomic) FBRichTextView *disclosureTextView; // @synthesize disclosureTextView=_disclosureTextView;
@property(nonatomic) struct CGSize bottomViewSize; // @synthesize bottomViewSize=_bottomViewSize;
@property(nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) FBRichTextConfig *metadataConfig; // @synthesize metadataConfig=_metadataConfig;
@property(retain, nonatomic) FBRichTextConfig *secondarySubtitleConfig; // @synthesize secondarySubtitleConfig=_secondarySubtitleConfig;
@property(retain, nonatomic) FBRichTextConfig *primarySubtitleConfig; // @synthesize primarySubtitleConfig=_primarySubtitleConfig;
@property(retain, nonatomic) FBRichTextConfig *titleConfig; // @synthesize titleConfig=_titleConfig;
@property(retain, nonatomic) UIFont *textLabelFont; // @synthesize textLabelFont=_textLabelFont;
@property(copy, nonatomic) NSString *textLabelString; // @synthesize textLabelString=_textLabelString;
@property(nonatomic) unsigned int thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
- (void).cxx_destruct;
- (id)init;

@end

