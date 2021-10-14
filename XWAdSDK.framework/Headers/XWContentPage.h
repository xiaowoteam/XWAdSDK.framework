//
//  XWContentPage.h
//  XWAdSDK
//
//  Created by laole918 on 2021/6/15.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "XWContentInfo.h"
#import <XWAdSDK/XWAdSDKConfig.h>

NS_ASSUME_NONNULL_BEGIN

@class XWContentPage;

@protocol XWContentPageDelegate <NSObject>
@optional
- (void)xw_contentPageDidLoad:(XWContentPage *)entryElement;
- (void)xw_contentPageDidFailToLoad:(XWContentPage *)entryElement error:(NSError *)error;
@end

@protocol XWContentPageContentDelegate <NSObject>
@optional
- (void)xw_contentPageContentDidFullDisplay:(XWContentPage *)entryElement contentInfo:(XWContentInfo *) contentInfo;
- (void)xw_contentPageContentDidEndDisplay:(XWContentPage *)entryElement contentInfo:(XWContentInfo *) contentInfo;
- (void)xw_contentPageContentDidPause:(XWContentPage *)entryElement contentInfo:(XWContentInfo *) contentInfo;
- (void)xw_contentPageContentDidResume:(XWContentPage *)entryElement contentInfo:(XWContentInfo *) contentInfo;
@end

@protocol XWContentPageVideoDelegate <NSObject>
@optional
- (void)xw_contentPageVideoDidStartPlay:(XWContentPage *)entryElement contentInfo:(XWContentInfo *) contentInfo;
- (void)xw_contentPageVideoDidPause:(XWContentPage *)entryElement contentInfo:(XWContentInfo *) contentInfo;
- (void)xw_contentPageVideoDidResume:(XWContentPage *)entryElement contentInfo:(XWContentInfo *) contentInfo;
- (void)xw_contentPageVideoDidEndPlay:(XWContentPage *)entryElement contentInfo:(XWContentInfo *) contentInfo;
- (void)xw_contentPageVideoDidFailToPlay:(XWContentPage *)entryElement contentInfo:(XWContentInfo *) contentInfo error:(NSError *)error;
@end

@interface XWContentPage : NSObject
@property (nonatomic, weak, nullable) id<XWContentPageDelegate> delegate;
@property (nonatomic, assign, readonly) XWAdSdkUnionType unionType;
@property (nonatomic, weak, nullable) id<XWContentPageContentDelegate> contentDelegate;
@property (nonatomic, weak, nullable) id<XWContentPageVideoDelegate> videoDelegate;
@property (nonatomic, strong, nullable) UIViewController * viewController;
- (instancetype)initWithSlotId:(NSString *) slotId;
@end

NS_ASSUME_NONNULL_END
