create table sinaudwa
(
  siwaaudd    varchar2(8) default ' ' not null,
  siwaaudt    varchar2(8) default ' ' not null,
  siwaaudp    varchar2(2) default ' ' not null,
  siwaaudr    varchar2(1) default ' ' not null,
  siwaauds    number(1,0) default 0 not null,
  siwaaudo    varchar2(4) default ' ' not null,
  siwawar     varchar2(5) default ' ' not null,
  siwades     varchar2(40) default ' ' not null,
  siwatyp     number(1,0) default 0 not null,
  siwacty     number(1,0) default 0 not null,
  siwapty     number(1,0) default 0 not null,
  siwaled     varchar2(2) default ' ' not null,
  siwaiacc    varchar2(12) default ' ' not null,
  siwapacc    varchar2(12) default ' ' not null,
  siwadiss    varchar2(5) default ' ' not null,
  siwaresp    varchar2(4) default ' ' not null,
  siwaur1     varchar2(15) default ' ' not null,
  siwamuac    varchar2(12) default ' ' not null,
  siwanat     number(1,0) default 0 not null,
  siwaur2     varchar2(1) default ' ' not null,
  siwaud1     varchar2(8) default ' ' not null,
  siwaud2     varchar2(8) default ' ' not null,
  siwauc1     varchar2(3) default ' ' not null,
  siwauc2     varchar2(3) default ' ' not null,
  siwauy1     varchar2(1) default ' ' not null,
  siwauy2     varchar2(1) default ' ' not null,
  siwapic     number(1,0) default 0 not null,
  siwapa1     number(1,0) default 0 not null,
  siwapa2     number(1,0) default 0 not null,
  siwapa3     number(1,0) default 0 not null,
  siwapa4     number(1,0) default 0 not null,
  siwanpo     varchar2(7) default ' ' not null,
  siwasta     varchar2(12) default ' ' not null,
  siwapsh     varchar2(1) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index sinaudwa on sinaudwa
(
siwaaudd,
siwaaudt,
siwaaudp,
siwaaudr
)
tablespace pas_indx; 
create table sinwaraf
(
  siwawar     varchar2(5) default ' ' not null,
  siwades     varchar2(40) default ' ' not null,
  siwatyp     number(1,0) default 0 not null,
  siwacty     number(1,0) default 0 not null,
  siwapty     number(1,0) default 0 not null,
  siwaled     varchar2(2) default ' ' not null,
  siwaiacc    varchar2(12) default ' ' not null,
  siwapacc    varchar2(12) default ' ' not null,
  siwadiss    varchar2(5) default ' ' not null,
  siwaresp    varchar2(4) default ' ' not null,
  siwaur1     varchar2(15) default ' ' not null,
  siwamuac    varchar2(12) default ' ' not null,
  siwanat     number(1,0) default 0 not null,
  siwaur2     varchar2(1) default ' ' not null,
  siwaud1     varchar2(8) default ' ' not null,
  siwaud2     varchar2(8) default ' ' not null,
  siwauc1     varchar2(3) default ' ' not null,
  siwauc2     varchar2(3) default ' ' not null,
  siwauy1     varchar2(1) default ' ' not null,
  siwauy2     varchar2(1) default ' ' not null,
  siwapic     number(1,0) default 0 not null,
  siwapa1     number(1,0) default 0 not null,
  siwapa2     number(1,0) default 0 not null,
  siwapa3     number(1,0) default 0 not null,
  siwapa4     number(1,0) default 0 not null,
  siwanpo     varchar2(7) default ' ' not null,
  siwasta     varchar2(12) default ' ' not null,
  siwapsh     varchar2(1) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinwara1 primary key( 
siwawar)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinwara2 on sinwaraf
(
siwades,
siwawar
)
  tablespace pas_indx; 
