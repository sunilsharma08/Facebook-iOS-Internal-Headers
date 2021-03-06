//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class FBStreamAnalyticsContext, FBStreamAnalyticsLogger;

@interface FBStreamAnalytics : NSObject <NSCopying>
{
    FBStreamAnalyticsLogger *_logger;
    FBStreamAnalyticsContext *_context;
}

+ (id)evaluateContext:(id)arg1;
@property(readonly, copy, nonatomic) FBStreamAnalyticsContext *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) FBStreamAnalyticsLogger *logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (void)logEvent:(id)arg1 extra:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)analyticsWithChildContextWithExtraParameters:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithLogger:(id)arg1 context:(id)arg2;

@end

