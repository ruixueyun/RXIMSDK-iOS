//
//  JXIMMsgAudioContent.h
//  JXIMSdk
//
//  Created by 陈汉 on 2021/9/13.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JXIMMsgAudioContent : NSObject

/**
 * 消息发送必须传
 */
@property (nonatomic, strong) NSData *audioData;

/**
 * 云端语音地址
 */
@property(nonatomic, copy) NSString *url;

/**
 * 本地语音路径
 */
@property(nonatomic, copy) NSString *path;

/**
 * 语音时长
 */
@property(nonatomic, assign) NSInteger voiceLength;

/**
 * 是否播放过
 */
@property (nonatomic,assign) BOOL isPlay;

@end

NS_ASSUME_NONNULL_END
