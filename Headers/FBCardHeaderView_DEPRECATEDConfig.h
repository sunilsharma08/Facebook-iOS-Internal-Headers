//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "FBFIGConfig-Protocol.h"

@class NSAttributedString, NSString, UIColor, UIFont;

@interface FBCardHeaderView_DEPRECATEDConfig : FBValueObject <FBFIGConfig>
{
    BOOL _centerThumbnailImageView;
    BOOL _hasSeparator;
    NSAttributedString *_titleAttributedString;
    UIColor *_titleColor;
    UIFont *_titleFont;
    unsigned int _thumbnailGlyph;
    unsigned int _thumbnailGlyphShade;
    unsigned int _thumbnailGlyphSize;
    NSString *_actionButtonTitle;
    unsigned int _actionButtonGlyph;
    unsigned int _actionButtonGlyphShade;
    unsigned int _actionButtonGlyphSize;
    UIColor *_actionButtonTitleColor;
    UIFont *_actionButtonTitleFont;
    UIColor *_backgroundColor;
    float _separatorThickness;
    UIColor *_separatorColor;
    NSString *_disclosureTitle;
    unsigned int _disclosureIndicator;
    UIColor *_disclosureTitleColor;
    UIFont *_disclosureTitleFont;
    struct UIEdgeInsets _actionButtonTitleEdgeInsets;
    struct UIEdgeInsets _contentEdgeInsets;
    struct UIEdgeInsets _separatorInset;
}

+ (id)newWithTitleAttributedString:(id)arg1 titleColor:(id)arg2 titleFont:(id)arg3 centerThumbnailImageView:(BOOL)arg4 thumbnailGlyph:(unsigned int)arg5 thumbnailGlyphShade:(unsigned int)arg6 thumbnailGlyphSize:(unsigned int)arg7 actionButtonTitle:(id)arg8 actionButtonGlyph:(unsigned int)arg9 actionButtonGlyphShade:(unsigned int)arg10 actionButtonGlyphSize:(unsigned int)arg11 actionButtonTitleColor:(id)arg12 actionButtonTitleFont:(id)arg13 actionButtonTitleEdgeInsets:(struct UIEdgeInsets)arg14 backgroundColor:(id)arg15 contentEdgeInsets:(struct UIEdgeInsets)arg16 hasSeparator:(BOOL)arg17 separatorThickness:(float)arg18 separatorInset:(struct UIEdgeInsets)arg19 separatorColor:(id)arg20 disclosureTitle:(id)arg21 disclosureIndicator:(unsigned int)arg22 disclosureTitleColor:(id)arg23 disclosureTitleFont:(id)arg24;
@property(readonly, copy, nonatomic) UIFont *disclosureTitleFont; // @synthesize disclosureTitleFont=_disclosureTitleFont;
@property(readonly, copy, nonatomic) UIColor *disclosureTitleColor; // @synthesize disclosureTitleColor=_disclosureTitleColor;
@property(readonly, nonatomic) unsigned int disclosureIndicator; // @synthesize disclosureIndicator=_disclosureIndicator;
@property(readonly, copy, nonatomic) NSString *disclosureTitle; // @synthesize disclosureTitle=_disclosureTitle;
@property(readonly, copy, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(readonly, nonatomic) struct UIEdgeInsets separatorInset; // @synthesize separatorInset=_separatorInset;
@property(readonly, nonatomic) float separatorThickness; // @synthesize separatorThickness=_separatorThickness;
@property(readonly, nonatomic) BOOL hasSeparator; // @synthesize hasSeparator=_hasSeparator;
@property(readonly, nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) struct UIEdgeInsets actionButtonTitleEdgeInsets; // @synthesize actionButtonTitleEdgeInsets=_actionButtonTitleEdgeInsets;
@property(readonly, copy, nonatomic) UIFont *actionButtonTitleFont; // @synthesize actionButtonTitleFont=_actionButtonTitleFont;
@property(readonly, copy, nonatomic) UIColor *actionButtonTitleColor; // @synthesize actionButtonTitleColor=_actionButtonTitleColor;
@property(readonly, nonatomic) unsigned int actionButtonGlyphSize; // @synthesize actionButtonGlyphSize=_actionButtonGlyphSize;
@property(readonly, nonatomic) unsigned int actionButtonGlyphShade; // @synthesize actionButtonGlyphShade=_actionButtonGlyphShade;
@property(readonly, nonatomic) unsigned int actionButtonGlyph; // @synthesize actionButtonGlyph=_actionButtonGlyph;
@property(readonly, copy, nonatomic) NSString *actionButtonTitle; // @synthesize actionButtonTitle=_actionButtonTitle;
@property(readonly, nonatomic) unsigned int thumbnailGlyphSize; // @synthesize thumbnailGlyphSize=_thumbnailGlyphSize;
@property(readonly, nonatomic) unsigned int thumbnailGlyphShade; // @synthesize thumbnailGlyphShade=_thumbnailGlyphShade;
@property(readonly, nonatomic) unsigned int thumbnailGlyph; // @synthesize thumbnailGlyph=_thumbnailGlyph;
@property(readonly, nonatomic) BOOL centerThumbnailImageView; // @synthesize centerThumbnailImageView=_centerThumbnailImageView;
@property(readonly, copy, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(readonly, copy, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(readonly, copy, nonatomic) NSAttributedString *titleAttributedString; // @synthesize titleAttributedString=_titleAttributedString;
- (void).cxx_destruct;
- (id)_initWithTitleAttributedString:(id)arg1 titleColor:(id)arg2 titleFont:(id)arg3 centerThumbnailImageView:(BOOL)arg4 thumbnailGlyph:(unsigned int)arg5 thumbnailGlyphShade:(unsigned int)arg6 thumbnailGlyphSize:(unsigned int)arg7 actionButtonTitle:(id)arg8 actionButtonGlyph:(unsigned int)arg9 actionButtonGlyphShade:(unsigned int)arg10 actionButtonGlyphSize:(unsigned int)arg11 actionButtonTitleColor:(id)arg12 actionButtonTitleFont:(id)arg13 actionButtonTitleEdgeInsets:(struct UIEdgeInsets)arg14 backgroundColor:(id)arg15 contentEdgeInsets:(struct UIEdgeInsets)arg16 hasSeparator:(BOOL)arg17 separatorThickness:(float)arg18 separatorInset:(struct UIEdgeInsets)arg19 separatorColor:(id)arg20 disclosureTitle:(id)arg21 disclosureIndicator:(unsigned int)arg22 disclosureTitleColor:(id)arg23 disclosureTitleFont:(id)arg24;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

