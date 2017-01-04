//
//  MWProgressHUDConst.h
//  Facaishu
//
//  Created by caifeng on 2016/11/30.
//  Copyright © 2016年 领鲜01. All rights reserved.
//

#import <UIKit/UIKit.h>

// GIF背景色
#define MWProgressHUDGifDimBackgroundColor [UIColor groupTableViewBackgroundColor]
// GIF背景色不透明度
#define MWProgressHUDGifDimBackgroundOpacity 1
// GIF加载描述文字的颜色
#define MWProgressHUDGifLoadingLabelTextColor [UIColor blackColor]

// Message背景色
#define MWProgressHUDMessageDimBackgroundColor [UIColor clearColor]
// Message背景色不透明度
#define MWProgressHUDMessageDimBackgroundOpacity 1
// Message文字的颜色
#define MWProgressHUDMessageLabelTextColor [UIColor whiteColor]

extern const CGFloat   MWProgressHUDGifIndicatorHeight;/**<指示器默认高度 宽度由宽高比例决定*/
extern const CGFloat   MWProgressHUDGifAnimationDuration;/**<GIF加载的动画周期*/
extern const CGFloat   MWProgressHUDGifShowDuration;/**<Gif显示在视图上的时间*/
extern const CGFloat   MWProgressHUDLoadingLabelFont;/**<加载文字的字体大小*/
extern const CGFloat   MWProgressHUDMessageLabelFont;/**<message文字字体大小*/
extern const CGFloat   MWProgressHUDMessageLabelMarginX;/**<message横向边距Margin*/
extern const CGFloat   MWProgressHUDMessageLabelMarginY;/**<message纵向边距Margin*/
extern const CGFloat   MWProgressHUDMessageLabelShowDuration;/**<message显示在视图上的时间*/
extern NSString *const MWProgressHUDLoadingLabelText;/**<加载文字描述*/

