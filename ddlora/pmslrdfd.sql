create table pmslrdaf
(
  pmlrvisn    varchar2(8) default ' ' not null,
  pmlrdate    varchar2(8) default ' ' not null,
  pmlrtime    varchar2(8) default ' ' not null,
  pmlrward    varchar2(3) default ' ' not null,
  pmlrlbed    varchar2(3) default ' ' not null,
  pmlrrecs    varchar2(1) default ' ' not null,
  pmlrcoun    varchar2(3) default ' ' not null,
  pmlractv    varchar2(1) default ' ' not null,
  pmlrlrcn    varchar2(3) default ' ' not null,
  pmlrtlev    varchar2(3) default ' ' not null,
  pmlrexrd    varchar2(8) default ' ' not null,
  pmlrexrt    varchar2(8) default ' ' not null,
  pmlrdest    varchar2(100) default ' ' not null,
  pmlrrisk    varchar2(3) default ' ' not null,
  pmlrlarr    varchar2(3) default ' ' not null,
  pmlrudc1    varchar2(3) default ' ' not null,
  pmlrudc2    varchar2(3) default ' ' not null,
  pmlrudc3    varchar2(3) default ' ' not null,
  pmlrudc4    varchar2(3) default ' ' not null,
  pmlrmedg    varchar2(1) default ' ' not null,
  pmlrbags    varchar2(1) default ' ' not null,
  pmlrbals    varchar2(1) default ' ' not null,
  pmlrudss    varchar2(1) default ' ' not null,
  pmlrudy1    varchar2(1) default ' ' not null,
  pmlrudy2    varchar2(1) default ' ' not null,
  pmlrudy3    varchar2(1) default ' ' not null,
  pmlrval1    varchar2(10) default ' ' not null,
  pmlrval2    varchar2(10) default ' ' not null,
  pmlrval3    varchar2(10) default ' ' not null,
  pmlrcarn    varchar2(100) default ' ' not null,
  pmlrcarc    varchar2(20) default ' ' not null,
  pmlrcart    varchar2(3) default ' ' not null,
  pmlrccnt    varchar2(3) default ' ' not null,
  pmlrccon    varchar2(1) default ' ' not null,
  pmlrtxt1    varchar2(100) default ' ' not null,
  pmlrtxt2    varchar2(100) default ' ' not null,
  pmlrtxt3    varchar2(100) default ' ' not null,
  pmlrremn    varchar2(2) default ' ' not null,
  pmlrwebc    varchar2(10) default ' ' not null,
  pmlrcdat    varchar2(8) default ' ' not null,
  pmlrctim    varchar2(8) default ' ' not null,
  pmlrwebd    varchar2(10) default ' ' not null,
  pmlrdatd    varchar2(8) default ' ' not null,
  pmlrtimd    varchar2(8) default ' ' not null,
  pmlrwebu    varchar2(10) default ' ' not null,
  pmlrdatu    varchar2(8) default ' ' not null,
  pmlrtimu    varchar2(8) default ' ' not null,
  pmlrspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmslrda1 primary key( 
pmlrvisn,
pmlrdate,
pmlrtime,
pmlrcoun)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmslrda2 on pmslrdaf
(
pmlrvisn,
pmlrdate,
pmlrtime,
pmlrrecs,
pmlrcoun
)
  tablespace pas_indx; 
create unique index pmslrda3 on pmslrdaf
(
pmlrrecs,
pmlrvisn,
pmlrdate,
pmlrtime,
pmlrcoun
)
  tablespace pas_indx; 
create unique index pmslrda4 on pmslrdaf
(
pmlrdate,
pmlrtime,
pmlrrecs,
pmlrvisn,
pmlrcoun
)
  tablespace pas_indx; 
