//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBCommerceProductContext, NSURL;

@interface FBCommerceProductAndPurchaseDetailsSectionComponent : CKCompositeComponent
{
    NSURL *_URL;
    FBCommerceProductContext *_context;
}

+ (id)newWithSection:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) FBCommerceProductContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;

@end

