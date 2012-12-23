//
//  DetailScrollViewController.h
//  Summly
//
//  Created by zoe on 12-12-17.
//  Copyright (c) 2012年 zzlmilk. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Summly.h"
#import "FAFancyMenuView.h"
#import "ArticleViewController.h"
#import "FAFancyMenuViewDataSource.h"


@interface DetailScrollViewController : UIViewController<UIScrollViewDelegate,ArticleViewControllerDelegate>
{
    
    UIScrollView *scrollView;
    
    NSDictionary *userInfo;
    NSArray *statuses;
    NSString *postStatusText;
    NSString *postImageStatusText;
    
    FAFancyMenuView *menu;
    FAFancyMenuViewDataSource *faFancyMenuDataSource;
    
}

+(id)sharedInstance;

- (void)setScrollOffset:(NSInteger)index;

@property(nonatomic,strong) NSArray *summlyArr;
@property(nonatomic) NSInteger index;
@end
