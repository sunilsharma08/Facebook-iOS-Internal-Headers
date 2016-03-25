//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class FBAdInterfacesAudienceOption, FBAdInterfacesBudget, FBAdInterfacesCallToActionOption, FBBoostedComponentCreateInputDataCreative, NSArray, NSDictionary;

@interface FBAdInterfacesAdminInfo : FBValueObject <NSCopying>
{
    BOOL _isBusinessManager;
    NSArray *_accounts;
    NSArray *_audienceOptions;
    NSArray *_callToActionOptions;
    NSArray *_budgetRecommendations;
    FBAdInterfacesAudienceOption *_defaultAudienceOption;
    NSDictionary *_lastUsedTargeting;
    FBAdInterfacesBudget *_defaultBudget;
    FBAdInterfacesCallToActionOption *_defaultCallToActionOption;
    FBBoostedComponentCreateInputDataCreative *_defaultCreative;
    unsigned int _defaultDuration;
}

@property(readonly, nonatomic) unsigned int defaultDuration; // @synthesize defaultDuration=_defaultDuration;
@property(readonly, copy, nonatomic) FBBoostedComponentCreateInputDataCreative *defaultCreative; // @synthesize defaultCreative=_defaultCreative;
@property(readonly, copy, nonatomic) FBAdInterfacesCallToActionOption *defaultCallToActionOption; // @synthesize defaultCallToActionOption=_defaultCallToActionOption;
@property(readonly, copy, nonatomic) FBAdInterfacesBudget *defaultBudget; // @synthesize defaultBudget=_defaultBudget;
@property(readonly, copy, nonatomic) NSDictionary *lastUsedTargeting; // @synthesize lastUsedTargeting=_lastUsedTargeting;
@property(readonly, copy, nonatomic) FBAdInterfacesAudienceOption *defaultAudienceOption; // @synthesize defaultAudienceOption=_defaultAudienceOption;
@property(readonly, copy, nonatomic) NSArray *budgetRecommendations; // @synthesize budgetRecommendations=_budgetRecommendations;
@property(readonly, copy, nonatomic) NSArray *callToActionOptions; // @synthesize callToActionOptions=_callToActionOptions;
@property(readonly, copy, nonatomic) NSArray *audienceOptions; // @synthesize audienceOptions=_audienceOptions;
@property(readonly, copy, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
@property(readonly, nonatomic) BOOL isBusinessManager; // @synthesize isBusinessManager=_isBusinessManager;
- (void).cxx_destruct;
- (id)initWithIsBusinessManager:(BOOL)arg1 accounts:(id)arg2 audienceOptions:(id)arg3 callToActionOptions:(id)arg4 budgetRecommendations:(id)arg5 defaultAudienceOption:(id)arg6 lastUsedTargeting:(id)arg7 defaultBudget:(id)arg8 defaultCallToActionOption:(id)arg9 defaultCreative:(id)arg10 defaultDuration:(unsigned int)arg11;

@end

