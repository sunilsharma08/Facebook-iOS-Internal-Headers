//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer;

@interface RCTLocationRequest : NSObject
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _errorBlock;
    NSTimer *_timeoutTimer;
    CDStruct_c7f5a1bf _options;
}

@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(nonatomic) CDStruct_c7f5a1bf options; // @synthesize options=_options;
@property(copy, nonatomic) CDUnknownBlockType errorBlock; // @synthesize errorBlock=_errorBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void).cxx_destruct;
- (void)dealloc;

@end

