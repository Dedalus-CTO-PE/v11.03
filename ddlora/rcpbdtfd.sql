create table rcpbdtaf
(
  rcbdtdat    varchar2(8) default ' ' not null,
  rcbdrecn    varchar2(12) default ' ' not null,
  rcbduniq    varchar2(3) default ' ' not null,
  rcbdmhos    varchar2(3) default ' ' not null,
  rcbdmdhs    varchar2(2) default ' ' not null,
  rcbdptyp    varchar2(1) default ' ' not null,
  rcbdpamt    number(14,2) default 0 not null,
  rcbdpayd    varchar2(50) default ' ' not null,
  rcbdchqn    varchar2(12) default ' ' not null,
  rcbddraw    varchar2(50) default ' ' not null,
  rcbdbank    varchar2(30) default ' ' not null,
  rcbdbrch    varchar2(30) default ' ' not null,
  rcbdcrdt    varchar2(3) default ' ' not null,
  rcbdstrf    varchar2(40) default ' ' not null,
  rcbdeftt    varchar2(1) default ' ' not null,
  rcbdcdat    varchar2(8) default ' ' not null,
  rcbdctim    varchar2(8) default ' ' not null,
  rcbdcuid    varchar2(10) default ' ' not null,
  rcbdudat    varchar2(8) default ' ' not null,
  rcbdutim    varchar2(8) default ' ' not null,
  rcbduuid    varchar2(10) default ' ' not null,
  rcbdpcod    varchar2(3) default ' ' not null,
  rcbdspar    varchar2(27) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint rcpbdta1 primary key( 
rcbdrecn,
rcbduniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index rcpbdta2 on rcpbdtaf
(
rcbdtdat,
rcbdrecn,
rcbduniq
)
  tablespace pas_indx; 
create unique index rcpbdta3 on rcpbdtaf
(
rcbdchqn,
rcbdrecn,
rcbduniq
)
  tablespace pas_indx; 
