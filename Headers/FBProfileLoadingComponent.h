//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@interface FBProfileLoadingComponent : CKCompositeComponent
{
    SEL _trackerAction;
    unsigned int _loadingType;
}

+ (id)newWithLoadingType:(unsigned int)arg1 trackerAction:(SEL)arg2 useShimmerStyle:(BOOL)arg3 backgroundColor:(id)arg4 session:(id)arg5;
@property(readonly, nonatomic) unsigned int loadingType; // @synthesize loadingType=_loadingType;

@end

