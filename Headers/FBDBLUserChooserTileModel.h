//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class FBDBLStoredUser;

@interface FBDBLUserChooserTileModel : FBValueObject <NSCopying>
{
    BOOL _hasShadow;
    FBDBLStoredUser *_userInfo;
    float _scale;
}

@property(readonly, nonatomic) BOOL hasShadow; // @synthesize hasShadow=_hasShadow;
@property(readonly, nonatomic) float scale; // @synthesize scale=_scale;
@property(readonly, copy, nonatomic) FBDBLStoredUser *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (id)initWithUserInfo:(id)arg1 scale:(float)arg2 hasShadow:(BOOL)arg3;

@end

