//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBAsyncLayer.h"

#import "FBRichTextNetworkImageManagerDelegate-Protocol.h"

@class FBHighlightOverlayLayer, FBImageDownloader, FBRichTextNetworkImageManager, NSArray, NSAttributedString, UIFont;

@interface FBRichTextLayer : FBAsyncLayer <FBRichTextNetworkImageManagerDelegate>
{
    struct _NSRange _highlightedRange;
    struct CGColor *_highlightedColor;
    struct Mutex _highlightedRangeLock;
    struct Mutex _imageManagerLock;
    FBHighlightOverlayLayer *_highlightLayer;
    FBRichTextNetworkImageManager *_imageManager;
}

+ (void)drawInContext:(struct CGContext *)arg1 parameters:(id)arg2;
+ (void)initialize;
+ (struct CGSize)sizeWithAttributedString:(id)arg1 constrainedToSize:(struct CGSize)arg2 defaultFont:(id)arg3 defaultColor:(struct CGColor *)arg4 defaultHorizontalAlignmentMode:(int)arg5 textShadowOffset:(struct CGSize)arg6 maximumNumberOfLines:(unsigned int)arg7 truncationMode:(unsigned int)arg8 truncationAttributedString:(id)arg9 isTruncated:(char *)arg10 numberOfLines:(unsigned int *)arg11;
+ (struct CGSize)sizeWithAttributedString:(id)arg1 constrainedToSize:(struct CGSize)arg2 defaultFont:(id)arg3 defaultColor:(struct CGColor *)arg4 defaultHorizontalAlignmentMode:(int)arg5 textShadowOffset:(struct CGSize)arg6 maximumNumberOfLines:(unsigned int)arg7 truncationMode:(unsigned int)arg8 truncationAttributedString:(id)arg9;
+ (struct CGSize)sizeWithAttributedString:(id)arg1 constrainedToSize:(struct CGSize)arg2 defaultFont:(id)arg3 textShadowOffset:(struct CGSize)arg4 maximumNumberOfLines:(unsigned int)arg5 truncationMode:(unsigned int)arg6 truncationAttributedString:(id)arg7;
+ (struct CGSize)sizeWithAttributedString:(id)arg1 constrainedToSize:(struct CGSize)arg2 defaultFont:(id)arg3 maximumNumberOfLines:(unsigned int)arg4 truncationMode:(unsigned int)arg5;
+ (struct CGSize)sizeWithAttributedString:(id)arg1 constrainedToSize:(struct CGSize)arg2 defaultFont:(id)arg3;
+ (struct CGSize)sizeWithAttributedString:(id)arg1 constrainedToSize:(struct CGSize)arg2;
+ (struct CGSize)sizeWithAttributedString:(id)arg1 forWidth:(float)arg2;
+ (struct CGSize)sizeWithAttributedString:(id)arg1;
+ (BOOL)needsDisplayForKey:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (id)defaultActionForKey:(id)arg1;
@property(retain, nonatomic) FBRichTextNetworkImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(retain, nonatomic) FBHighlightOverlayLayer *highlightLayer; // @synthesize highlightLayer=_highlightLayer;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (BOOL)textIsTruncated;
- (void)richTextNetworkImageManager:(id)arg1 didDownloadImage:(struct CGImage *)arg2 imageURL:(id)arg3;
- (unsigned int)textIndexAtPoint:(struct CGPoint)arg1;
- (id)textCheckingResultForHighlightedText;
- (id)textCheckingResultAtPoint:(struct CGPoint)arg1;
- (struct CGSize)sizeThatFitsWithConstraint:(struct CGSize)arg1;
- (void)layoutSublayers;
- (id)drawParameters;
- (void)didDisplayAsynchronously:(id)arg1 withDrawParameters:(id)arg2;
- (id)willDisplayAsynchronouslyWithDrawParameters:(id)arg1;
- (id)state;
@property(retain) struct CGColor *highlightedColor;
@property(readonly, copy) NSArray *highlightedRects;
@property(readonly) struct CGRect highlightedRect;
@property struct _NSRange highlightedRange;
@property(retain) FBImageDownloader *imageDownloader;
@property(copy) NSAttributedString *attributedString;
- (void)setNeedsDisplayOnBoundsChange:(BOOL)arg1;
- (id)debugDescription;
- (id)description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(retain) struct CGColor *color; // @dynamic color;
@property(retain) UIFont *font; // @dynamic font;
@property int horizontalAlignmentMode; // @dynamic horizontalAlignmentMode;
@property unsigned int maximumNumberOfLines; // @dynamic maximumNumberOfLines;
@property float textShadowBlur; // @dynamic textShadowBlur;
@property(retain) struct CGColor *textShadowColor; // @dynamic textShadowColor;
@property struct CGSize textShadowOffset; // @dynamic textShadowOffset;
@property(copy) NSAttributedString *truncationAttributedString; // @dynamic truncationAttributedString;
@property unsigned int truncationMode; // @dynamic truncationMode;
@property unsigned int verticalAlignmentMode; // @dynamic verticalAlignmentMode;

@end

