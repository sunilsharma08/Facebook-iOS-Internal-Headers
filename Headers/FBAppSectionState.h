//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface FBAppSectionState : FBValueObject <NSCopying, NSCoding>
{
    NSString *_bookmarkID;
}

@property(readonly, copy, nonatomic) NSString *bookmarkID; // @synthesize bookmarkID=_bookmarkID;
- (void).cxx_destruct;
- (id)initWithBookmarkID:(id)arg1;

@end

