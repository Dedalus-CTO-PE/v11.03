create table patdschf
(
  durno       varchar2(8) default ' ' not null,
  ddadmno     varchar2(8) default ' ' not null,
  ddate       varchar2(8) default ' ' not null,
  dtime       varchar2(8) default ' ' not null,
  dstat       varchar2(3) default ' ' not null,
  ddest       varchar2(3) default ' ' not null,
  ddiag       varchar2(50) default ' ' not null,
  ddiag2      varchar2(50) default ' ' not null,
  dusd1       varchar2(3) default ' ' not null,
  dusd2       varchar2(3) default ' ' not null,
  dusd3       varchar2(3) default ' ' not null,
  dusd4       varchar2(3) default ' ' not null,
  dusd5       varchar2(3) default ' ' not null,
  dfmbs       varchar2(9) default ' ' not null,
  ptdsdmdc    varchar2(4) default ' ' not null,
  ptdsddrg    varchar2(4) default ' ' not null,
  dwlreasn    varchar2(3) default ' ' not null,
  ptdssidx    varchar2(1) default ' ' not null,
  ptdsvogu    varchar2(3) default ' ' not null,
  ptdsoper    varchar2(4) default ' ' not null,
  ptdsuyn1    number(1,0) default 0 not null,
  ptdsuyn2    number(1,0) default 0 not null,
  ptdsuyn3    number(1,0) default 0 not null,
  ptdsuyn4    number(1,0) default 0 not null,
  ptdsdwrd    varchar2(3) default ' ' not null,
  ptdsdlos    number(4,0) default 0 not null,
  ptdssref    varchar2(4) default ' ' not null,
  ptdspald    varchar2(3) default ' ' not null,
  ptdsdpmn    varchar2(3) default ' ' not null,
  ptdslsdn    varchar2(8) default ' ' not null,
  ptdsclgp    varchar2(12) default ' ' not null,
  dspare      varchar2(54) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patdsch1 primary key( 
ddadmno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patdsch2 on patdschf
(
ddate,
ddadmno
)
  tablespace pas_indx; 
create unique index patdsch3 on patdschf
(
durno,
ddate,
ddadmno
)
  tablespace pas_indx; 
