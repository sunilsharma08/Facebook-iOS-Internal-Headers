//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GCDAsyncReadPacket, GCDAsyncSocketPreBuffer, GCDAsyncWritePacket, NSData, NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GCDAsyncSocket : NSObject
{
    unsigned int flags;
    unsigned short config;
    id delegate;
    NSObject<OS_dispatch_queue> *delegateQueue;
    int socket4FD;
    int socket6FD;
    int stateIndex;
    NSData *connectInterface4;
    NSData *connectInterface6;
    NSObject<OS_dispatch_queue> *socketQueue;
    NSObject<OS_dispatch_source> *accept4Source;
    NSObject<OS_dispatch_source> *accept6Source;
    NSObject<OS_dispatch_source> *connectTimer;
    NSObject<OS_dispatch_source> *readSource;
    NSObject<OS_dispatch_source> *writeSource;
    NSObject<OS_dispatch_source> *readTimer;
    NSObject<OS_dispatch_source> *writeTimer;
    NSMutableArray *readQueue;
    NSMutableArray *writeQueue;
    GCDAsyncReadPacket *currentRead;
    GCDAsyncWritePacket *currentWrite;
    unsigned long socketFDBytesAvailable;
    GCDAsyncSocketPreBuffer *preBuffer;
    struct {
        int version;
        void *info;
        CDUnknownFunctionPointerType retain;
        CDUnknownFunctionPointerType release;
        CDUnknownFunctionPointerType copyDescription;
    } streamContext;
    struct __CFReadStream *readStream;
    struct __CFWriteStream *writeStream;
    struct SSLContext *sslContext;
    GCDAsyncSocketPreBuffer *sslPreBuffer;
    unsigned long sslWriteCachedLength;
    long sslErrCode;
    void *IsOnSocketQueueOrTargetQueueKey;
    id userData;
    BOOL _shouldReusePortWhenListening;
}

+ (id)ZeroData;
+ (id)LFData;
+ (id)CRData;
+ (id)CRLFData;
+ (BOOL)getHost:(id *)arg1 port:(unsigned short *)arg2 family:(char *)arg3 fromAddress:(id)arg4;
+ (BOOL)getHost:(id *)arg1 port:(unsigned short *)arg2 fromAddress:(id)arg3;
+ (BOOL)isIPv6Address:(id)arg1;
+ (BOOL)isIPv4Address:(id)arg1;
+ (unsigned short)portFromAddress:(id)arg1;
+ (id)hostFromAddress:(id)arg1;
+ (unsigned short)portFromSockaddr6:(const struct sockaddr_in6 *)arg1;
+ (unsigned short)portFromSockaddr4:(const struct sockaddr_in *)arg1;
+ (id)hostFromSockaddr6:(const struct sockaddr_in6 *)arg1;
+ (id)hostFromSockaddr4:(const struct sockaddr_in *)arg1;
+ (id)lookupHost:(id)arg1 port:(unsigned short)arg2 error:(id *)arg3;
+ (void)unscheduleCFStreams:(id)arg1;
+ (void)scheduleCFStreams:(id)arg1;
+ (void)cfstreamThread;
+ (void)stopCFStreamThreadIfNeeded;
+ (void)startCFStreamThreadIfNeeded;
+ (void)ignore:(id)arg1;
+ (id)gaiError:(int)arg1;
@property BOOL shouldReusePortWhenListening; // @synthesize shouldReusePortWhenListening=_shouldReusePortWhenListening;
- (void).cxx_destruct;
- (struct SSLContext *)sslContext;
- (BOOL)enableBackgroundingOnSocketWithCaveat;
- (BOOL)enableBackgroundingOnSocket;
- (BOOL)enableBackgroundingOnSocketWithCaveat:(BOOL)arg1;
- (struct __CFWriteStream *)writeStream;
- (struct __CFReadStream *)readStream;
- (int)socket6FD;
- (int)socket4FD;
- (int)socketFD;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)unmarkSocketQueueTargetQueue:(id)arg1;
- (void)markSocketQueueTargetQueue:(id)arg1;
@property BOOL autoDisconnectOnClosedReadStream;
- (BOOL)openStreams;
- (void)removeStreamsFromRunLoop;
- (BOOL)addStreamsToRunLoop;
- (BOOL)registerForStreamCallbacksIncludingReadWrite:(BOOL)arg1;
- (BOOL)createReadAndWriteStream;
- (void)cf_startTLS;
- (void)cf_abortSSLHandshake:(id)arg1;
- (void)cf_finishSSLHandshake;
- (void)ssl_shouldTrustPeer:(BOOL)arg1 stateIndex:(int)arg2;
- (void)ssl_continueSSLHandshake;
- (void)ssl_startTLS;
- (long)sslWriteWithBuffer:(const void *)arg1 length:(unsigned int *)arg2;
- (long)sslReadWithBuffer:(void *)arg1 length:(unsigned int *)arg2;
- (void)maybeStartTLS;
- (void)startTLS:(id)arg1;
- (void)doWriteTimeoutWithExtension:(double)arg1;
- (void)doWriteTimeout;
- (void)setupWriteTimerWithTimeout:(double)arg1;
- (void)endCurrentWrite;
- (void)completeCurrentWrite;
- (void)doWriteData;
- (void)maybeDequeueWrite;
- (float)progressOfWriteReturningTag:(long *)arg1 bytesDone:(unsigned int *)arg2 total:(unsigned int *)arg3;
- (void)writeData:(id)arg1 withTimeout:(double)arg2 tag:(long)arg3;
- (void)doReadTimeoutWithExtension:(double)arg1;
- (void)doReadTimeout;
- (void)setupReadTimerWithTimeout:(double)arg1;
- (void)endCurrentRead;
- (void)completeCurrentRead;
- (void)doReadEOF;
- (void)doReadData;
- (void)flushSSLBuffers;
- (void)maybeDequeueRead;
- (float)progressOfReadReturningTag:(long *)arg1 bytesDone:(unsigned int *)arg2 total:(unsigned int *)arg3;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned int)arg4 maxLength:(unsigned int)arg5 tag:(long)arg6;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 maxLength:(unsigned int)arg3 tag:(long)arg4;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned int)arg4 tag:(long)arg5;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 tag:(long)arg3;
- (void)readDataToLength:(unsigned int)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned int)arg4 tag:(long)arg5;
- (void)readDataToLength:(unsigned int)arg1 withTimeout:(double)arg2 tag:(long)arg3;
- (void)readDataWithTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned int)arg3 maxLength:(unsigned int)arg4 tag:(long)arg5;
- (void)readDataWithTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned int)arg3 tag:(long)arg4;
- (void)readDataWithTimeout:(double)arg1 tag:(long)arg2;
- (void)resumeWriteSource;
- (void)suspendWriteSource;
- (void)resumeReadSource;
- (void)suspendReadSource;
- (BOOL)usingSecureTransportForTLS;
- (BOOL)usingCFStreamForTLS;
- (void)setupReadAndWriteSourcesForNewlyConnectedSocket:(int)arg1;
- (void)getInterfaceAddress4:(id *)arg1 address6:(id *)arg2 fromDescription:(id)arg3 port:(unsigned short)arg4;
@property(readonly) BOOL isSecure;
@property(readonly) BOOL isIPv6;
@property(readonly) BOOL isIPv4;
@property(readonly) NSData *localAddress;
@property(readonly) NSData *connectedAddress;
- (unsigned short)localPortFromSocket6:(int)arg1;
- (unsigned short)localPortFromSocket4:(int)arg1;
- (id)localHostFromSocket6:(int)arg1;
- (id)localHostFromSocket4:(int)arg1;
- (unsigned short)connectedPortFromSocket6:(int)arg1;
- (unsigned short)connectedPortFromSocket4:(int)arg1;
- (id)connectedHostFromSocket6:(int)arg1;
- (id)connectedHostFromSocket4:(int)arg1;
- (unsigned short)localPort6;
- (unsigned short)localPort4;
- (id)localHost6;
- (id)localHost4;
- (unsigned short)connectedPort6;
- (unsigned short)connectedPort4;
- (id)connectedHost6;
- (id)connectedHost4;
@property(readonly) unsigned short localPort;
@property(readonly) NSString *localHost;
@property(readonly) unsigned short connectedPort;
@property(readonly) NSString *connectedHost;
@property(readonly) BOOL isConnected;
@property(readonly) BOOL isDisconnected;
- (id)otherError:(id)arg1;
- (id)connectionClosedError;
- (id)writeTimeoutError;
- (id)readTimeoutError;
- (id)readMaxedOutError;
- (id)connectTimeoutError;
- (id)sslError:(long)arg1;
- (id)errnoError;
- (id)errnoErrorWithReason:(id)arg1;
- (id)badParamError:(id)arg1;
- (id)badConfigError:(id)arg1;
- (void)maybeClose;
- (void)disconnectAfterReadingAndWriting;
- (void)disconnectAfterWriting;
- (void)disconnectAfterReading;
- (void)disconnect;
- (void)closeWithError:(id)arg1;
- (void)doConnectTimeout;
- (void)endConnectTimeout;
- (void)startConnectTimeout:(double)arg1;
- (void)didNotConnect:(int)arg1 error:(id)arg2;
- (void)didConnect:(int)arg1;
- (BOOL)connectWithAddress4:(id)arg1 address6:(id)arg2 error:(id *)arg3;
- (void)lookup:(int)arg1 didFail:(id)arg2;
- (void)lookup:(int)arg1 didSucceedWithAddress4:(id)arg2 address6:(id)arg3;
- (BOOL)connectToAddress:(id)arg1 viaInterface:(id)arg2 withTimeout:(double)arg3 error:(id *)arg4;
- (BOOL)connectToAddress:(id)arg1 withTimeout:(double)arg2 error:(id *)arg3;
- (BOOL)connectToAddress:(id)arg1 error:(id *)arg2;
- (BOOL)connectToHost:(id)arg1 onPort:(unsigned short)arg2 viaInterface:(id)arg3 withTimeout:(double)arg4 error:(id *)arg5;
- (BOOL)connectToHost:(id)arg1 onPort:(unsigned short)arg2 withTimeout:(double)arg3 error:(id *)arg4;
- (BOOL)connectToHost:(id)arg1 onPort:(unsigned short)arg2 error:(id *)arg3;
- (BOOL)preConnectWithInterface:(id)arg1 error:(id *)arg2;
- (BOOL)doAccept:(int)arg1;
- (BOOL)acceptOnInterface:(id)arg1 port:(unsigned short)arg2 error:(id *)arg3;
- (BOOL)acceptOnPort:(unsigned short)arg1 error:(id *)arg2;
@property(retain) id userData;
@property(getter=isIPv4PreferredOverIPv6) BOOL IPv4PreferredOverIPv6;
@property(getter=isIPv6Enabled) BOOL IPv6Enabled;
@property(getter=isIPv4Enabled) BOOL IPv4Enabled;
- (void)synchronouslySetDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)setDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)setDelegate:(id)arg1 delegateQueue:(id)arg2 synchronously:(BOOL)arg3;
- (void)getDelegate:(id *)arg1 delegateQueue:(id *)arg2;
- (void)synchronouslySetDelegateQueue:(id)arg1;
@property(retain) NSObject<OS_dispatch_queue> *delegateQueue;
- (void)setDelegateQueue:(id)arg1 synchronously:(BOOL)arg2;
- (void)synchronouslySetDelegate:(id)arg1;
@property __weak id delegate;
- (void)setDelegate:(id)arg1 synchronously:(BOOL)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 socketQueue:(id)arg3;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)initWithSocketQueue:(id)arg1;
- (id)init;

@end

