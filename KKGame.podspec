#
#  Be sure to run `pod spec lint KKObserver.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|


  s.name         = "KKGame"
  s.version      = "1.0.0"
  s.summary      = "小游戏框架"
  s.description  = "小游戏框架, iOS/Android"

  s.homepage     = "https://github.com/hailongz/game"
  s.license      = "MIT"
  s.author       = { "zhang hailong" => "hailongz@qq.com" }
  s.platform     = :ios, "8.0"
  s.source       = { :git => "https://github.com/hailongz/game.git", :tag => "#{s.version}" }

  s.vendored_frameworks = 'KKGame.framework'
  s.requires_arc = true

end