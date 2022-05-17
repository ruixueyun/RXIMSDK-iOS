//
//  JXSessionService.h
//  JXIMSdk
//
//  Created by 陈汉 on 2021/9/16.
//

#import <Foundation/Foundation.h>
#import "JXSessionMessage.h"
#import "JXIMError.h"

NS_ASSUME_NONNULL_BEGIN


@protocol JXSessionServiceDelegate <NSObject>

/**
 * 会话最后一条消息变更
 * @param sessions 全量的会话结构
 * 特殊场景:消息撤回时,last_msg中只有recall和mid有效。
 */
- (void)onSessionLastMessageChanged:(nonnull NSArray<JXSessionMessage *> *)sessions;

/**
 * 会话未读消息数变更
 * @param sessions 全量的会话结构
 */
- (void)onSessionUnreadCountChanged:(nonnull NSArray<JXSessionMessage *> *)sessions;

/**
 * 会话'@'我状态变更
 * @param session 全量的会话结构
 */
- (void)onSessionGroupATMeChanged:(nonnull JXSessionMessage *)session;

@end

@interface JXSessionService : NSObject

@property (nonatomic, weak) id <JXSessionServiceDelegate> delegate;

/**
 * 获取SDK实例（单例）
 */
+ (instancetype)sharedSDK;

/**
 * 获取服务器所有会话列表
 */
- (void)getServerAllSessionsWithComplete:(void(^)(NSArray<JXSessionMessage *> *sessions,JXIMError *error))complete;

/**
 * 获取本地所有会话列表
 */
-(NSArray *)getLocalAllSessions;

/**
 * 根据会话id获取会话
 */
- (JXSessionMessage *)getSessionWithSessionId:(NSString *)sessionId;

/**
 * 删除单个会话
 * @param sessionId 会话id
 */
- (void)deleteLocalSingleConv:(NSString *)sessionId
                        complete:(void(^)(JXIMError *error))complete;

/**
 * 清空会话的未读消息数
 * @param sessionId 会话id
 */
- (void)clearRedPoint:(NSString *)sessionId
             complete:(void(^)(JXIMError *error))complete;

/**
 * 设置会话置顶
 * @param sessionId 会话id
 * @param state false 取消置顶 true 置顶
 */
- (void)setTop:(NSString *)sessionId
         state:(BOOL)state
      complete:(void(^)(JXIMError *error))complete;

/**
 * 设置会话免打扰
 * @param sessionId 会话id
 * @param state false 取消免打扰 true 免打扰
 */
- (void)setNoDisturb:(NSString *)sessionId
               state:(BOOL)state
               complete:(void(^)(JXIMError *error))complete;

/**
 * 设置本地会话扩展字段
 * @param sessionId 会话id
 * @param ext 扩展字段 json字符串
 */
- (BOOL)setLocalSessionExt:(NSString *)sessionId
                  ext:(NSString *)ext;

/**
 * 设置会话扩展字段
 * @param sessionId 会话id
 * @param ext 扩展字段 json字符串
 */
- (void)setSessionExt:(NSString *)sessionId
                  ext:(NSString *)ext
             complete:(void(^)(JXIMError *error))complete;


/**
 * 清除会话@ 我状态
 * @param sessionId 会话id
 */
- (BOOL)clearConvATMeState:(NSString *)sessionId;

/**
 * 清空聊天记录
 * @param sessionId 会话id
 */
- (void)clearConvMessage:(nonnull NSString *)sessionId completionHandler:(nonnull void (^)(JXIMError *error))completionHandler;



@end

NS_ASSUME_NONNULL_END
