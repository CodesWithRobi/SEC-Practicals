# OS-Linux-commands-Shell-scripting
Operating systems Lab exercise
# Linux commands-Shell scripting
Linux commands-Shell scripting

# AIM:
To practice Linux Commands and Shell Scripting

# DESIGN STEPS:

### Step 1:

Navigate to any Linux environment installed on the system or installed inside a virtual environment like virtual box/vmware or online linux JSLinux (https://bellard.org/jslinux/vm.html?url=alpine-x86.cfg&mem=192) or docker.

### Step 2:

Execute the following commands

### Step 3:


# COMMANDS:
### Create the following files file1, file2 as follows:
cat > file1
```
chanchal singhvi
c.k. shukla
s.n. dasgupta
sumit chakrobarty
^d
```
cat > file2
```
anil aggarwal
barun sengupta
c.k. shukla
lalit chowdury
s.n. dasgupta
^d
```
### Display the content of the files
cat < file1

```
chanchal singhvi
c.k. shukla
s.n. dasgupta
sumit chakrobarty
```


cat < file2

```
anil aggarwal
barun sengupta
c.k. shukla
lalit chowdury
s.n. dasgupta
```

# Comparing Files
cmp file1 file2

```
file1 file2 differ: byte 1, line 1
``` 
comm file1 file2

```
        anil aggarwal
        barun sengupta
chanchal singhvi
                c.k. shukla
        lalit chowdury
                s.n. dasgupta
sumit chakrobarty
``` 

 
diff file1 file2

```
1c1,2
< chanchal singhvi
---
> anil aggarwal
> barun sengupta
2a4
> lalit chowdury
4d5
< sumit chakrobarty
``` 

#Filters

### Create the following files file11, file22 as follows:

cat > file11
```
Hello world
This is my world
^d
```
cat > file22
```
1001 | Ram | 10000 | HR
1002 | tom |  5000 | Admin
1003 | Joe |  7000 | Developer
^d
```


cut -c1-3 file11

```
Hel
Thi
``` 


cut -d "|" -f 1 file22

```
1001 
1002 
1003 
``` 

cut -d "|" -f 2 file22

```
 Ram 
 tom 
 Joe 
``` 

cat > newfile 
```
Hello world
hello world
```
 
cat < newfile 
```
Hello world
hello world
^d
```
grep Hello newfile 

```
Hello world
``` 

grep hello newfile 

```
hello world
``` 

grep -v hello newfile 

```
hello world
``` 

cat newfile | grep -i "hello"

```
Hello world
hello world
``` 

cat newfile | grep -i -c "hello"

```
2
``` 

grep -R ubuntu /etc

```
/etc/systemd/timesyncd.conf:#FallbackNTP=ntp.ubuntu.com
/etc/systemd/system/snapd.mounts.target.wants/snap-ubuntu\x2ddesktop\x2dinstaller-1284.mount:Description=Mount unit for ubuntu-desktop-installer, revision 1284
/etc/systemd/system/snapd.mounts.target.wants/snap-ubuntu\x2ddesktop\x2dinstaller-1284.mount:What=/var/lib/snapd/snaps/ubuntu-desktop-installer_1284.snap
/etc/systemd/system/snapd.mounts.target.wants/snap-ubuntu\x2ddesktop\x2dinstaller-1284.mount:Where=/snap/ubuntu-desktop-installer/1284
/etc/systemd/system/snapd.mounts.target.wants/snap-ubuntu\x2ddesktop\x2dinstaller-1276.mount:Description=Mount unit for ubuntu-desktop-installer, revision 1276
/etc/systemd/system/snapd.mounts.target.wants/snap-ubuntu\x2ddesktop\x2dinstaller-1276.mount:What=/var/lib/snapd/snaps/ubuntu-desktop-installer_1276.snap
/etc/systemd/system/snapd.mounts.target.wants/snap-ubuntu\x2ddesktop\x2dinstaller-1276.mount:Where=/snap/ubuntu-desktop-installer/1276
/etc/systemd/system/multi-user.target.wants/snap-ubuntu\x2ddesktop\x2dinstaller-1284.mount:Description=Mount unit for ubuntu-desktop-installer, revision 1284
/etc/systemd/system/multi-user.target.wants/snap-ubuntu\x2ddesktop\x2dinstaller-1284.mount:What=/var/lib/snapd/snaps/ubuntu-desktop-installer_1284.snap
/etc/systemd/system/multi-user.target.wants/snap-ubuntu\x2ddesktop\x2dinstaller-1284.mount:Where=/snap/ubuntu-desktop-installer/1284
/etc/systemd/system/multi-user.target.wants/snap.ubuntu-desktop-installer.subiquity-server.service:Description=Service for snap application ubuntu-desktop-installer.subiquity-server
/etc/systemd/system/multi-user.target.wants/snap.ubuntu-desktop-installer.subiquity-server.service:Requires=snap-ubuntu\x2ddesktop\x2dinstaller-1284.mount
/etc/systemd/system/multi-user.target.wants/snap.ubuntu-desktop-installer.subiquity-server.service:After=snap-ubuntu\x2ddesktop\x2dinstaller-1284.mount network.target snapd.apparmor.service
/etc/systemd/system/multi-user.target.wants/snap.ubuntu-desktop-installer.subiquity-server.service:ExecStart=/usr/bin/snap run ubuntu-desktop-installer.subiquity-server
/etc/systemd/system/multi-user.target.wants/snap.ubuntu-desktop-installer.subiquity-server.service:SyslogIdentifier=ubuntu-desktop-installer.subiquity-server
/etc/systemd/system/multi-user.target.wants/snap.ubuntu-desktop-installer.subiquity-server.service:WorkingDirectory=/var/snap/ubuntu-desktop-installer/1284
/etc/systemd/system/multi-user.target.wants/ua-reboot-cmds.service:ConditionPathExists=/var/lib/ubuntu-advantage/marker-reboot-cmds-required
/etc/systemd/system/multi-user.target.wants/ua-reboot-cmds.service:ConditionPathExists=/var/lib/ubuntu-advantage/private/machine-token.json
/etc/systemd/system/multi-user.target.wants/ua-reboot-cmds.service:ExecStart=/usr/bin/python3 /usr/lib/ubuntu-advantage/reboot_cmds.py
/etc/systemd/system/multi-user.target.wants/ubuntu-advantage.service:# sudo systemctl stop ubuntu-advantage.service
/etc/systemd/system/multi-user.target.wants/ubuntu-advantage.service:# sudo systemctl disable ubuntu-advantage.service
/etc/systemd/system/multi-user.target.wants/ubuntu-advantage.service:Documentation=man:ubuntu-advantage https://ubuntu.com/advantage
/etc/systemd/system/multi-user.target.wants/ubuntu-advantage.service:After=network.target network-online.target systemd-networkd.service ua-auto-attach.service cloud-config.service ubuntu-advantage-cloud-id-shim.service
/etc/systemd/system/multi-user.target.wants/ubuntu-advantage.service:ConditionPathExists=!/var/lib/ubuntu-advantage/private/machine-token.json
/etc/systemd/system/multi-user.target.wants/ubuntu-advantage.service:ConditionPathExists=|/run/ubuntu-advantage/flags/auto-attach-failed
/etc/systemd/system/multi-user.target.wants/ubuntu-advantage.service:ExecStart=/usr/bin/python3 /usr/lib/ubuntu-advantage/daemon.py
/etc/systemd/system/multi-user.target.wants/ubuntu-advantage.service:WorkingDirectory=/var/lib/ubuntu-advantage/
/etc/systemd/system/multi-user.target.wants/snap-ubuntu\x2ddesktop\x2dinstaller-1276.mount:Description=Mount unit for ubuntu-desktop-installer, revision 1276
/etc/systemd/system/multi-user.target.wants/snap-ubuntu\x2ddesktop\x2dinstaller-1276.mount:What=/var/lib/snapd/snaps/ubuntu-desktop-installer_1276.snap
/etc/systemd/system/multi-user.target.wants/snap-ubuntu\x2ddesktop\x2dinstaller-1276.mount:Where=/snap/ubuntu-desktop-installer/1276
/etc/systemd/system/snap-ubuntu\x2ddesktop\x2dinstaller-1284.mount:Description=Mount unit for ubuntu-desktop-installer, revision 1284
/etc/systemd/system/snap-ubuntu\x2ddesktop\x2dinstaller-1284.mount:What=/var/lib/snapd/snaps/ubuntu-desktop-installer_1284.snap
/etc/systemd/system/snap-ubuntu\x2ddesktop\x2dinstaller-1284.mount:Where=/snap/ubuntu-desktop-installer/1284
/etc/systemd/system/timers.target.wants/ua-timer.timer:ConditionPathExists=/var/lib/ubuntu-advantage/private/machine-token.json
/etc/systemd/system/snap.ubuntu-desktop-installer.subiquity-server.service:Description=Service for snap application ubuntu-desktop-installer.subiquity-server
/etc/systemd/system/snap.ubuntu-desktop-installer.subiquity-server.service:Requires=snap-ubuntu\x2ddesktop\x2dinstaller-1284.mount
/etc/systemd/system/snap.ubuntu-desktop-installer.subiquity-server.service:After=snap-ubuntu\x2ddesktop\x2dinstaller-1284.mount network.target snapd.apparmor.service
/etc/systemd/system/snap.ubuntu-desktop-installer.subiquity-server.service:ExecStart=/usr/bin/snap run ubuntu-desktop-installer.subiquity-server
/etc/systemd/system/snap.ubuntu-desktop-installer.subiquity-server.service:SyslogIdentifier=ubuntu-desktop-installer.subiquity-server
/etc/systemd/system/snap.ubuntu-desktop-installer.subiquity-server.service:WorkingDirectory=/var/snap/ubuntu-desktop-installer/1284
/etc/systemd/system/snap-ubuntu\x2ddesktop\x2dinstaller-1276.mount:Description=Mount unit for ubuntu-desktop-installer, revision 1276
/etc/systemd/system/snap-ubuntu\x2ddesktop\x2dinstaller-1276.mount:What=/var/lib/snapd/snaps/ubuntu-desktop-installer_1276.snap
/etc/systemd/system/snap-ubuntu\x2ddesktop\x2dinstaller-1276.mount:Where=/snap/ubuntu-desktop-installer/1276
/etc/dpkg/origins/default:Vendor-URL: http://www.ubuntu.com/
/etc/dpkg/origins/default:Bugs: https://bugs.launchpad.net/ubuntu/+filebug
/etc/dpkg/origins/ubuntu:Vendor-URL: http://www.ubuntu.com/
/etc/dpkg/origins/ubuntu:Bugs: https://bugs.launchpad.net/ubuntu/+filebug
/etc/apparmor.d/abstractions/ubuntu-unity7-messaging:  include if exists <abstractions/ubuntu-unity7-messaging.d>
/etc/apparmor.d/abstractions/ubuntu-email:# Users of this abstraction need to include the ubuntu-helpers abstraction
/etc/apparmor.d/abstractions/ubuntu-email:#   include <abstractions/ubuntu-helpers>
/etc/apparmor.d/abstractions/ubuntu-email:  include if exists <abstractions/ubuntu-email.d>
/etc/apparmor.d/abstractions/ubuntu-console-email:# include <abstractions/ubuntu-gnome-terminal>
/etc/apparmor.d/abstractions/ubuntu-console-email:# Users of this abstraction need to include the ubuntu-helpers abstraction
/etc/apparmor.d/abstractions/ubuntu-console-email:#   include <abstractions/ubuntu-helpers>
/etc/apparmor.d/abstractions/ubuntu-console-email:  include if exists <abstractions/ubuntu-console-email.d>
/etc/apparmor.d/abstractions/ubuntu-media-players:# Users of this abstraction need to include the ubuntu-helpers abstraction
/etc/apparmor.d/abstractions/ubuntu-media-players:#   include <abstractions/ubuntu-helpers>
/etc/apparmor.d/abstractions/ubuntu-media-players:  include if exists <abstractions/ubuntu-media-players.d>
/etc/apparmor.d/abstractions/ubuntu-gnome-terminal:  include if exists <abstractions/ubuntu-gnome-terminal.d>
/etc/apparmor.d/abstractions/exo-open:#   # needed for ubuntu-* abstractions
/etc/apparmor.d/abstractions/exo-open:#   include <abstractions/ubuntu-helpers>
/etc/apparmor.d/abstractions/exo-open:#   include <abstractions/ubuntu-browsers>
/etc/apparmor.d/abstractions/exo-open:#   include <abstractions/ubuntu-email>
/etc/apparmor.d/abstractions/exo-open:  /usr/share/{xfce{,4},xubuntu}/applications/{,*.list} r,
/etc/apparmor.d/abstractions/xdg-open:#   # needed for ubuntu-* abstractions
/etc/apparmor.d/abstractions/xdg-open:#   include <abstractions/ubuntu-helpers>
/etc/apparmor.d/abstractions/xdg-open:#   include <abstractions/ubuntu-browsers>
/etc/apparmor.d/abstractions/xdg-open:#   include <abstractions/ubuntu-email>
/etc/apparmor.d/abstractions/ubuntu-bittorrent-clients:# Users of this abstraction need to include the ubuntu-helpers abstraction
/etc/apparmor.d/abstractions/ubuntu-bittorrent-clients:#   include <abstractions/ubuntu-helpers>
/etc/apparmor.d/abstractions/ubuntu-bittorrent-clients:  include if exists <abstractions/ubuntu-bittorrent-clients.d>
/etc/apparmor.d/abstractions/gio-open:#   # needed for ubuntu-* abstractions
/etc/apparmor.d/abstractions/gio-open:#   include <abstractions/ubuntu-helpers>
/etc/apparmor.d/abstractions/gio-open:#   include <abstractions/ubuntu-browsers>
/etc/apparmor.d/abstractions/gio-open:#   include <abstractions/ubuntu-email>
/etc/apparmor.d/abstractions/ubuntu-konsole:  include if exists <abstractions/ubuntu-konsole.d>
/etc/apparmor.d/abstractions/gvfs-open:#   # needed for ubuntu-* abstractions
/etc/apparmor.d/abstractions/gvfs-open:#   include <abstractions/ubuntu-helpers>
/etc/apparmor.d/abstractions/gvfs-open:#   include <abstractions/ubuntu-browsers>
/etc/apparmor.d/abstractions/gvfs-open:#   include <abstractions/ubuntu-email>
/etc/apparmor.d/abstractions/ubuntu-browsers.d/ubuntu-integration:# Users of this abstraction need to include the ubuntu-helpers abstraction
/etc/apparmor.d/abstractions/ubuntu-browsers.d/ubuntu-integration:#   include <abstractions/ubuntu-helpers>
/etc/apparmor.d/abstractions/ubuntu-browsers.d/ubuntu-integration:  # Kubuntu
/etc/apparmor.d/abstractions/ubuntu-browsers.d/mailto:  include <abstractions/ubuntu-email>
/etc/apparmor.d/abstractions/ubuntu-browsers.d/mailto:  include <abstractions/ubuntu-console-email>
/etc/apparmor.d/abstractions/ubuntu-browsers.d/mailto:  include <abstractions/ubuntu-gnome-terminal>
/etc/apparmor.d/abstractions/ubuntu-browsers.d/productivity:# Users of this abstraction need to include the ubuntu-helpers abstraction
/etc/apparmor.d/abstractions/ubuntu-browsers.d/productivity:#   include <abstractions/ubuntu-helpers>
/etc/apparmor.d/abstractions/ubuntu-browsers.d/chromium-browser:include <abstractions/ubuntu-browsers.d/plugins-common>
/etc/apparmor.d/abstractions/ubuntu-browsers.d/chromium-browser:include <abstractions/ubuntu-browsers.d/mailto>
/etc/apparmor.d/abstractions/ubuntu-browsers.d/chromium-browser:include <abstractions/ubuntu-browsers.d/multimedia>
/etc/apparmor.d/abstractions/ubuntu-browsers.d/chromium-browser:include <abstractions/ubuntu-browsers.d/productivity>
/etc/apparmor.d/abstractions/ubuntu-browsers.d/chromium-browser:include <abstractions/ubuntu-browsers.d/java>
/etc/apparmor.d/abstractions/ubuntu-browsers.d/chromium-browser:include <abstractions/ubuntu-browsers.d/kde>
/etc/apparmor.d/abstractions/ubuntu-browsers.d/chromium-browser:include <abstractions/ubuntu-browsers.d/text-editors>
/etc/apparmor.d/abstractions/ubuntu-browsers.d/chromium-browser:include <abstractions/ubuntu-browsers.d/ubuntu-integration>
/etc/apparmor.d/abstractions/ubuntu-browsers.d/chromium-browser:include <abstractions/ubuntu-browsers.d/user-files>
/etc/apparmor.d/abstractions/ubuntu-browsers.d/multimedia:# Users of this abstraction need to include the ubuntu-helpers abstraction
/etc/apparmor.d/abstractions/ubuntu-browsers.d/multimedia:#   include <abstractions/ubuntu-helpers>
/etc/apparmor.d/abstractions/ubuntu-browsers.d/multimedia:  include <abstractions/ubuntu-media-players>
/etc/apparmor.d/abstractions/ubuntu-browsers.d/multimedia:  include <abstractions/ubuntu-bittorrent-clients>
/etc/apparmor.d/abstractions/ubuntu-browsers.d/multimedia:  include <abstractions/ubuntu-feed-readers>
/etc/apparmor.d/abstractions/ubuntu-browsers.d/text-editors:# Users of this abstraction need to include the ubuntu-helpers abstraction
/etc/apparmor.d/abstractions/ubuntu-browsers.d/text-editors:#   include <abstractions/ubuntu-helpers>
/etc/apparmor.d/abstractions/ubuntu-browsers.d/plugins-common:  # Since all the ubuntu-browsers.d abstractions need this, just include it
/etc/apparmor.d/abstractions/ubuntu-browsers.d/plugins-common:  include <abstractions/ubuntu-helpers>
/etc/apparmor.d/abstractions/ubuntu-browsers.d/kde:# Users of this abstraction need to include the ubuntu-helpers abstraction
/etc/apparmor.d/abstractions/ubuntu-browsers.d/kde:#   include <abstractions/ubuntu-helpers>
/etc/apparmor.d/abstractions/ubuntu-unity7-base:  include if exists <abstractions/ubuntu-unity7-base.d>
/etc/apparmor.d/abstractions/ubuntu-xterm:  include if exists <abstractions/ubuntu-xterm.d>
/etc/apparmor.d/abstractions/ubuntu-unity7-launcher:  include if exists <abstractions/ubuntu-unity7-launcher.d>
/etc/apparmor.d/abstractions/ubuntu-browsers:# Users of this abstraction need to include the ubuntu-helpers abstraction
/etc/apparmor.d/abstractions/ubuntu-browsers:#   include <abstractions/ubuntu-helpers>
/etc/apparmor.d/abstractions/kde-open5:#   # needed for ubuntu-* abstractions
/etc/apparmor.d/abstractions/kde-open5:#   include <abstractions/ubuntu-helpers>
/etc/apparmor.d/abstractions/kde-open5:#   include <abstractions/ubuntu-browsers>
/etc/apparmor.d/abstractions/kde-open5:#   include <abstractions/ubuntu-email>
/etc/apparmor.d/abstractions/kde-open5:  # see: https://lists.ubuntu.com/archives/apparmor/2019-January/011925.html
/etc/apparmor.d/abstractions/ubuntu-feed-readers:# Users of this abstraction need to include the ubuntu-helpers abstraction
/etc/apparmor.d/abstractions/ubuntu-feed-readers:#   include <abstractions/ubuntu-helpers>
/etc/apparmor.d/abstractions/ubuntu-feed-readers:  include if exists <abstractions/ubuntu-feed-readers.d>
/etc/apparmor.d/abstractions/kde:/usr/share/kubuntu-default-settings/kf5-settings/* r,
/etc/apparmor.d/abstractions/ubuntu-console-browsers:# include <abstractions/ubuntu-gnome-terminal>
/etc/apparmor.d/abstractions/ubuntu-console-browsers:# Users of this abstraction need to include the ubuntu-helpers abstraction
/etc/apparmor.d/abstractions/ubuntu-console-browsers:#   include <abstractions/ubuntu-helpers>
/etc/apparmor.d/abstractions/ubuntu-console-browsers:  include if exists <abstractions/ubuntu-console-browsers.d>
/etc/apport/crashdb.conf:default = 'ubuntu'
/etc/apport/crashdb.conf:        dcd = open('/var/lib/ubuntu_dist_channel').read()
/etc/apport/crashdb.conf:    'ubuntu': {
/etc/apport/crashdb.conf:        'bug_pattern_url': 'http://people.canonical.com/~ubuntu-archive/bugpatterns/bugpatterns.xml',
/etc/apport/crashdb.conf:        'dupdb_url': 'http://people.canonical.com/~ubuntu-archive/apport-duplicates',
/etc/apport/crashdb.conf:        'distro': 'ubuntu',
/etc/apport/crashdb.conf:        'bug_pattern_url': 'http://people.canonical.com/~ubuntu-archive/bugpatterns/bugpatterns.xml',
/etc/rcS.d/S01apparmor:#  Kees Cook <kees@ubuntu.com>
/etc/dbus-1/system.d/com.ubuntu.SoftwareProperties.conf:    <allow own="com.ubuntu.SoftwareProperties"/>
/etc/dbus-1/system.d/com.ubuntu.SoftwareProperties.conf:    <allow send_destination="com.ubuntu.SoftwareProperties"
/etc/dbus-1/system.d/com.ubuntu.SoftwareProperties.conf:           send_interface="com.ubuntu.SoftwareProperties"/>
/etc/dbus-1/system.d/com.ubuntu.SoftwareProperties.conf:    <allow send_destination="com.ubuntu.SoftwareProperties"
/etc/dbus-1/system.d/com.ubuntu.SoftwareProperties.conf:    <allow send_destination="com.ubuntu.DeviceDriver"
grep: /etc/polkit-1/localauthority: Permission denied
/etc/apt/sources.list:# See http://help.ubuntu.com/community/UpgradeNotes for how to upgrade to
/etc/apt/sources.list:deb http://archive.ubuntu.com/ubuntu/ jammy main restricted
/etc/apt/sources.list:# deb-src http://archive.ubuntu.com/ubuntu/ jammy main restricted
/etc/apt/sources.list:deb http://archive.ubuntu.com/ubuntu/ jammy-updates main restricted
/etc/apt/sources.list:# deb-src http://archive.ubuntu.com/ubuntu/ jammy-updates main restricted
/etc/apt/sources.list:deb http://archive.ubuntu.com/ubuntu/ jammy universe
/etc/apt/sources.list:# deb-src http://archive.ubuntu.com/ubuntu/ jammy universe
/etc/apt/sources.list:deb http://archive.ubuntu.com/ubuntu/ jammy-updates universe
/etc/apt/sources.list:# deb-src http://archive.ubuntu.com/ubuntu/ jammy-updates universe
/etc/apt/sources.list:deb http://archive.ubuntu.com/ubuntu/ jammy multiverse
/etc/apt/sources.list:# deb-src http://archive.ubuntu.com/ubuntu/ jammy multiverse
/etc/apt/sources.list:deb http://archive.ubuntu.com/ubuntu/ jammy-updates multiverse
/etc/apt/sources.list:# deb-src http://archive.ubuntu.com/ubuntu/ jammy-updates multiverse
/etc/apt/sources.list:deb http://archive.ubuntu.com/ubuntu/ jammy-backports main restricted universe multiverse
/etc/apt/sources.list:# deb-src http://archive.ubuntu.com/ubuntu/ jammy-backports main restricted universe multiverse
/etc/apt/sources.list:deb http://security.ubuntu.com/ubuntu/ jammy-security main restricted
/etc/apt/sources.list:# deb-src http://security.ubuntu.com/ubuntu/ jammy-security main restricted
/etc/apt/sources.list:deb http://security.ubuntu.com/ubuntu/ jammy-security universe
/etc/apt/sources.list:# deb-src http://security.ubuntu.com/ubuntu/ jammy-security universe
/etc/apt/sources.list:deb http://security.ubuntu.com/ubuntu/ jammy-security multiverse
/etc/apt/sources.list:# deb-src http://security.ubuntu.com/ubuntu/ jammy-security multiverse
/etc/apt/apt.conf.d/20apt-esm-hook.conf:        "[ ! -f /usr/lib/ubuntu-advantage/apt-esm-json-hook ] || /usr/lib/ubuntu-advantage/apt-esm-json-hook || true";
/etc/apt/preferences.d/ubuntu-pro-esm-apps:# This file is used by Ubuntu Pro and supplied by the ubuntu-advantage-tools
/etc/apt/preferences.d/ubuntu-pro-esm-infra:# This file is used by Ubuntu Pro and supplied by the ubuntu-advantage-tools
grep: /etc/apt/trusted.gpg.d/ubuntu-keyring-2012-cdimage.gpg: binary file matches
grep: /etc/apt/trusted.gpg.d/ubuntu-keyring-2018-archive.gpg: binary file matches
/etc/os-release:ID=ubuntu
/etc/os-release:HOME_URL="https://www.ubuntu.com/"
/etc/os-release:SUPPORT_URL="https://help.ubuntu.com/"
/etc/os-release:BUG_REPORT_URL="https://bugs.launchpad.net/ubuntu/"
/etc/os-release:PRIVACY_POLICY_URL="https://www.ubuntu.com/legal/terms-and-policies/privacy-policy"
/etc/update-manager/meta-release:URI = https://changelogs.ubuntu.com/meta-release
/etc/update-manager/meta-release:URI_LTS = https://changelogs.ubuntu.com/meta-release-lts
/etc/update-manager/release-upgrades.d/ubuntu-advantage-upgrades.cfg:PostInstallScripts=./xorg_fix_proprietary.py, /usr/lib/ubuntu-advantage/upgrade_lts_contract.py
grep: /etc/sudoers: Permission denied
grep: /etc/shadow-: Permission denied
grep: /etc/sudoers.d/README: Permission denied
/etc/init.d/apparmor:#  Kees Cook <kees@ubuntu.com>
/etc/sysctl.d/10-ptrace.conf:# https://wiki.ubuntu.com/SecurityTeam/Roadmap/KernelHardening#ptrace
/etc/mtab:snapfuse /snap/ubuntu-desktop-installer/1276 fuse.snapfuse ro,nodev,relatime,user_id=0,group_id=0,allow_other 0 0
/etc/mtab:snapfuse /snap/ubuntu-desktop-installer/1284 fuse.snapfuse ro,nodev,relatime,user_id=0,group_id=0,allow_other 0 0
grep: /etc/ld.so.cache: binary file matches
grep: /etc/shadow: Permission denied
/etc/PackageKit/Vendor.conf:DefaultUrl=https://help.ubuntu.com/community/Repositories/
grep: /etc/security/opasswd: Permission denied
grep: /etc/ssl/private: Permission denied
/etc/depmod.d/ubuntu.conf:search updates ubuntu built-in
grep: /etc/ufw/after6.rules: Permission denied
grep: /etc/ufw/after.rules: Permission denied
grep: /etc/ufw/before.rules: Permission denied
grep: /etc/ufw/before.init: Permission denied
grep: /etc/ufw/user6.rules: Permission denied
grep: /etc/ufw/user.rules: Permission denied
grep: /etc/ufw/after.init: Permission denied
grep: /etc/ufw/before6.rules: Permission denied
/etc/default/motd-news:# Canonical runs a service at motd.ubuntu.com, and you
/etc/default/motd-news:URLS="https://motd.ubuntu.com"
grep: /etc/gshadow-: Permission denied
grep: /etc/gshadow: Permission denied
grep: /etc/.pwd.lock: Permission denied
/etc/update-motd.d/10-help-text:printf " * Documentation:  https://help.ubuntu.com\n"
/etc/update-motd.d/10-help-text:printf " * Support:        https://ubuntu.com/advantage\n"
/etc/update-motd.d/91-release-upgrade:if [ -x /usr/lib/ubuntu-release-upgrader/release-upgrade-motd ]; then
/etc/update-motd.d/91-release-upgrade:    exec /usr/lib/ubuntu-release-upgrader/release-upgrade-motd
/etc/update-motd.d/91-contract-ua-esm-status:contract_status_stamp="/var/lib/ubuntu-advantage/messages/motd-contract-status"
/etc/update-motd.d/91-contract-ua-esm-status:auto_attach_stamp="/var/lib/ubuntu-advantage/messages/motd-auto-attach-status"
/etc/update-motd.d/50-motd-news:[ -n "$URLS" ] || URLS="https://motd.ubuntu.com"
/etc/update-motd.d/50-motd-news:                https://motd.ubuntu.com)
grep: /etc/alternatives/cc: binary file matches
grep: /etc/alternatives/c++: binary file matches
grep: /etc/alternatives/rlogin: binary file matches
grep: /etc/alternatives/cpp: binary file matches
grep: /etc/alternatives/rsh: binary file matches
grep: /etc/alternatives/nc: binary file matches
/etc/alternatives/text.plymouth:Description=Text mode theme based on ubuntu-logo theme
/etc/alternatives/text.plymouth:ModuleName=ubuntu-text
/etc/alternatives/text.plymouth:[ubuntu-text]
grep: /etc/alternatives/netcat: binary file matches
/etc/logrotate.d/ubuntu-advantage-tools:# of /var/log/ubuntu-advantage*.log files.
/etc/logrotate.d/ubuntu-advantage-tools:/var/log/ubuntu-advantage*.log {
/etc/bash_completion.d/apport_completion:# apport-bug ubuntu-bug completion
/etc/bash_completion.d/apport_completion:    ubuntu-bug | apport-bug)
/etc/bash_completion.d/apport_completion:complete -F _apport-bug -o filenames -o dirnames ubuntu-bug
``` 

grep -w -n world newfile   
## OUTPUT
```
1:Hello world
2:hello world
```


cat < newfile 
```
Hello world
hello world
Linux is world number 1
Unix is predecessor
Linux is best in this World
^d
```

cat > newfile
```
Hello world
hello world
Linux is world number 1
Unix is predecessor
Linux is best in this World
^d
 ```
egrep -w 'Hello|hello' newfile 
## OUTPUT
```
Hello world
hello world
```



egrep -w '(H|h)ello' newfile 
## OUTPUT
```
Hello world
hello world
```



egrep -w '(H|h)ell[a-z]' newfile 
## OUTPUT
```
Hello world
hello world
```




egrep '(^hello)' newfile 
## OUTPUT
```
hello world
```


egrep '(world$)' newfile 
## OUTPUT
```
Hello world
hello world
```



egrep '(World$)' newfile 
## OUTPUT
```
Linux is best in this World
```


egrep '((W|w)orld$)' newfile 
## OUTPUT
```
Hello world
hello world
Linux is best in this World
```



egrep '[1-9]' newfile 
## OUTPUT
```
Linux is world number 1
```



egrep 'Linux.*world' newfile 
## OUTPUT
```
Linux is world number 1
```


egrep 'Linux.*World' newfile 
## OUTPUT
```
Linux is best in this World
```



egrep l{2} newfile
## OUTPUT
```
Hello world
hello world
```




egrep 's{1,2}' newfile
## OUTPUT 
```
Linux is world number 1
Unix is predecessor
Linux is best in this World
```


cat > file23
```
1001 | Ram | 10000 | HR
1001 | Ram | 10000 | HR
1002 | tom |  5000 | Admin
1003 | Joe |  7000 | Developer
1005 | Sam |  5000 | HR
1004 | Sit |  7000 | Dev
1003 | Joe |  7000 | Developer
1001 | Ram | 10000 | HR
^d
```


sed -n -e '3p' file23
## OUTPUT
```
1002 | tom |  5000 | Admin
```



sed -n -e '$p' file23
## OUTPUT
```
1001 | Ram | 10000 | HR
```



sed  -e 's/Ram/Sita/' file23
## OUTPUT
```
1001 | Sita | 10000 | HR
1001 | Sita | 10000 | HR
1002 | tom |  5000 | Admin
1003 | Joe |  7000 | Developer
1005 | Sam |  5000 | HR
1004 | Sit |  7000 | Dev
1003 | Joe |  7000 | Developer
1001 | Sita | 10000 | HR
```



sed  -e '2s/Ram/Sita/' file23
## OUTPUT
```
1001 | Ram | 10000 | HR
1001 | Sita | 10000 | HR
1002 | tom |  5000 | Admin
1003 | Joe |  7000 | Developer
1005 | Sam |  5000 | HR
1004 | Sit |  7000 | Dev
1003 | Joe |  7000 | Developer
1001 | Ram | 10000 | HR
```




sed  '/tom/s/5000/6000/' file23
## OUTPUT
```
1001 | Ram | 10000 | HR
1001 | Ram | 10000 | HR
1002 | tom |  6000 | Admin
1003 | Joe |  7000 | Developer
1005 | Sam |  5000 | HR
1004 | Sit |  7000 | Dev
1003 | Joe |  7000 | Developer
1001 | Ram | 10000 | HR
```




sed -n -e '1,5p' file23
## OUTPUT
```
1001 | Ram | 10000 | HR
1001 | Ram | 10000 | HR
1002 | tom |  5000 | Admin
1003 | Joe |  7000 | Developer
1005 | Sam |  5000 | HR
```



sed -n -e '2,/Joe/p' file23
## OUTPUT
```
1001 | Ram | 10000 | HR
1002 | tom |  5000 | Admin
1003 | Joe |  7000 | Developer
```




sed -n -e '/tom/,/Joe/p' file23
## OUTPUT
```
1002 | tom |  5000 | Admin
1003 | Joe |  7000 | Developer
```



seq 10 
## OUTPUT
```
1
2
3
4
5
6
7
8
9
10
```



seq 10 | sed -n '4,6p'
## OUTPUT
```
4
5
6
```




seq 10 | sed -n '2,4p'
## OUTPUT
```
2
3
4
```



seq 3 | sed '2a hello'
## OUTPUT
```
1
2
hello
3
```



seq 2 | sed '2i hello'
## OUTPUT
```
1
hello
2
```


seq 10 | sed '2,9c hello'
## OUTPUT
```
1
hello
10
```



sed -n '2,4{s/^/$/;p}' file23
## OUTPUT
```
$1001 | Ram | 10000 | HR
$1002 | tom |  5000 | Admin
$1003 | Joe |  7000 | Developer
```




sed -n '2,4{s/$/*/;p}' file23
## OUTPUT
```

1001 | Ram | 10000 | HR*
1002 | tom |  5000 | Admin*
1003 | Joe |  7000 | Developer*

```


#Sorting File content
cat > file21
```
1001 | Ram | 10000 | HR
1002 | tom |  5000 | Admin
1003 | Joe |  7000 | Developer
1005 | Sam |  5000 | HR
1004 | Sit |  7000 | Dev
``` 
sort file21
## OUTPUT
```
1001 | Ram | 10000 | HR
1002 | tom |  5000 | Admin
1003 | Joe |  7000 | Developer
1004 | Sit |  7000 | Dev
1005 | Sam |  5000 | HR
```


cat > file22
```
1001 | Ram | 10000 | HR
1001 | Ram | 10000 | HR
1002 | tom |  5000 | Admin
1003 | Joe |  7000 | Developer
1005 | Sam |  5000 | HR
1004 | Sit |  7000 | Dev
``` 
uniq file22
## OUTPUT
```
1001 | Ram | 10000 | HR
1002 | tom |  5000 | Admin
1003 | Joe |  7000 | Developer
1005 | Sam |  5000 | HR
1004 | Sit |  7000 | Dev
```



#Using tr command

cat file23 | tr [:lower:] [:upper:]
 ## OUTPUT
 ```
1001 | RAM | 10000 | HR
1001 | RAM | 10000 | HR
1002 | TOM |  5000 | ADMIN
1003 | JOE |  7000 | DEVELOPER
1005 | SAM |  5000 | HR
1004 | SIT |  7000 | DEV
1003 | JOE |  7000 | DEVELOPER
1001 | RAM | 10000 | HR
```

cat < urllist.txt
```
www. yahoo. com
www. google. com
www. mrcet.... com
^d
 ```
cat > urllist.txt
```
www. yahoo. com
www. google. com
www. mrcet.... com
 ```
cat urllist.txt | tr -d ' '
 ## OUTPUT
 ```
www.yahoo.com
www.google.com
www.mrcet....com
```


 
cat urllist.txt | tr -d ' ' | tr -s '.'
## OUTPUT
```
www.yahoo.com
www.google.com
www.mrcet.com
```



#Backup commands
tar -cvf backup.tar *
## OUTPUT
```
bench.py
file21
file22
file23
hello.c
hello.js
newfile
readme.txt
urllist.txt
```



mkdir backupdir
 
mv backup.tar backupdir
 
tar -tvf backup.tar
## OUTPUT
```
tar: can't open 'backup.tar': No such file or directory
```

tar -xvf backup.tar
## OUTPUT
```
tar: can't open 'backup.tar': No such file or directory
```
gzip backup.tar

ls .gz
## OUTPUT
 
gunzip backup.tar.gz
## OUTPUT

 
# Shell Script
```
echo '#!/bin/sh' > my-script.sh
echo 'echo Hello World‘; exit 0 >> my-script.sh
```
chmod 755 my-script.sh
./my-script.sh
## OUTPUT
```
hello in this world
i cant stop
for this non stop movement
stop
```


 
cat << stop > herecheck.txt
```
hello in this world
i cant stop
for this non stop movement
stop
```

cat herecheck.txt
## OUTPUT
```
hello in this world
i cant stop
for this non stop movement
```

cat < scriptest.sh 
```bash
\#!/bin/sh
echo “File name is $0 ”
echo "File name is " `basename $0`
echo “First arg. is ” $1
echo “Second arg. is ” $2
echo “Third arg. is ” $3
echo “Fourth arg. is ” $4
echo 'The $@ is ' $@
echo 'The $\# is ' $1#
echo 'The $$ is ' $$
ps
^d
 ```

cat scriptest.sh 
```bash
\#!/bin/sh
echo “File name is $0 ”
echo "File name is " `basename $0`
echo “First arg. is ” $1
echo “Second arg. is ” $2
echo “Third arg. is ” $3
echo “Fourth arg. is ” $4
echo 'The $@ is ' $@
echo 'The $\# is ' $\#
echo 'The $$ is ' $$
ps
```
 
chmod 777 scriptest.sh
 
./scriptest.sh 1 2 3

## OUTPUT
```
./scriptest.sh: line 1: #!/bin/sh: No such file or directory
“File name is ./scriptest.sh ”
File name is  scriptest.sh
“First arg. is ” 1
“Second arg. is ” 2
“Third arg. is ” 3
“Fourth arg. is ”
The $@ is  1 2 3
The $\# is  1#
The $$ is  14337
    PID TTY          TIME CMD
  13614 pts/1    00:00:00 bash
  14337 pts/1    00:00:00 bash
  14340 pts/1    00:00:00 ps
```


 
ls file1
## OUTPUT
```
file1
```
echo $?
## OUTPUT
```
0
```

echo $?
## OUTPUT 
```
1
```
./one
bash: ./one: Permission denied

echo $?
## OUTPUT
```
0
```
abcd
 
echo $?
 ## OUTPUT
 ```
127
```


 
# mis-using string comparisons

cat < strcomp.sh 
```bash
\#!/bin/bash
val1=baseball
val2=hockey
if [ $val1 \> $val2 ]
then
echo "$val1 is greater than $val2"
else
echo "$val1 is less than $val2"
fi
^d
```

cat strcomp.sh 
```bash
\#!/bin/bash
val1=baseball
val2=hockey
if [ $val1 \> $val2 ]
then
echo "$val1 is greater than $val2"
else
echo "$val1 is less than $val2"
fi
```
## OUTPUT
```
baseball is less than hockey
```



chmod 755 strcomp.sh
 
./strcomp.sh 
## OUTPUT
```
You are the owner of the /etc/passwd file
```


# check file ownership
cat < psswdperm.sh 
```bash
\#!/bin/bash
if [ -O /etc/passwd ]
then
echo “You are the owner of the /etc/passwd file”
else
echo “Sorry, you are not the owner of the /etc/passwd file”
fi
^d
```

cat psswdperm.sh 
```bash
/#!/bin/bash
if [ -O /etc/passwd ]
then
echo “You are the owner of the /etc/passwd file”
else
echo “Sorry, you are not the owner of the /etc/passwd file”
fi
 ```
./psswdperm.sh
## OUTPUT
```
"/root The object exists, is it a file?"
"No,/root it is not a file!"
```

# check if with file location
cat>ifnested.sh 
```bash
\#!/bin/bash
if [ -e $HOME ]
then
echo “$HOME The object exists, is it a file?”
if [ -f $HOME ]
then
echo “Yes,$HOME it is a file!”
else
echo “No,$HOME it is not a file!”
if [ -f $HOME/.bash_history ]
then
echo “But $HOME/.bash_history is a file!”
fi
fi
else
echo “Sorry, the object does not exist”
fi
^d
```
cat ifnested.sh 
```
\#!/bin/bash
if [ -e $HOME ]
then
echo “$HOME The object exists, is it a file?”
if [ -f $HOME ]
then
echo “Yes,$HOME it is a file!”
else
echo “No,$HOME it is not a file!”
if [ -f $HOME/.bash_history ]
then
echo “But $HOME/.bash_history is a file!”
fi
fi
else
echo “Sorry, the object does not exist”
fi
```

./ifnested.sh 
## OUTPUT
```


“/home/sec The object exists, is it a file?”
“No,/home/sec it is not a file!”
“But /home/sec/.bash_history is a file!”
```




# using numeric test comparisons
cat > iftest.sh 
```bash
\#!/bin/bash
val1=10
val2=11
if [ $val1 -gt 5 ]
then
echo “The test value $val1 is greater than 5”
fi
if [ $val1 -eq $val2 ]
then
echo “The values are equal”
else
echo “The values are different”
fi
^d
```


cat iftest.sh 
```bash
\#!/bin/bash
val1=10
val2=11
if [ $val1 -gt 5 ]
then
echo “The test value $val1 is greater than 5”
fi
if [ $val1 -eq $val2 ]
then
echo “The values are equal”
else
echo “The values are different”
fi
```

$ chmod 755 iftest.sh
 
$ ./iftest.sh 
## OUTPUT
```
“The test value 10 is greater than 5”
“The values are different”
```


# check if a file
cat > ifnested.sh 
```bash
\#!/bin/bash
if [ -e $HOME ]
then
echo “$HOME The object exists, is it a file?”
if [ -f $HOME ]
then
echo “Yes,$HOME it is a file!”
else
echo “No,$HOME it is not a file!”
if [ -f $HOME/.bash_history ]
then
echo “But $HOME/.bash_history is a file!”
fi
fi
else
echo “Sorry, the object does not exist”
fi
^d
```

cat ifnested.sh 
```bash
\#!/bin/bash
if [ -e $HOME ]
then
echo “$HOME The object exists, is it a file?”
if [ -f $HOME ]
then
echo “Yes,$HOME it is a file!”
else
echo “No,$HOME it is not a file!”
if [ -f $HOME/.bash_history ]
then
echo “But $HOME/.bash_history is a file!”
fi
fi
else
echo “Sorry, the object does not exist”
fi
```

$ chmod 755 ifnested.sh
 
$ ./ifnested.sh 
## OUTPUT
```
“/home/sec The object exists, is it a file?”
“No,/home/sec it is not a file!”
“But /home/sec/.bash_history is a file!”
```

# looking for a possible value using elif
cat elifcheck.sh 
```bash
\#!/bin/bash
if [ $USER = Ram ]
then
echo "Welcome $USER"
echo "Please enjoy your visit"
elif [ $USER = Rahim ]
then
echo "Welcome $USER"
echo "Please enjoy your visit"
elif [ $USER = Robert ]
then
echo "Special testing account"
elif [ $USER = gganesh ]
then
echo "$USER, Do not forget to logout when you're done"
else
echo "Sorry, you are not allowed here"
fi
```

$ chmod 755 elifcheck.sh
 
$ ./elifcheck.sh 
## OUTPUT
```
./elifcheck.sh: line 1: #!/bin/bash: No such file or directory
Sorry, you are not allowed here
```



# testing compound comparisons
cat> ifcompound.sh 
```bash
\#!/bin/bash
if [ -d $HOME ] && [ -w $HOME ]
then
echo "The file exists and you can write to it"
else
echo "I cannot write to the file"
fi
```
$ chmod 755 ifcompound.sh
$ ./ifcompound.sh 
## OUTPUT
```
./ifcompound.sh: line 1: #!/bin/bash: No such file or directory
The file exists and you can write to it
```

# using the case command
cat >casecheck.sh 
```bash
case $USER in
Ram | Robert)
echo "Welcome, $USER"
echo "Please enjoy your visit";;
Rahim)
echo "Special testing account";;
gganesh)
echo "$USER, Do not forget to log off when you're done";;
*)
echo "Sorry, you are not allowed here";;
esac
```
$ chmod 755 casecheck.sh 
 
$ ./casecheck.sh 
## OUTPUT
```
Sorry, you are not allowed here
```
 
cat > whiletest
```bash
#!/bin/bash
#while command test
var1=10
while [ $var1 -gt 0 ]
do
echo $var1
var1=$[ $var1 - 1 ]
done
```
$ chmod 755 whiletest.sh
 
$ ./whiletest.sh
## OUTPUT
```
10
9
8
7
6
5
4
3
2
1
```

 
 
cat untiltest.sh 
```bash
\#using the until command
var1=100
until [ $var1 -eq 0 ]
do
echo $var1
var1=$[ $var1 - 25 ]
done
``` 
$ chmod 755 untiltest.sh
## OUTPUT
```
./untiltest.sh: line 1: #using: command not found
100
75
50
25
```

 
 
cat forin1.sh 
```bash
\#!/bin/bash
\#basic for command
for test in Alabama Alaska Arizona Arkansas California Colorado
do
echo The next state is $test
done
 ```
 
$ chmod 755 forin1.sh
$ ./forin1.sh
## OUTPUT
```
./forin1.sh: line 1: #!/bin/bash: No such file or directory
./forin1.sh: line 2: #basic: command not found
The next state is Alabama
The next state is Alaska
The next state is Arizona
The next state is Arkansas
The next state is California
The next state is Colorado
```



 
 
cat forin2.sh 
```bash
\#!/bin/bash
\# another example of how not to use the for command
for test in I don't know if this'll work
do
echo “word:$test”
done
 ```
 
$ chmod 755 forin2.sh
 
cat forin2.sh 
```bash
\#!/bin/bash
\# another example of how not to use the for command
for test in I don't know if this'll work
do
echo “word:$test”
done
```
$ chmod 755 forin2.sh
 
$ ./forin2.sh 
## OUTPUT
```
“word:I”
“word:dont know if thisll”
“word:work”
```

 
cat forin3.sh 
```bash
\#!/bin/bash
\# another example of how not to use the for command
for test in I don\'t know if "this'll" work
do
echo "word:$test"
done
```
$ ./forin3.sh 
word:I
word:don't
word:know
word:if
word:this'll
word:work

 
cat forin1.sh 
```bash
#!/bin/bash
# basic for command
for test in Alabama Alaska Arizona Arkansas California Colorado
do
echo The next state is $test
done
```
$ chmod 755 forin1.sh

## OUTPUT
```
The next state is Alabama
The next state is Alaska
The next state is Arizona
The next state is Arkansas
The next state is California
The next state is Colorado
```
cat forinfile.sh 
```bash
#!/bin/bash
# reading values from a file
file="cities"
for state in `cat $file`
do
echo "Visit beautiful $file“
done
```
$ chmod 777 forinfile.sh
$ cat cities
Hyderabad
Alampur
Basara
Warangal
Adilabad
Bhadrachalam
Khammam

## OUTPUT
```
Visit beautiful cities
Visit beautiful cities
Visit beautiful cities
Visit beautiful cities
Visit beautiful cities
Visit beautiful cities
Visit beautiful cities
```


cat forctype.sh 
```bash
#!/bin/bash
# testing the C-style for loop
for (( i=1; i <= 5; i++ ))
do
echo "The value of i is $i"
done
````
$ chmod 755 forctype.sh
$ ./forctype.sh 
## OUTPUT
```
The value is i is 1
The value is i is 2
The value is i is 3
The value is i is 4
The value is i is 5
```

cat forctype1.sh 
```bash
#!/bin/bash
# multiple variables
for (( a=1, b=5; a <= 5; a++, b-- ))
do
echo "$a - $b"
done
```
$ chmod 755 forctype.sh
$ ./forctype1.sh 
## OUTPUT
```
1 - 5
2 - 4
3 - 3
4 - 2
5 - 1
```

cat fornested1.sh 
```bash
#!/bin/bash
# nesting for loops
for (( a = 1; a <= 3; a++ ))
do
echo "Starting loop $a:"
for (( b = 1; b <= 3; b++ ))
do
echo " Inside loop: $b"
done
done
```
$ chmod 755 fornested1.sh
 
$ ./fornested1.sh 
 ## OUTPUT
 ```
 Starting loop 1:
 Inside loop: 1
 Inside loop: 2
 Inside loop: 3
Starting Loop 2:
 Inside loop: 1
 Inside loop: 2
 Inside loop: 3
Starting Loop 3:
 Inside loop: 1
 Inside loop: 2
 Inside loop: 3
```





 
cat forbreak.sh 
```bash
#!/bin/bash
# breaking out of a for loop
for var1 in 1 2 3 4 5
do
if [ $var1 -eq 3 ]
then
break
fi
echo "Iteration number: $var1"
done
echo "The for loop is completed“
```
## OUTPUT
```
Iteration number: 1
Iteration number: 2
The for loop is completed
```


$ chmod 755 forbreak.sh
 
$ ./forbreak.sh 
 
cat forbreak.sh 
```bash
#!/bin/bash
# breaking out of a for loop
for var1 in 1 2 3 4 5
do
if [ $var1 -eq 3 ]
then
continue
fi
echo "Iteration number: $var1"
done
echo "The for loop is completed“
```

 
$ chmod 755 forcontinue.sh
 
$ ./forcontinue.sh 
## OUTPUT
 cat exread.sh
 
```bash
#!/bin/bash
# testing the read command
echo -n "Enter your name: "
read name
echo "Hello $name, welcome to my program. "
 ```
 
$ chmod 755 exread.sh 
 
$ ./exread.sh 
## OUTPUT
```
Enter your name: Aaron
Hello Aaron, welcome to my program. 
```



 cat exread1.sh
```bash
#!/bin/bash
# testing the read command
read -p "Enter your name: " name
echo "Hello $name, welcome to my program. “
``` 
$ chmod 755 exread1.sh 

## OUTPUT
```
Enter your name: Aaron
Hello Aaron, welcome to my program. 
```



$ ./exread1.sh 
 
cat funcex.sh
```bash
#!/bin/bash
# trying to access script parameters inside a function
function func {
echo $[ $1 * $2 ]
}
if [ $# -eq 2 ]
then
value=`func $1 $2`
echo "The result is $value"
else
echo "Usage: badtest1 a b"
fi
```
## OUTPUT
 ./funcex.sh 
 ```
Usage: badtest1 a b
```
 
 ./funcex.sh 1 2
 ## OUTPUT
 ```
 The result is 2
 ```

 
cat argshift.sh
```bash
#!/bin/bash 
 while (( "$#" )); do 
  echo $1 
  shift 
done
```
$ chmod 777 argshift.sh

## OUTPUT
$ ./argshift.sh 1 2 3
```
1
2
3
 ```
 cat argshift1.sh
```bash
 #/bin/bash 
 # store arguments in a special array 
args=("$@") 
# get number of elements 
ELEMENTS=${#args[@]} 
 # echo each element in array  
# for loop 
for (( i=0;i<$ELEMENTS;i++)); do 
    echo ${args[${i}]} 
done
```
$ chmod 777 argshift.sh
## OUTPUT
$ ./argshift.sh 1 2 3`
```
1
2
3
```
 
cat argshift.sh
```bash
#!/bin/bash 
set -x 
while (( "$#" )); do 
  echo $1 
  shift 
done
set +x
```
## OUTPUT
```
 ./argshift.sh 1 2 3
 + ((  3  ))
+ echo 1 
1
+ shift
+ ((  2  ))
+ echo 2
2
+ shift
+ ((  1  ))
+ echo 3
+ shift
+ ((  0  ))
+ set +x
```

 
 
cat > nc.awk
```bash
BEGIN{}
{
print len=length($0),"\t",$0 
wordcount+=NF
chrcnt+=len
}
END {
print "total characters",chrcnt 
print "Number of Lines are",NR
print "No of Words count:",wordcount
}
 ```
cat>data.dat
```bash
bcdfghj
abcdfghj
bcdfghj
ebcdfghj
bcdfghj
ibcdfghj
bcdfghj
obcdfghj
bcdfghj
ubcdfghj
```
awk -f nc.awk data.dat
## OUTPUT 
```
7         bcdfghj
8	  abcdfghj
7	  bcdfghj
8  	  ebcdfghj
7	  bcdfghhj
8	  ibcdfghj
7	  bcdfghj
8	  obcdfghj
7	  bcdfghj
8 	  ubcdfghj
total characters 75
Number of Lines are 10
No of Words count: 1
```

 
cat > palindrome.sh
```bash
#num=545
echo "Enter the number"
read num
s=0
rev=""
temp=$num
while [ $num -gt 0 ]
do
	# Get Remainder
	s=$(( $num % 10 ))
	# Get next digit
	num=$(( $num / 10 ))
	# Store previous number and
	# current digit in reverse
	rev=$( echo ${rev}${s} )
done
if [ $temp -eq $rev ];
then
	echo "Number is palindrome"
else
	echo "Number is NOT palindrome"
fi
```
## OUTPUT 
```
locathost:~# chmod 755 palindrome.sh
locathost:~# ./palindrome.sh
Enter the number
21
Number is NOT palindrome

locathost:~# chmod 755 palindrome.sh
locathost:~# ./palindrome.sh
Enter the number
33
Number is palindrome
```



# RESULT:
The Commands are executed successfully.
