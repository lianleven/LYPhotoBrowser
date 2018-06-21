//
//  LLPhotosBrowser.h
//  LLPhotosBrowser
//
//  Created by LianLeven on 2017/12/26.
//  Copyright © 2017年 LianLeven. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LLPhotoItem.h"
#import "LLPhotoView.h"
#import "LLPageControl.h"

@interface LLPhotosBrowser : UIView

@property (nonatomic, readonly) NSArray <LLPhotoItem *>*groupItems;
@property (nonatomic, readonly) NSInteger currentPage;
@property (nonatomic, strong, readonly) LLPageControl *pager;
@property (nonatomic, copy) void(^dismissCompletionBlock)(void);


- (instancetype)init UNAVAILABLE_ATTRIBUTE;
- (instancetype)initWithFrame:(CGRect)frame UNAVAILABLE_ATTRIBUTE;
+ (instancetype)new UNAVAILABLE_ATTRIBUTE;
- (instancetype)initWithPhotoItems:(NSArray <LLPhotoItem *>*)photoItems;

- (void)presentFromImageView:(UIView *)fromView
                 toContainer:(UIView *)container
                    animated:(BOOL)animated
                  completion:(void (^)(void))completion;

- (void)dismissAnimated:(BOOL)animated completion:(void (^)(void))completion;
- (void)dismiss;

@end
