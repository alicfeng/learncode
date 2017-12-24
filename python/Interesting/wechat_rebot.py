# coding=utf8
import requests
import itchat

# 图灵账号配置key
KEY = 'your key'
TULING_API_URL = 'http://www.tuling123.com/openapi/api'

def get_response(msg):
    data = {'key': KEY, 'info': msg, 'userid': 'wechat-robot'}
    try:
        r = requests.post(TULING_API_URL, data=data).json()
        return r.get('text')
    except:
        return

@itchat.msg_register(itchat.content.TEXT)
def tuling_reply(msg):
    defaultReply = 'I received: ' + msg['Text']
    reply = get_response(msg['Text'])
    return reply or defaultReply

itchat.auto_login(hotReload=True)
itchat.run()
