//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@protocol FBNavigationCoordinator;

@interface FBProfileInfoRequestComponent : CKCompositeComponent
{
    id <FBNavigationCoordinator> _navigationCoordinator;
}

+ (id)newWithModel:(id)arg1 imageDownloadContext:(id)arg2 navigationCoordinator:(id)arg3;
- (void).cxx_destruct;
- (void)didTap:(id)arg1 model:(id)arg2;

@end

