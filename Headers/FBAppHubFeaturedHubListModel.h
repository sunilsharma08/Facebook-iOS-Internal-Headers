//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class FBMemApplicationHubList;

@interface FBAppHubFeaturedHubListModel : FBValueObject <NSCopying>
{
    FBMemApplicationHubList *_hubList;
}

@property(readonly, copy, nonatomic) FBMemApplicationHubList *hubList; // @synthesize hubList=_hubList;
- (void).cxx_destruct;
- (id)initWithHubList:(id)arg1;

@end

