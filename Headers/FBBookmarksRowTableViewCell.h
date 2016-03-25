//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "FBAccessibilityInvalidationEventsListener-Protocol.h"

@class FBRichTextView, NSString, UIColor, UIView;

@interface FBBookmarksRowTableViewCell : UITableViewCell <FBAccessibilityInvalidationEventsListener>
{
    unsigned int _style;
    FBRichTextView *_textView;
    UIView *_imageView;
    UIColor *_defaultDetailTextColor;
}

+ (id)_configuredTextView;
+ (id)_textFont;
+ (float)height;
- (void).cxx_destruct;
- (void)_configureDetailTextAndAccessibilityLabelWithType:(unsigned int)arg1 text:(id)arg2 detailText:(id)arg3;
- (void)_configureTextViewWithText:(id)arg1;
- (void)willTransitionToState:(unsigned int)arg1;
- (void)setStyle:(unsigned int)arg1 text:(id)arg2 unreadText:(id)arg3 detailTextType:(unsigned int)arg4 imageURL:(id)arg5 imageDownloader:(id)arg6 image:(id)arg7 hasImageBorder:(BOOL)arg8 shouldRoundImage:(BOOL)arg9;
- (void)didReceiveAccessibilityInvalidation;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

