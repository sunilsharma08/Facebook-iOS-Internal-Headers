//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@interface FBSearchResultsPublicPostsDecoratorComponent : CKCompositeComponent
{
    BOOL _showNoFriendsIndicator;
    unsigned int _publicPostModuleType;
}

+ (id)newWithContext:(id)arg1 publicPostsSectionTitle:(id)arg2 publicPostModuleType:(unsigned int)arg3 showNoFriendsIndicator:(BOOL)arg4 seeMoreQuery:(id)arg5;
@property(readonly, nonatomic) BOOL showNoFriendsIndicator; // @synthesize showNoFriendsIndicator=_showNoFriendsIndicator;
@property(readonly, nonatomic) unsigned int publicPostModuleType; // @synthesize publicPostModuleType=_publicPostModuleType;

@end

