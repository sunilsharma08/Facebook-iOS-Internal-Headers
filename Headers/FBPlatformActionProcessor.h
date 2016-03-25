//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBPlatformActionOperationDelegate-Protocol.h"

@class FBAsyncTransaction, FBComposerAppAttribution, FBPlatformAction, FBPlatformShareComposingBundle, NSMutableArray, NSString;
@protocol FBPlatformActionProcessorDelegate, FBPlatformShareDataLoadListener;

@interface FBPlatformActionProcessor : NSObject <FBPlatformActionOperationDelegate>
{
    FBPlatformShareComposingBundle *_composingBundle;
    NSMutableArray *_operations;
    BOOL _hasPublishPermissions;
    BOOL _TOSed;
    FBPlatformAction *_action;
    FBComposerAppAttribution *_appAttribution;
    NSString *_channel;
    id <FBPlatformShareDataLoadListener> _dataLoadListener;
    id <FBPlatformActionProcessorDelegate> _delegate;
    FBAsyncTransaction *_processingTransaction;
    NSString *_previewPropertyName;
    NSString *_sharedObjectFBID;
    unsigned int _state;
}

@property(nonatomic, getter=isTOSed) BOOL TOSed; // @synthesize TOSed=_TOSed;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *sharedObjectFBID; // @synthesize sharedObjectFBID=_sharedObjectFBID;
@property(copy, nonatomic) NSString *previewPropertyName; // @synthesize previewPropertyName=_previewPropertyName;
@property(retain, nonatomic) FBAsyncTransaction *processingTransaction; // @synthesize processingTransaction=_processingTransaction;
@property(nonatomic) BOOL hasPublishPermissions; // @synthesize hasPublishPermissions=_hasPublishPermissions;
@property(nonatomic) __weak id <FBPlatformActionProcessorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <FBPlatformShareDataLoadListener> dataLoadListener; // @synthesize dataLoadListener=_dataLoadListener;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(readonly, nonatomic) FBComposerAppAttribution *appAttribution; // @synthesize appAttribution=_appAttribution;
@property(readonly, nonatomic) FBPlatformAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)_failWithErrorCode:(int)arg1 errorMessage:(id)arg2 errorResponse:(id)arg3;
- (void)_cancelOperations;
- (id)sharedObject;
- (void)processOperationResult:(id)arg1;
- (void)failWithInvalidParameterErrorResponse:(id)arg1;
- (BOOL)allDataLoaded;
- (void)platformActionOperationDidComplete:(id)arg1;
- (void)platformActionOperation:(id)arg1 didFailWithErrorCode:(unsigned int)arg2 errorMessage:(id)arg3 errorResponse:(id)arg4;
- (void)dataDidLoad;
- (void)requireOperation:(id)arg1;
- (void)process;
- (void)cancel;
- (id)publishingBundle;
@property(readonly, copy, nonatomic) FBPlatformShareComposingBundle *composingBundle;
- (void)dealloc;
- (id)init;
- (id)initWithAction:(id)arg1;

@end

