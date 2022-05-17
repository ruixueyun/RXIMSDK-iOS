//
//  JXIMService.h
//  JXIMSdk
//
//  Created by 陈汉 on 2021/8/24.
//

#import <Foundation/Foundation.h>
#import "JXIMSendMessage.h"
#import "JXIMReadMessage.h"
#import "JXGroupMessageGet.h"
#import "JXIMError.h"

NS_ASSUME_NONNULL_BEGIN

@protocol JXIMMessageDelegate <NSObject>

/**
 * 消息接收
 */
- (void)receiveMessage:(nonnull NSArray<JXIMMessage *> *)msg;
/**
 * 消息发送成功
 */
- (void)sendMessageSuccess:(nonnull JXIMMessage *)msg;
/**
 * 消息发送失败
 */
- (void)sendMessageFailure:(nonnull JXIMMessage *)msg;

/**
 * 消息已读
 */
- (void)messageRead:(nonnull JXIMMessage *)msg;

/**
 * 批量消息已读
 */
- (void)messageReads:(JXIMReadMessage *)msg;

/**
 * 消息删除
 */
- (void)messageDelete:(nonnull JXIMMessage *)msg;

/**
 * 撤回消息
 */
- (void)recallMessage:(nonnull JXIMMessage *)msg;

/**
 * @群聊收到
 */
- (void)groupATGet:(nonnull JXGroupMessageGetResp *)msg;

@end

@interface JXIMService : NSObject

@property (nonatomic, weak) id <JXIMMessageDelegate> delegate;

/**
 * 获取SDK实例（单例）
 */
+ (instancetype)sharedSDK;

/**
 * 发送消息
 * @param sendMessage 发送的消息对象
 * @param completionHandler 返回发送的消息对象是未发送成功对象，发送成功以delegate方式回调，处理本地逻辑用
 */
- (void)sendMessage:(nonnull JXIMSendMessage *)sendMessage
  completionHandler:(nonnull void (^)(JXIMMessage * _Nullable message,JXIMError *error))completionHandler;

/**
 * 重发消息
 * @param message 发送的消息对象
 * @param completionHandler 返回发送的消息对象是未发送成功对象，发送成功以delegate方式回调，处理本地逻辑用
 */
- (void)resendMessage:(nonnull JXIMMessage *)message
  completionHandler:(nonnull void (^)(JXIMMessage * _Nullable message,JXIMError *error))completionHandler;

/**
 * 发送消息到本地（不发送）
 * @param sendMessage 发送的消息对象
 * @param completionHandler 返回发送的消息对象是未发送成功对象，发送成功以delegate方式回调，处理本地逻辑用
 */
- (void)sendMessageToLocal:(nonnull JXIMSendMessage *)sendMessage
         completionHandler:(nonnull void (^)(JXIMMessage * _Nullable message,JXIMError *error))completionHandler;

/**
 * 删除消息
 * @param mid 服务端唯一消息号
 */
- (void)deleteMessage:(NSInteger)mid
    completionHandler:(nonnull void (^)(JXIMError *error))completionHandler;

/**
 * 撤回消息
 * @param target 目标id
 * @param mid 服务端唯一消息号
 * @param sessionType 会话类型
 */
- (void)recallMessage:(nonnull NSString *)target
                  mid:(NSInteger)mid
          sessionType:(JXIMSessionType)sessionType
    completionHandler:(nonnull void (^)(JXIMError *error))completionHandler;

/**
 * 转发消息
 * @param type 转发方式 0 逐条转发 1 合并转发
 * @param mids 消息id数组
 * @param receives 对方id数组
 * @Param exts 扩展数组
 */
- (void)forwardMessage:(NSInteger)type
                  mids:(nonnull NSArray *)mids
              receives:(nonnull NSArray *)receives
                   ext:(NSArray *)exts
     completionHandler:(nonnull void (^)(NSArray<JXIMMessage *> *messages,JXIMError *error))completionHandler;

/**
 * 通过消息id获取消息体
 * @param msgId 消息id
 */
-(JXIMMessage *)getMsgWithMsgid:(NSInteger)msgId;

/**
 * 设置消息已读
 * @param msgId 消息id
 * @param target 单聊为对方id，群聊为群id
 * @param sessionType 会话类型
 */
- (void)readMessage:(NSInteger)msgId
             target:(nonnull NSString *)target
        sessionType:(JXIMSessionType)sessionType
  completionHandler:(nonnull void (^)(JXIMError *error))completionHandler;

/**
 * 批量设置消息已读
 * @param msgIds 消息id数组
 * @param target 单聊为对方id，群聊为群id
 * @param sessionType 会话类型
 */
- (void)readMessages:(NSArray *)msgIds
             target:(nonnull NSString *)target
        sessionType:(JXIMSessionType)sessionType
   completionHandler:(nonnull void (^)(JXIMError *error))completionHandler;

/**
 * 回复消息
 * @param msgId 关联的消息id
 * @param text 回复的内容
 * @param target 单聊为对方id，群聊为群id
 * @param sessionType 会话类型
 * @param ext 扩展
 */
- (void)replyMessage:(NSInteger)msgId
             content:(nonnull NSString *)text
              target:(nonnull NSString *)target
         sessionType:(JXIMSessionType)sessionType
                 ext:(NSString *)ext
   completionHandler:(nonnull void (^)(JXIMMessage * _Nullable message,JXIMError *error))completionHandler;

/**
 * 回复消息（群聊@ ）
 * @param msgId 关联的消息id
 * @param text 回复的内容
 * @param target 单聊为对方id，群聊为群id
 * @param sessionType 会话类型
 * @param at 群聊@
 * @param ext 扩展
 */
- (void)replyMessage:(NSInteger)msgId
             content:(nonnull NSString *)text
              target:(nonnull NSString *)target
         sessionType:(JXIMSessionType)sessionType
                groupAT:(NSMutableDictionary<NSString*, JXGroupAtInfo*> *)at
                 ext:(NSString *)ext
   completionHandler:(nonnull void (^)(JXIMMessage * _Nullable message,JXIMError *error))completionHandler;

/**
 * 设置语音消息已播放
 * @param msgId 消息id
 */
- (void)setAudioMessagePlayed:(NSInteger)msgId target:(NSString *)target;

/**
 * 获取历史消息
 * @param msgId 消息锚点
 * @param target 单聊为对方id，群聊为群id
 * @param sessionType 会话类型
 * @param limit 查询数量，单次最多1000条，超过1000返回1000
 * @param completionHandler 返回消息数组
 */
- (void)getHistoryMessageWithMsgId:(NSInteger)msgId
                                 target:(nonnull NSString *)target
                            sessionType:(JXIMSessionType)sessionType
                                  limit:(NSInteger)limit
                      completionHandler:(nonnull void (^)(NSArray<JXIMMessage *> *messages,JXIMError *error))completionHandler;

/**
 * 获取离线消息
 * @param lastMsgId 最后一条已读消息
 * @param target 单聊为对方id，群聊为群id
 * @param sessionType 会话类型
 * @param completionHandler 返回消息数组
 */
- (void)getServerOfflineMsgWithMsgId:(NSInteger)lastMsgId
                                 target:(nonnull NSString *)target
                            sessionType:(JXIMSessionType)sessionType
                      completionHandler:(nonnull void (^)(NSArray<JXIMMessage *> *messages,NSInteger unreadCount,JXIMError *error))completionHandler;


/**
 * @群消息收到
 * @param messageGet 群收到结构体
 */
- (void)groupMsgGet:(JXGroupMessageGet *)messageGet;

/**
 * 全文检索
 * @param searchStr 搜索内容
 */
-(NSArray *)searchTextMsg:(NSString *)searchStr;

/**
 * 搜索单个会话文本消息
 * @param searchStr 搜索内容
 * @param target 会话id
 */
-(NSArray *)searchTextMsgWithTarget:(NSString *)target searchStr:(NSString *)searchStr;

/**
 * 搜索图片
 * @param target 会话id
 */
-(NSArray *)searchPicMsg:(NSString *)target;

/**
 * 搜索所有文件
 */
-(NSArray *)searchAllFileMsg;

/**
 * 搜索会话文件消息
 * @param target 会话id
 */
-(NSArray *)searchFileMsgWithTarget:(NSString *)target;

@end

NS_ASSUME_NONNULL_END
