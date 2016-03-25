//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FBImageDownloader, NSArray, NSString, UIImage, UITableView;
@protocol FBEventLineupTableViewDelegate;

@interface FBEventLineupTableView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    FBImageDownloader *_imageDownloader;
    NSArray *_lineupEntries;
    UITableView *_tableView;
    UIImage *_defaultImage;
    id <FBEventLineupTableViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBEventLineupTableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 imageDownloader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

