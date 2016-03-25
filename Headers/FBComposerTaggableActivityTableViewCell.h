//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FBMemTaggableActivity, FBUserSession;

@interface FBComposerTaggableActivityTableViewCell : UITableViewCell
{
    id _glyphDownload;
    FBUserSession *_session;
    FBMemTaggableActivity *_taggableActivity;
    float _thumbnailSize;
}

@property(nonatomic) float thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(retain, nonatomic) FBMemTaggableActivity *taggableActivity; // @synthesize taggableActivity=_taggableActivity;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)showGlyph:(id)arg1;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1 session:(id)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

