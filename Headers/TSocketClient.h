//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TNSStreamTransport.h"

#import "NSStreamDelegate-Protocol.h"

@class NSInputStream, NSOutputStream, NSString;

@interface TSocketClient : TNSStreamTransport <NSStreamDelegate>
{
    NSInputStream *inputStream;
    NSOutputStream *outputStream;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithHostname:(id)arg1 port:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

