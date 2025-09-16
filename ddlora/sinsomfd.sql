create table sinsomaf
(
  siomsid     varchar2(3) default ' ' not null,
  siomdes     varchar2(40) default ' ' not null,
  siomorg     varchar2(3) default ' ' not null,
  siomdel     varchar2(1) default ' ' not null,
  siommes     varchar2(3) default ' ' not null,
  siomper     number(5,2) default 0 not null,
  siomwar     varchar2(5) default ' ' not null,
  siominc     number(1,0) default 0 not null,
  siomfco     varchar2(6) default ' ' not null,
  siomtco     varchar2(6) default ' ' not null,
  siomfpg     varchar2(5) default ' ' not null,
  siomtpg     varchar2(5) default ' ' not null,
  siomfsu     varchar2(5) default ' ' not null,
  siomtsu     varchar2(5) default ' ' not null,
  siomuid     varchar2(4) default ' ' not null,
  siompor     varchar2(2) default ' ' not null,
  siomtim     varchar2(8) default ' ' not null,
  siomdat     varchar2(8) default ' ' not null,
  siomsoq     varchar2(1) default ' ' not null,
  siomfia     varchar2(3) default ' ' not null,
  siomtia     varchar2(3) default ' ' not null,
  siommdp     varchar2(3) default ' ' not null,
  siomspa     varchar2(17) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinsoma1 primary key( 
siomsid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
