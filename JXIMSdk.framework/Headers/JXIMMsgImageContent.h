//
//  JXIMMsgImageContent.h
//  JXIMSdk
//
//  Created by 陈汉 on 2021/9/13.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JXIMMsgImageContent : NSObject

/**
 * 消息发送必须传
 */
@property (nonatomic, strong) NSData *imgData;

/**
 * 云端图片地址
 */
@property(nonatomic, copy) NSString *url;

/**
 * 本地图片路径
 */
@property(nonatomic, copy) NSString *path;

/**
 * 图片宽度
 */
@property(nonatomic, assign) NSInteger width;

/**
 * 图片高度
 */
@property(nonatomic, assign) NSInteger height;

@end

NS_ASSUME_NONNULL_END
