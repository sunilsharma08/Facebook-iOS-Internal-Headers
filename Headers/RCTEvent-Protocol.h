//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSNumber, NSString;
@protocol RCTEvent;

@protocol RCTEvent <NSObject>
+ (NSString *)moduleDotMethod;
@property(readonly, nonatomic) unsigned short coalescingKey;
@property(readonly, copy, nonatomic) NSDictionary *body;
@property(readonly, copy, nonatomic) NSString *eventName;
@property(readonly, nonatomic) NSNumber *viewTag;
- (id <RCTEvent>)coalesceWithEvent:(id <RCTEvent>)arg1;
- (BOOL)canCoalesce;
@end

