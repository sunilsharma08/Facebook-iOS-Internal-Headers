//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

#import "FBHScrollImpressionLogging-Protocol.h"

@class PAFancyShareSheetItem;
@protocol PAFancyShareSheetItemInteractionDelegate;

@interface PAFancyShareSheetItemComponent : CKCompositeComponent <FBHScrollImpressionLogging>
{
    id <PAFancyShareSheetItemInteractionDelegate> _interactionDelegate;
    PAFancyShareSheetItem *_item;
}

+ (id)_attributedStringForSubtitleWithItem:(id)arg1;
+ (id)_attributedStringForTitleWithItem:(id)arg1;
+ (id)initialState;
+ (id)newWithView:(const struct CKComponentViewConfiguration *)arg1 item:(id)arg2 occupiesConstrainingHeight:(BOOL)arg3 scalableMetrics:(id)arg4 interactionDelegate:(id)arg5;
@property(readonly, nonatomic) PAFancyShareSheetItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) __weak id <PAFancyShareSheetItemInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
- (void).cxx_destruct;

@end

