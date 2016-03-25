//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSStreamDelegate-Protocol.h"

@class NSArray, NSInputStream, NSMutableArray, NSMutableData, NSMutableSet, NSOperationQueue, NSOutputStream, NSString, NSURL, NSURLRequest, RCTSRIOConsumerPool;
@protocol OS_dispatch_queue, RCTSRWebSocketDelegate;

@interface RCTSRWebSocket : NSObject <NSStreamDelegate>
{
    int _webSocketVersion;
    NSOperationQueue *_delegateOperationQueue;
    NSObject<OS_dispatch_queue> *_delegateDispatchQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_consumers;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSMutableData *_readBuffer;
    unsigned int _readBufferOffset;
    NSMutableData *_outputBuffer;
    unsigned int _outputBufferOffset;
    unsigned char _currentFrameOpcode;
    unsigned long _currentFrameCount;
    unsigned long _readOpCount;
    unsigned int _currentStringScanPosition;
    NSMutableData *_currentFrameData;
    NSString *_closeReason;
    NSString *_secKey;
    BOOL _pinnedCertFound;
    unsigned char _currentReadMaskKey[4];
    unsigned long _currentReadMaskOffset;
    BOOL _consumerStopped;
    BOOL _closeWhenFinishedWriting;
    BOOL _failed;
    BOOL _secure;
    NSURLRequest *_urlRequest;
    struct __CFHTTPMessage *_receivedHTTPHeaders;
    BOOL _sentClose;
    BOOL _didFail;
    int _closeCode;
    BOOL _isPumping;
    NSMutableSet *_scheduledRunloops;
    RCTSRWebSocket *_selfRetain;
    NSArray *_requestedProtocols;
    RCTSRIOConsumerPool *_consumerPool;
    id <RCTSRWebSocketDelegate> _delegate;
    int _readyState;
    NSURL *_url;
    NSString *_protocol;
}

+ (void)initialize;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateDispatchQueue; // @synthesize delegateDispatchQueue=_delegateDispatchQueue;
@property(retain, nonatomic) NSOperationQueue *delegateOperationQueue; // @synthesize delegateOperationQueue=_delegateOperationQueue;
@property(readonly, copy, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) int readyState; // @synthesize readyState=_readyState;
@property(nonatomic) __weak id <RCTSRWebSocketDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;
- (void)_sendFrameWithOpcode:(int)arg1 data:(id)arg2;
- (void)_pumpScanner;
- (BOOL)_innerPumpScanner;
- (void)_readUntilBytes:(const void *)arg1 length:(unsigned long)arg2 callback:(CDUnknownBlockType)arg3;
- (void)_readUntilHeaderCompleteWithCallback:(CDUnknownBlockType)arg1;
- (void)_addConsumerWithScanner:(CDUnknownBlockType)arg1 callback:(CDUnknownBlockType)arg2 dataLength:(unsigned long)arg3;
- (void)_addConsumerWithDataLength:(unsigned long)arg1 callback:(CDUnknownBlockType)arg2 readToCurrentFrame:(BOOL)arg3 unmaskBytes:(BOOL)arg4;
- (void)_addConsumerWithScanner:(CDUnknownBlockType)arg1 callback:(CDUnknownBlockType)arg2;
- (void)_pumpWriting;
- (void)_readFrameNew;
- (void)_readFrameContinue;
- (void)_handleFrameHeader:(CDStruct_c6e275e6)arg1 curData:(id)arg2;
- (void)_handleFrameWithData:(id)arg1 opCode:(int)arg2;
- (void)_disconnect;
- (void)handleCloseWithData:(id)arg1;
- (void)_handleMessage:(id)arg1;
- (void)handlePong:(id)arg1;
- (void)handlePing:(id)arg1;
- (void)sendPing:(id)arg1;
- (void)send:(id)arg1;
- (void)_writeData:(id)arg1;
- (void)_failWithError:(id)arg1;
- (void)_closeWithProtocolError:(id)arg1;
- (void)closeWithCode:(int)arg1 reason:(id)arg2;
- (void)close;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)_connect;
- (void)_initializeStreams;
- (void)didConnect;
- (void)_readHTTPHeader;
- (void)_HTTPHeadersDidFinish;
- (BOOL)_checkHandshake:(struct __CFHTTPMessage *)arg1;
- (void)_performDelegateBlock:(CDUnknownBlockType)arg1;
- (void)open;
- (void)dealloc;
- (void)assertOnWorkQueue;
- (void)_RCTSR_commonInit;
- (id)initWithURL:(id)arg1 protocols:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (id)init;
- (id)initWithURLRequest:(id)arg1 protocols:(id)arg2;
- (void)setReactTag:(id)arg1;
- (id)reactTag;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

