//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBMentionPickerProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FBUserSession, NSArray, NSString, UITableView;
@protocol FBMentionPickerDelegate;

@interface FBPaperMentionPickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, FBMentionPickerProtocol>
{
    UITableView *_tableView;
    FBUserSession *_session;
    id <FBMentionPickerDelegate> _delegate;
    NSArray *_avatars;
    id _context;
}

@property(copy, nonatomic) id context; // @synthesize context=_context;
@property(copy, nonatomic) NSArray *avatars; // @synthesize avatars=_avatars;
@property(nonatomic) __weak id <FBMentionPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)_rowAtIndexPathHasDividerLine:(id)arg1;
- (float)preferredHeight;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

