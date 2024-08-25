[custom]
;不要随意改变关键字，否则会导致出错
;acl4SSR规则

;去广告：支持
;自动测速：不支持
;微软分流：支持
;苹果分流：支持
;增强中国IP段：支持
;增强国外GFW：支持

;设置规则标志位
ruleset=🎯 全球直连,https://raw.githubusercontent.com/ACL4SSR/ACL4SSR/master/Clash/LocalAreaNetwork.list
ruleset=🎯 全球直连,https://raw.githubusercontent.com/ACL4SSR/ACL4SSR/master/Clash/UnBan.list
ruleset=🎯 全球直连,https://raw.githubusercontent.com/ACL4SSR/ACL4SSR/master/Clash/GoogleCN.list
ruleset=🎯 全球直连,https://raw.githubusercontent.com/ACL4SSR/ACL4SSR/master/Clash/Ruleset/SteamCN.list
ruleset=Ⓜ️ 微软,https://raw.githubusercontent.com/ACL4SSR/ACL4SSR/master/Clash/Bing.list
ruleset=Ⓜ️ 微软,https://raw.githubusercontent.com/ACL4SSR/ACL4SSR/master/Clash/OneDrive.list
ruleset=Ⓜ️ 微软,https://raw.githubusercontent.com/ACL4SSR/ACL4SSR/master/Clash/Microsoft.list
ruleset=💬 Copilot,https://raw.githubusercontent.com/blackmatrix7/ios_rule_script/master/rule/Clash/Copilot/Copilot.list
ruleset=💳 PayPal,https://raw.githubusercontent.com/blackmatrix7/ios_rule_script/master/rule/Clash/PayPal/PayPal.list
ruleset=📲 电报消息,https://raw.githubusercontent.com/ACL4SSR/ACL4SSR/master/Clash/Telegram.list
ruleset=💬 OpenAi,https://raw.githubusercontent.com/ACL4SSR/ACL4SSR/master/Clash/Ruleset/OpenAi.list
ruleset=🎮 Game,https://raw.githubusercontent.com/blackmatrix7/ios_rule_script/master/rule/Clash/Game/Game.list
ruleset=🌏 DiscoveryPlus,https://raw.githubusercontent.com/blackmatrix7/ios_rule_script/master/rule/Clash/DiscoveryPlus/DiscoveryPlus.list
ruleset=📹 油管视频,https://raw.githubusercontent.com/ACL4SSR/ACL4SSR/master/Clash/Ruleset/YouTube.list
ruleset=🎥 奈飞视频,https://raw.githubusercontent.com/ACL4SSR/ACL4SSR/master/Clash/Ruleset/Netflix.list
ruleset=📺 巴哈姆特,https://raw.githubusercontent.com/ACL4SSR/ACL4SSR/master/Clash/Ruleset/Bahamut.list
ruleset=📺 哔哩哔哩,https://raw.githubusercontent.com/ACL4SSR/ACL4SSR/master/Clash/Ruleset/BilibiliHMT.list
ruleset=📺 哔哩哔哩,https://raw.githubusercontent.com/ACL4SSR/ACL4SSR/master/Clash/Ruleset/Bilibili.list
ruleset=🌏 国内媒体,https://raw.githubusercontent.com/ACL4SSR/ACL4SSR/master/Clash/ChinaMedia.list
ruleset=🌍 国外媒体,https://raw.githubusercontent.com/ACL4SSR/ACL4SSR/master/Clash/ProxyMedia.list
ruleset=🚀 节点选择,https://raw.githubusercontent.com/bujinbufa/clash-/main/rule/Clash/ProxyGFWlist.list
;ruleset=🎯 全球直连,https://raw.githubusercontent.com/ACL4SSR/ACL4SSR/master/Clash/ChinaIp.list
ruleset=🎯 全球直连,https://raw.githubusercontent.com/ACL4SSR/ACL4SSR/master/Clash/ChinaDomain.list
ruleset=🎯 全球直连,https://raw.githubusercontent.com/ACL4SSR/ACL4SSR/master/Clash/ChinaCompanyIp.list
ruleset=🎯 全球直连,https://raw.githubusercontent.com/ACL4SSR/ACL4SSR/master/Clash/Download.list
;ruleset=🎯 全球直连,[]GEOIP,LAN
ruleset=🎯 全球直连,[]GEOIP,CN
ruleset=🐟 漏网之鱼,[]FINAL
;设置规则标志位

;设置分组标志位
custom_proxy_group=🚀 节点选择`select`[]🇭🇰 香港节点`[]🇨🇳 台湾节点`[]🇸🇬 狮城节点`[]🇯🇵 日本节点`[]🇺🇲 美国节点`[]🇰🇷 韩国节点`[]🚀 手动切换`[]其他节点`[]IPLC`[]DIRECT
custom_proxy_group=🚀 手动切换`select`.*
custom_proxy_group=📲 电报消息`select`[]🚀 节点选择`[]🇸🇬 狮城节点`[]🇭🇰 香港节点`[]🇨🇳 台湾节点`[]🇯🇵 日本节点`[]🇺🇲 美国节点`[]🇰🇷 韩国节点`[]🚀 手动切换`[]其他节点`[]IPLC`[]DIRECT
custom_proxy_group=💳 PayPal`select`[]🚀 节点选择`[]🇸🇬 狮城节点`[]🇭🇰 香港节点`[]🇨🇳 台湾节点`[]🇯🇵 日本节点`[]🇺🇲 美国节点`[]🇰🇷 韩国节点`[]🚀 手动切换`[]其他节点`[]IPLC`[]🎮 游戏节点`[]DIRECT
custom_proxy_group=💬 Copilot`select`[]🚀 节点选择`[]🇸🇬 狮城节点`[]🇭🇰 香港节点`[]🇨🇳 台湾节点`[]🇯🇵 日本节点`[]🇺🇲 美国节点`[]🇰🇷 韩国节点`[]🚀 手动切换`[]其他节点`[]IPLC`[]DIRECT
custom_proxy_group=💬 OpenAi`select`[]🚀 节点选择`[]🇸🇬 狮城节点`[]🇭🇰 香港节点`[]🇨🇳 台湾节点`[]🇯🇵 日本节点`[]🇺🇲 美国节点`[]🇰🇷 韩国节点`[]🚀 手动切换`[]其他节点`[]IPLC`[]DIRECT
custom_proxy_group=🌏 DiscoveryPlus`select`[]🚀 节点选择`[]🇸🇬 狮城节点`[]🇭🇰 香港节点`[]🇨🇳 台湾节点`[]🇯🇵 日本节点`[]🇺🇲 美国节点`[]🇰🇷 韩国节点`[]🚀 手动切换`[]其他节点`[]IPLC`[]DIRECT
custom_proxy_group=📹 油管视频`select`[]🚀 节点选择`[]🇸🇬 狮城节点`[]🇭🇰 香港节点`[]🇨🇳 台湾节点`[]🇯🇵 日本节点`[]🇺🇲 美国节点`[]🇰🇷 韩国节点`[]🚀 手动切换`[]其他节点`[]IPLC`[]DIRECT
custom_proxy_group=🎥 奈飞视频`select`[]🎥 奈飞节点`[]🚀 节点选择`[]🇸🇬 狮城节点`[]🇭🇰 香港节点`[]🇨🇳 台湾节点`[]🇯🇵 日本节点`[]🇺🇲 美国节点`[]🇰🇷 韩国节点`[]🚀 手动切换`[]其他节点`[]IPLC`[]DIRECT
custom_proxy_group=📺 巴哈姆特`select`[]🇨🇳 台湾节点`[]🚀 节点选择`[]🚀 手动切换`[]IPLC`[]DIRECT
custom_proxy_group=📺 哔哩哔哩`select`[]🎯 全球直连`[]🇨🇳 台湾节点`[]🇭🇰 香港节点`[]IPLC
custom_proxy_group=🌍 国外媒体`select`[]🚀 节点选择`[]🇭🇰 香港节点`[]🇨🇳 台湾节点`[]🇸🇬 狮城节点`[]🇯🇵 日本节点`[]🇺🇲 美国节点`[]🇰🇷 韩国节点`[]🚀 手动切换`[]其他节点`[]IPLC`[]DIRECT
custom_proxy_group=🌏 国内媒体`select`[]DIRECT`[]🇭🇰 香港节点`[]🇨🇳 台湾节点`[]🇸🇬 狮城节点`[]🇯🇵 日本节点`[]🚀 手动切换`[]IPLC
custom_proxy_group=Ⓜ️ 微软`select`[]DIRECT`[]🚀 节点选择`[]🇺🇲 美国节点`[]🇭🇰 香港节点`[]🇨🇳 台湾节点`[]🇸🇬 狮城节点`[]🇯🇵 日本节点`[]🇰🇷 韩国节点`[]🚀 手动切换`[]其他节点`[]IPLC
custom_proxy_group=🎮 Game`select`[]DIRECT`[]🎮 游戏节点`[]其他节点`[]IPLC`[]🇸🇬 狮城节点`[]🇭🇰 香港节点`[]🇨🇳 台湾节点`[]🇯🇵 日本节点`[]🇺🇲 美国节点`[]🇰🇷 韩国节点`[]🚀 手动切换
custom_proxy_group=🎯 全球直连`select`[]DIRECT`[]🚀 节点选择
custom_proxy_group=🐟 漏网之鱼`select`[]🚀 节点选择`[]DIRECT`[]🇭🇰 香港节点`[]🇨🇳 台湾节点`[]🇸🇬 狮城节点`[]🇯🇵 日本节点`[]🇺🇲 美国节点`[]🇰🇷 韩国节点`[]🚀 手动切换
custom_proxy_group=🇭🇰 香港节点`select`(港|HK|Hong Kong|🇭🇰|HongKong)
custom_proxy_group=🇯🇵 日本节点`select`(日本|川日|东京|大阪|泉日|埼玉|沪日|深日|JP|Japan)
custom_proxy_group=🇺🇲 美国节点`select`(美|波特兰|达拉斯|俄勒冈|凤凰城|费利蒙|硅谷|拉斯维加斯|洛杉矶|圣何塞|圣克拉拉|西雅图|芝加哥|US|United States)
custom_proxy_group=🇨🇳 台湾节点`select`(台|新北|彰化|TW|Taiwan)
custom_proxy_group=🇸🇬 狮城节点`select`(新加坡|坡|狮城|SG|Singapore)
custom_proxy_group=🇰🇷 韩国节点`select`(KR|Korea|KOR|首尔|韩|韓)
custom_proxy_group=其他节点`select`(?=.*(Base))^((?!(IPLC|Plus|🇭🇰|🇯🇵|🇺🇲|🇨🇳|🇸🇬|🇰🇷)).)*$
custom_proxy_group=IPLC`select`^.*IPLC.*$
custom_proxy_group=🎮 游戏节点`select`^.*Game.*$
custom_proxy_group=🎥 奈飞节点`select`(NF|奈飞|解锁|Netflix|NETFLIX|Media)`[]🇭🇰 香港节点`[]🇨🇳 台湾节点`[]🇸🇬 狮城节点`[]🇯🇵 日本节点`[]🇺🇲 美国节点`[]🇰🇷 韩国节点`[]其他节点`[]IPLC`.*
;设置分组标志位

enable_rule_generator=true
overwrite_original_rules=true

;clash_rule_base=https://raw.githubusercontent.com/ACL4SSR/ACL4SSR/master/Clash/GeneralClashConfig.yml

;luck
