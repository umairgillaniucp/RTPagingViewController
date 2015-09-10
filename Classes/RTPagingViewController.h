//
//  ZJUInfoViewController.h
//  iZJU
//
//  Created by ricky on 13-6-7.
//  Copyright (c) 2013年 ricky. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "RTGridContainerView.h"


IB_DESIGNABLE
@interface RTPagingViewController : UIViewController
{
@private
    UIViewController            * _controllerToRemove;
    UIViewController            * _previousController;
    UIViewController            * _nextController;
}
@property (nonatomic, strong, readonly) RTGridContainerView *titleView;
@property (nonatomic, strong) UIView *titleIndicatorView;
@property (nonatomic, assign) CGPoint indicatorOffset;

@property (nonatomic, strong) NSArray *controllers;
@property (weak, nonatomic, readonly) UIViewController *currentViewController;
@property (nonatomic, assign) NSInteger currentControllerIndex;

@property (nonatomic, strong) IBInspectable UIColor *titleColor;
@property (nonatomic, strong) IBInspectable UIColor *selectedTitleColor;
@property (nonatomic, strong) IBInspectable UIFont *titleFont;
@property (nonatomic, assign) IBInspectable CGFloat titleViewHeight;

- (instancetype)initWithController:(NSArray *)controllers;

@end


@interface UIViewController (RTPagingViewController)
@property (nonatomic, readonly) RTPagingViewController *rt_pagingViewController;
@end