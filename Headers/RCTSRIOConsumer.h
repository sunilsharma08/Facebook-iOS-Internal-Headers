//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface RCTSRIOConsumer : NSObject
{
    BOOL _readToCurrentFrame;
    BOOL _unmaskBytes;
    CDUnknownBlockType _consumer;
    CDUnknownBlockType _handler;
    unsigned long _bytesNeeded;
}

@property(readonly, nonatomic) BOOL unmaskBytes; // @synthesize unmaskBytes=_unmaskBytes;
@property(readonly, nonatomic) BOOL readToCurrentFrame; // @synthesize readToCurrentFrame=_readToCurrentFrame;
@property(nonatomic) unsigned long bytesNeeded; // @synthesize bytesNeeded=_bytesNeeded;
@property(readonly, copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, copy, nonatomic) CDUnknownBlockType consumer; // @synthesize consumer=_consumer;
- (void).cxx_destruct;
- (void)setupWithScanner:(CDUnknownBlockType)arg1 handler:(CDUnknownBlockType)arg2 bytesNeeded:(unsigned long)arg3 readToCurrentFrame:(BOOL)arg4 unmaskBytes:(BOOL)arg5;

@end

