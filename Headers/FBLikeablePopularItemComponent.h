//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class CKComponent, FBMemPageProduct;

@interface FBLikeablePopularItemComponent : CKCompositeComponent
{
    FBMemPageProduct *_item;
    SEL _likeAction;
    CKComponent *_likeButton;
    CKComponent *_textComponent;
}

+ (id)newWithItem:(id)arg1 likeAction:(SEL)arg2;
- (void).cxx_destruct;
- (void)_userDidTapLike;
- (vector_035bbd4a)animationsFromPreviousComponent:(id)arg1;

@end

