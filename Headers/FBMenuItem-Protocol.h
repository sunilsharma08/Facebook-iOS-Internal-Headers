//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSString, NSURL;

@protocol FBMenuItem <NSObject>
@property(readonly, copy, nonatomic) NSURL *imageURL;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, copy, nonatomic) NSString *typeAttribute;
@property(readonly, copy, nonatomic) NSString *subtitleName;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *bookmarkID;
@property(retain, nonatomic) NSNumber *badgeCount;
@end

