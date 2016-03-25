//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBCoreShareAction.h"

#import "FBCoreShareActionDelegate-Protocol.h"
#import "FBReshareCoreShareAction-Protocol.h"

@class FBUserSession, NSDictionary, NSString, NSURL, UIView;
@protocol FBReshareCoreShareAction, PAFancyShareActionDelegate;

@interface PAFancyReshareShareAction : FBCoreShareAction <FBCoreShareActionDelegate, FBReshareCoreShareAction>
{
    id <FBReshareCoreShareAction> _shareAction;
    FBUserSession *_session;
    NSString *_edgeTextFormatString;
    CDUnknownBlockType _reshareViewGenerator;
    UIView *_presentationView;
    BOOL _paperReshareIsAnimating;
    NSURL *_paperLastResharedStoryURL;
    NSDictionary *_cachedResponse;
    CDUnknownBlockType _hangoverBarTappedBlock;
}

- (void).cxx_destruct;
- (void)_displayHangoverForLastResharedStory;
- (void)shareAction:(id)arg1 didShareWithResponse:(id)arg2;
- (void)shareAction:(id)arg1 percentCompleted:(double)arg2;
- (void)_showReshareAnimationWithActor:(id)arg1;
- (void)performShareActionWithShareableURL:(id)arg1 shareableImageURL:(id)arg2 shareableImage:(id)arg3 shareTitle:(id)arg4 shareMessage:(id)arg5;
- (id)initWithShareAction:(id)arg1 session:(id)arg2 edgeTextFormatString:(id)arg3 presentationView:(id)arg4 reshareViewGenerator:(CDUnknownBlockType)arg5 hangoverBarTappedBlock:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <PAFancyShareActionDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

