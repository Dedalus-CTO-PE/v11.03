create table patwr1af
(
  wward       char(3) default ' ' not null,
  wbed        char(3) default ' ' not null,
  wbdesc      char(20) default ' ' not null,
  dwadmno     char(8) default ' ' not null,
  wspare4     char(4) default ' ' not null,
  wbline      decimal(2,0) default 0 not null,
  wrtype      char(3) default ' ' not null,
  wefrbt      char(3) default ' ' not null,
  wnbeds      decimal(3,0) default 0 not null,
  whcssub     decimal(3,0) default 0 not null,
  wserv       char(3) default ' ' not null,
  wplur       decimal(1,0) default 0 not null,
  winput      decimal(1,0) default 0 not null,
  woccbed     decimal(3,0) default 0 not null,
  wclass      char(3) default ' ' not null,
  dwstby      char(8) default ' ' not null,
  wactive     decimal(1,0) default 0 not null,
  ptwdhosn    char(3) default ' ' not null,
  ptwddnin    decimal(1,0) default 0 not null,
  ptwdiage    char(3) default ' ' not null,
  ptwdicre    char(3) default ' ' not null,
  ptwdsex     char(1) default ' ' not null,
  ptwdlocn    char(4) default ' ' not null,
  ptwdgldg    char(14) default ' ' not null,
  ptwdnsta    char(3) default ' ' not null,
  ptwddosa    char(1) default ' ' not null,
  ptwdfvdw    char(1) default ' ' not null,
  ptwdbdst    char(1) default ' ' not null,
  ptwdrbsc    char(3) default ' ' not null,
  ptwdhkst    char(3) default ' ' not null,
  ptwdifst    char(3) default ' ' not null,
  ptwdcrdt    char(8) default ' ' not null,
  ptwdcrtm    char(8) default ' ' not null,
  ptwdcrid    char(10) default ' ' not null,
  ptwdupdt    char(8) default ' ' not null,
  ptwduptm    char(8) default ' ' not null,
  ptwdupid    char(10) default ' ' not null,
  ptwdcomm    char(30) default ' ' not null,
  ptwddfvs    char(1) default ' ' not null,
  ptwddfph    char(1) default ' ' not null,
  ptwdcfcd    char(6) default ' ' not null,
  ptwdndbd    char(2) default ' ' not null,
  ptwddost    char(2) default ' ' not null,
  ptwddoet    char(2) default ' ' not null,
  ptwdsdes    char(10) default ' ' not null,
  wextn       char(20) default ' ' not null,
  ptwdspar    char(53) default ' ' not null,
  lf          char(1)
);
create unique index patwr1a1 on patwr1af
(
wward,
wbed
);
create unique index patwr1a2 on patwr1af
(
dwadmno,
wward,
wbed
);
create unique index patwr1a3 on patwr1af
(
wbed,
wward
);
create unique index patwr1a4 on patwr1af
(
dwstby,
wward,
wbed
);
create unique index patwr1a5 on patwr1af
(
ptwdhosn,
wward,
wbed
);
create unique index patwr1a6 on patwr1af
(
ptwdhosn,
wbed,
wward
);
create unique index patwr1a7 on patwr1af
(
wbed,
ptwdhosn,
wbdesc,
wward
);
create unique index patwr1a8 on patwr1af
(
wward,
ptwdsdes,
wbed
);
revoke all on patwr1af from public ; 
grant select on patwr1af to public ; 
