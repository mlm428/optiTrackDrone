
(cl:in-package :asdf)

(defsystem "natnet_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "MarkerList" :depends-on ("_package_MarkerList"))
    (:file "_package_MarkerList" :depends-on ("_package"))
  ))