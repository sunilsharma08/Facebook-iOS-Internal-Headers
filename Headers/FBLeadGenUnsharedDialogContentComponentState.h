//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@interface FBLeadGenUnsharedDialogContentComponentState : NSObject <NSCopying>
{
    BOOL _hasInvalidUserInfo;
    BOOL _userDidCheckDisclaimer;
    int _pageIndex;
}

@property(nonatomic) BOOL userDidCheckDisclaimer; // @synthesize userDidCheckDisclaimer=_userDidCheckDisclaimer;
@property(nonatomic) int pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) BOOL hasInvalidUserInfo; // @synthesize hasInvalidUserInfo=_hasInvalidUserInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

