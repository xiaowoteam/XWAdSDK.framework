//
//  XWDrawVideoAdRelatedView.h
//  XWAdSDK
//
//  Created by laole918 on 2021/6/16.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class XWDrawVideoAdRelatedView;

@protocol XWDrawVideoAdRelatedViewDelegate <NSObject>
@optional
- (void)xw_drawVideoAdRelatedViewDidExpose:(XWDrawVideoAdRelatedView *)drawVideoAdRelatedView;
- (void)xw_drawVideoAdRelatedViewDidClick:(XWDrawVideoAdRelatedView *)drawVideoAdRelatedView;
- (void)xw_drawVideoAdRelatedViewDidCloseOtherController:(XWDrawVideoAdRelatedView *)drawVideoAdRelatedView;
- (void)xw_drawVideoAdRelatedViewDidPlayFinish:(XWDrawVideoAdRelatedView *)drawVideoAdRelatedView;
@end

@interface XWDrawVideoAdRelatedView : NSObject
@property (nonatomic, weak) UIViewController *viewController;
@property (nonatomic, weak, nullable) id<XWDrawVideoAdRelatedViewDelegate> delegate;

- (void)registerContainer:(UIView *)containerView;
- (void)unregisterView;
@end

NS_ASSUME_NONNULL_END
