//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class NSString;

@interface FBSimpleSearchTATableFooterGetMoreResultsSectionViewComponent : CKCompositeComponent
{
    NSString *_title;
    NSString *_subtitle;
    id _target;
    SEL _action;
}

+ (id)newWithTitle:(id)arg1 subtitle:(id)arg2 target:(id)arg3 action:(SEL)arg4;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)didTapCell:(id)arg1;

@end

