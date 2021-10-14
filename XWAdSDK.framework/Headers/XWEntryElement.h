//
//  XWEntryElement.h
//  XWAdSDK
//
//  Created by laole918 on 2021/6/17.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "XWContentPage.h"
#import <XWAdSDK/XWAdSDKConfig.h>

NS_ASSUME_NONNULL_BEGIN

@class XWEntryElement;

@protocol XWEntryElementDelegate <NSObject>

@optional

- (void)xw_entryElementAdDidLoad:(XWEntryElement *)entryElement;
- (void)xw_entryElementAdDidFailToLoad:(XWEntryElement *)entryElement error:(NSError *)error;
- (void)xw_entryElementAdDidExpose:(XWEntryElement *)entryElement;
- (void)xw_entryElementAdDidClick:(XWEntryElement *)entryElement contentPage:(XWContentPage *) contentPage;

@end

@interface XWEntryElement : NSObject
@property (nonatomic, weak, nullable) id<XWEntryElementDelegate> delegate;
@property (nonatomic, assign, readonly) XWAdSdkUnionType unionType;
@property (nonatomic, copy, readonly) UIView *entryView;
@property (nonatomic, readonly) CGSize entryExpectedSize;

@property (nonatomic, assign) CGFloat expectedWidth;
- (instancetype)initWithSlotId:(NSString *) slotId;
- (void)loadAd;
@end

NS_ASSUME_NONNULL_END
