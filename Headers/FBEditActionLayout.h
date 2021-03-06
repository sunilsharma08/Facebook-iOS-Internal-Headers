//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBMemEditAction, NSAttributedString;

@interface FBEditActionLayout : NSObject
{
    BOOL _showDivider;
    float _contentWidth;
    struct CGRect _dividerFrame;
    struct CGRect _timestampLabelFrame;
    struct CGRect _messageLabelFrame;
    BOOL _expandMessage;
    FBMemEditAction *_editAction;
    NSAttributedString *_messageText;
    NSAttributedString *_timestampText;
    float _height;
}

+ (id)truncationText;
+ (id)_messageTextBoldFont;
+ (id)_messageFont;
+ (id)_messageTextFont;
+ (id)timestampFont;
+ (id)_timestampTextFont;
+ (struct CGColor *)_truncationTextColor;
+ (struct CGColor *)_messageTextColor;
+ (id)timestampColor;
+ (struct CGColor *)_timestampTextColor;
+ (id)dividerColor;
+ (struct UIEdgeInsets)padding;
+ (struct UIEdgeInsets)margin;
+ (struct UIEdgeInsets)headerFooterMargin;
+ (struct FBEditActionLayoutParams)layoutParams;
@property(nonatomic) BOOL expandMessage; // @synthesize expandMessage=_expandMessage;
@property(readonly, nonatomic) struct CGRect messageLabelFrame; // @synthesize messageLabelFrame=_messageLabelFrame;
@property(readonly, nonatomic) struct CGRect timestampLabelFrame; // @synthesize timestampLabelFrame=_timestampLabelFrame;
@property(readonly, nonatomic) struct CGRect dividerFrame; // @synthesize dividerFrame=_dividerFrame;
@property(nonatomic) float height; // @synthesize height=_height;
@property(readonly, nonatomic) NSAttributedString *timestampText; // @synthesize timestampText=_timestampText;
@property(readonly, nonatomic) NSAttributedString *messageText; // @synthesize messageText=_messageText;
@property(readonly, nonatomic) FBMemEditAction *editAction; // @synthesize editAction=_editAction;
- (void).cxx_destruct;
- (id)_attributedMessageText;
- (id)_attributedTimestampText;
- (void)updateForWidth:(float)arg1;
- (id)initWithEditAction:(id)arg1 hasDivider:(BOOL)arg2;

@end

