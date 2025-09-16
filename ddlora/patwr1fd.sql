create table patwr1af
(
  wward       varchar2(3) default ' ' not null,
  wbed        varchar2(3) default ' ' not null,
  wbdesc      varchar2(20) default ' ' not null,
  dwadmno     varchar2(8) default ' ' not null,
  wspare4     varchar2(4) default ' ' not null,
  wbline      number(2,0) default 0 not null,
  wrtype      varchar2(3) default ' ' not null,
  wefrbt      varchar2(3) default ' ' not null,
  wnbeds      number(3,0) default 0 not null,
  whcssub     number(3,0) default 0 not null,
  wserv       varchar2(3) default ' ' not null,
  wplur       number(1,0) default 0 not null,
  winput      number(1,0) default 0 not null,
  woccbed     number(3,0) default 0 not null,
  wclass      varchar2(3) default ' ' not null,
  dwstby      varchar2(8) default ' ' not null,
  wactive     number(1,0) default 0 not null,
  ptwdhosn    varchar2(3) default ' ' not null,
  ptwddnin    number(1,0) default 0 not null,
  ptwdiage    varchar2(3) default ' ' not null,
  ptwdicre    varchar2(3) default ' ' not null,
  ptwdsex     varchar2(1) default ' ' not null,
  ptwdlocn    varchar2(4) default ' ' not null,
  ptwdgldg    varchar2(14) default ' ' not null,
  ptwdnsta    varchar2(3) default ' ' not null,
  ptwddosa    varchar2(1) default ' ' not null,
  ptwdfvdw    varchar2(1) default ' ' not null,
  ptwdbdst    varchar2(1) default ' ' not null,
  ptwdrbsc    varchar2(3) default ' ' not null,
  ptwdhkst    varchar2(3) default ' ' not null,
  ptwdifst    varchar2(3) default ' ' not null,
  ptwdcrdt    varchar2(8) default ' ' not null,
  ptwdcrtm    varchar2(8) default ' ' not null,
  ptwdcrid    varchar2(10) default ' ' not null,
  ptwdupdt    varchar2(8) default ' ' not null,
  ptwduptm    varchar2(8) default ' ' not null,
  ptwdupid    varchar2(10) default ' ' not null,
  ptwdcomm    varchar2(30) default ' ' not null,
  ptwddfvs    varchar2(1) default ' ' not null,
  ptwddfph    varchar2(1) default ' ' not null,
  ptwdcfcd    varchar2(6) default ' ' not null,
  ptwdndbd    varchar2(2) default ' ' not null,
  ptwddost    varchar2(2) default ' ' not null,
  ptwddoet    varchar2(2) default ' ' not null,
  ptwdsdes    varchar2(10) default ' ' not null,
  wextn       varchar2(20) default ' ' not null,
  ptwdspar    varchar2(53) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patwr1a1 primary key( 
wward,
wbed)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patwr1a2 on patwr1af
(
dwadmno,
wward,
wbed
)
  tablespace pas_indx; 
create unique index patwr1a3 on patwr1af
(
wbed,
wward
)
  tablespace pas_indx; 
create unique index patwr1a4 on patwr1af
(
dwstby,
wward,
wbed
)
  tablespace pas_indx; 
create unique index patwr1a5 on patwr1af
(
ptwdhosn,
wward,
wbed
)
  tablespace pas_indx; 
create unique index patwr1a6 on patwr1af
(
ptwdhosn,
wbed,
wward
)
  tablespace pas_indx; 
create unique index patwr1a7 on patwr1af
(
wbed,
ptwdhosn,
wbdesc,
wward
)
  tablespace pas_indx; 
create unique index patwr1a8 on patwr1af
(
wward,
ptwdsdes,
wbed
)
  tablespace pas_indx; 
