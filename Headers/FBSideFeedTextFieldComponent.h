//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKStatefulViewComponent.h"

@class NSAttributedString;

@interface FBSideFeedTextFieldComponent : CKStatefulViewComponent
{
    NSAttributedString *_attributedPlaceholder;
    SEL _editAction;
}

+ (id)newWithPlaceholderText:(id)arg1 editAction:(SEL)arg2;
@property(readonly, nonatomic) SEL editAction; // @synthesize editAction=_editAction;
@property(readonly, copy, nonatomic) NSAttributedString *attributedPlaceholder; // @synthesize attributedPlaceholder=_attributedPlaceholder;
- (void).cxx_destruct;

@end

