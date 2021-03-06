//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSError;

@interface FBAdInterfacesPromotionState : FBValueObject <NSCopying>
{
    BOOL _loading;
    BOOL _loadingBudgetRecommendations;
    BOOL _loadingAdPreview;
    BOOL _loadingSavedAudiences;
    BOOL _uploadingCreativeImage;
    BOOL _creativeImageUploadFailure;
    BOOL _promotionJustCreated;
    BOOL _editingTargeting;
    BOOL _justEditedPromotion;
    BOOL _invalidEstimatesForBudgets;
    BOOL _initializationError;
    BOOL _error;
    BOOL _boostAfterAddingPaymentMethod;
    BOOL _callToActionValidating;
    NSError *_callToActionValidationError;
}

@property(readonly, nonatomic) BOOL callToActionValidating; // @synthesize callToActionValidating=_callToActionValidating;
@property(readonly, copy, nonatomic) NSError *callToActionValidationError; // @synthesize callToActionValidationError=_callToActionValidationError;
@property(readonly, nonatomic) BOOL boostAfterAddingPaymentMethod; // @synthesize boostAfterAddingPaymentMethod=_boostAfterAddingPaymentMethod;
@property(readonly, nonatomic) BOOL error; // @synthesize error=_error;
@property(readonly, nonatomic) BOOL initializationError; // @synthesize initializationError=_initializationError;
@property(readonly, nonatomic) BOOL invalidEstimatesForBudgets; // @synthesize invalidEstimatesForBudgets=_invalidEstimatesForBudgets;
@property(readonly, nonatomic) BOOL justEditedPromotion; // @synthesize justEditedPromotion=_justEditedPromotion;
@property(readonly, nonatomic) BOOL editingTargeting; // @synthesize editingTargeting=_editingTargeting;
@property(readonly, nonatomic) BOOL promotionJustCreated; // @synthesize promotionJustCreated=_promotionJustCreated;
@property(readonly, nonatomic) BOOL creativeImageUploadFailure; // @synthesize creativeImageUploadFailure=_creativeImageUploadFailure;
@property(readonly, nonatomic) BOOL uploadingCreativeImage; // @synthesize uploadingCreativeImage=_uploadingCreativeImage;
@property(readonly, nonatomic) BOOL loadingSavedAudiences; // @synthesize loadingSavedAudiences=_loadingSavedAudiences;
@property(readonly, nonatomic) BOOL loadingAdPreview; // @synthesize loadingAdPreview=_loadingAdPreview;
@property(readonly, nonatomic) BOOL loadingBudgetRecommendations; // @synthesize loadingBudgetRecommendations=_loadingBudgetRecommendations;
@property(readonly, nonatomic) BOOL loading; // @synthesize loading=_loading;
- (void).cxx_destruct;
- (id)initWithLoading:(BOOL)arg1 loadingBudgetRecommendations:(BOOL)arg2 loadingAdPreview:(BOOL)arg3 loadingSavedAudiences:(BOOL)arg4 uploadingCreativeImage:(BOOL)arg5 creativeImageUploadFailure:(BOOL)arg6 promotionJustCreated:(BOOL)arg7 editingTargeting:(BOOL)arg8 justEditedPromotion:(BOOL)arg9 invalidEstimatesForBudgets:(BOOL)arg10 initializationError:(BOOL)arg11 error:(BOOL)arg12 boostAfterAddingPaymentMethod:(BOOL)arg13 callToActionValidationError:(id)arg14 callToActionValidating:(BOOL)arg15;

@end

