//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBCoreShareAction.h"

#import "FBCoreShareAction-Protocol.h"

@class NSString;
@protocol FBCoreShareActionDelegate;

@interface FBCameraRollShareAction : FBCoreShareAction <FBCoreShareAction>
{
    id <FBCoreShareActionDelegate> _delegate;
}

@property(nonatomic) __weak id <FBCoreShareActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)performShareActionWithShareableURL:(id)arg1 shareableImageURL:(id)arg2 shareableImage:(id)arg3 shareTitle:(id)arg4 shareMessage:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

