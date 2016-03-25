//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

#import "FBHScrollImpressionLogging-Protocol.h"

@protocol FBSearchPhotoPivotProtocol;

@interface FBSearchPhotoPivotComponent : CKCompositeComponent <FBHScrollImpressionLogging>
{
    id <FBSearchPhotoPivotProtocol> _pivot;
    SEL _tapAction;
}

+ (id)newWithPivot:(id)arg1 size:(const struct CKComponentSize *)arg2 context:(id)arg3 tapAction:(SEL)arg4 style:(struct FBSearchPhotoPivotComponentStyle)arg5;
@property(readonly, nonatomic) SEL tapAction; // @synthesize tapAction=_tapAction;
@property(readonly, nonatomic) id <FBSearchPhotoPivotProtocol> pivot; // @synthesize pivot=_pivot;
- (void).cxx_destruct;
- (void)didReceiveTap:(id)arg1;

@end

