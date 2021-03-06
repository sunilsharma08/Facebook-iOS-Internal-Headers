//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSIndexPath, NSString;

@interface FBSettingsSearchResultAction : NSObject
{
    NSString *_searchResultName;
    NSString *_searchResultKey;
    NSIndexPath *_atIndexPath;
    unsigned int _actionType;
    FBSettingsSearchResultAction *_nextSearchResultAction;
}

+ (id)createFromParentSearchResultAction:(id)arg1 searchResultActionName:(id)arg2 key:(id)arg3 indexPath:(id)arg4 actionType:(unsigned int)arg5;
+ (id)createSearchResultActionName:(id)arg1 key:(id)arg2 indexPaths:(id)arg3 actionType:(unsigned int)arg4;
@property(retain, nonatomic) FBSettingsSearchResultAction *nextSearchResultAction; // @synthesize nextSearchResultAction=_nextSearchResultAction;
@property(readonly, nonatomic) unsigned int actionType; // @synthesize actionType=_actionType;
@property(readonly, nonatomic) NSIndexPath *atIndexPath; // @synthesize atIndexPath=_atIndexPath;
@property(readonly, nonatomic) NSString *searchResultKey; // @synthesize searchResultKey=_searchResultKey;
@property(readonly, nonatomic) NSString *searchResultName; // @synthesize searchResultName=_searchResultName;
- (void).cxx_destruct;
- (id)allAtIndexPaths;
- (id)actionTypeString;
- (id)debugDescription;
- (id)initWithSearchResultName:(id)arg1 key:(id)arg2 indexPath:(id)arg3 actionType:(unsigned int)arg4;
- (id)init;

@end

