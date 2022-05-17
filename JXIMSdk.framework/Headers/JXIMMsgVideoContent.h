//
//  JXIMMsgVideoContent.h
//  JXIMSdk
//
//  Created by 陈汉 on 2021/9/13.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JXIMMsgVideoContent : NSObject

/**
 * 消息发送必须传
 */
@property (nonatomic, strong) NSData *videoData;

/**
 * 云端视频地址
 */
@property(nonatomic, copy) NSString *url;

/**
 * 本地视频路径
 */
@property(nonatomic, copy) NSString *path;

/**
 * 视频时长
 */
@property(nonatomic, assign) NSInteger videoLength;

@end

NS_ASSUME_NONNULL_END
