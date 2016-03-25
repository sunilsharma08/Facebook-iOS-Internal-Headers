//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "POPPropertyAnimation.h"

@interface POPSpringAnimation : POPPropertyAnimation
{
}

+ (id)animationWithPropertyNamed:(id)arg1;
+ (id)animation;
+ (void)convertTension:(float)arg1 friction:(float)arg2 toBounciness:(float *)arg3 speed:(float *)arg4;
+ (void)convertBounciness:(float)arg1 speed:(float)arg2 toTension:(float *)arg3 friction:(float *)arg4 mass:(float *)arg5;
- (void)_appendDescription:(id)arg1 debug:(BOOL)arg2;
- (void)_updatedDynamicsMass;
- (void)_updatedDynamicsFriction;
- (void)_updatedDynamicsTension;
- (void)setSolver:(SpringSolver_fe820e75 *)arg1;
- (SpringSolver_fe820e75 *)solver;
@property(nonatomic) float springBounciness;
@property(nonatomic) float springSpeed;
@property(nonatomic) float dynamicsMass;
@property(nonatomic) float dynamicsFriction;
@property(nonatomic) float dynamicsTension;
@property(copy, nonatomic) id velocity;
- (void)dealloc;
- (id)init;
- (void)_initState;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

