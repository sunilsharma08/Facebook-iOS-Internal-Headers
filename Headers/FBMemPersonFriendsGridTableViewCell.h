//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSMutableArray;
@protocol FBMemPersonFriendsGridTableViewCellDelegate;

@interface FBMemPersonFriendsGridTableViewCell : UITableViewCell
{
    NSMutableArray *_personCells;
    id _touchedPersonCell;
    BOOL _ignoringTouches;
    struct CGPoint _originalTouchLocation;
    NSArray *_persons;
    int _objectsPerCell;
    id <FBMemPersonFriendsGridTableViewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <FBMemPersonFriendsGridTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int objectsPerCell; // @synthesize objectsPerCell=_objectsPerCell;
@property(copy, nonatomic) NSArray *persons; // @synthesize persons=_persons;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

