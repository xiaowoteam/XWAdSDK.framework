//
//  XWDrawVideoAd.h
//  XWAdSDK
//
//  Created by laole918 on 2021/6/16.
//

#import <Foundation/Foundation.h>
#import "XWDrawVideoAdRelatedView.h"
#import <XWAdSDK/XWAdSDKConfig.h>

NS_ASSUME_NONNULL_BEGIN

@class XWDrawVideoAd;
@protocol XWDrawVideoAdDelegate <NSObject>

- (void)xw_drawVideoAdDidLoad:(NSArray<XWDrawVideoAdRelatedView *> * _Nullable) drawVideoAdRelatedViews error:(NSError * _Nullable) error;
@end

@interface XWDrawVideoAd : NSObject
@property (nonatomic, weak, nullable) id<XWDrawVideoAdDelegate> delegate;
@property (nonatomic, assign, readonly) XWAdSdkUnionType unionType;
-(instancetype) initWithSlotId:(NSString *) slotId adSize:(CGSize) adSize;
- (void)loadAdWithCount:(NSInteger) count;
@end

NS_ASSUME_NONNULL_END
