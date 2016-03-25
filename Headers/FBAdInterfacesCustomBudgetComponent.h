//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class CKComponent, FBAdInterfacesBudget;

@interface FBAdInterfacesCustomBudgetComponent : CKCompositeComponent
{
    FBAdInterfacesBudget *_budget;
    FBAdInterfacesBudget *_minimumBudget;
    FBAdInterfacesBudget *_maximumBudget;
    SEL _valueChangeAction;
    CKComponent *_textFieldComponent;
    BOOL _editing;
    unsigned long long _baseBudgetValue;
}

+ (id)newWithBudget:(id)arg1 minimumBudget:(id)arg2 maximumBudget:(id)arg3 baseBudgetValue:(unsigned long long)arg4 invalidEstimates:(BOOL)arg5 selected:(BOOL)arg6 valueChangeAction:(SEL)arg7;
+ (id)initialState;
- (void).cxx_destruct;
- (void)customBudgetOptionSelected;

@end

