//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@interface FBAdInterfacesAudiencePickerComponent : CKCompositeComponent
{
    SEL _selectionChangeAction;
}

+ (id)newWithAudienceOptions:(id)arg1 selectedOption:(id)arg2 selectionChangeAction:(SEL)arg3 showSeeMore:(BOOL)arg4 tapSeeMoreAction:(SEL)arg5 loading:(BOOL)arg6 imageContext:(id)arg7;
- (void)internalAudiencePicker:(id)arg1 didSelectAudienceOption:(id)arg2;

@end

