create table rcpsrtaf
(
  rcsrrecn    varchar2(12) default ' ' not null,
  rcsrtcnt    varchar2(5) default ' ' not null,
  rcsrtdat    varchar2(8) default ' ' not null,
  rcsrrect    varchar2(1) default ' ' not null,
  rcsrregi    varchar2(3) default ' ' not null,
  rcsrinvn    varchar2(12) default ' ' not null,
  rcsrvist    varchar2(8) default ' ' not null,
  rcsrname    varchar2(50) default ' ' not null,
  rcsradd1    varchar2(35) default ' ' not null,
  rcsradd2    varchar2(35) default ' ' not null,
  rcsradd3    varchar2(35) default ' ' not null,
  rcsradd4    varchar2(35) default ' ' not null,
  rcsrpcod    varchar2(8) default ' ' not null,
  rcsrsflg    varchar2(1) default ' ' not null,
  rcsrrefr    varchar2(17) default ' ' not null,
  rcsramnt    number(14,2) default 0 not null,
  rcsraldt    varchar2(8) default ' ' not null,
  rcsrcdat    varchar2(8) default ' ' not null,
  rcsrctim    varchar2(8) default ' ' not null,
  rcsrcuid    varchar2(10) default ' ' not null,
  rcsrudat    varchar2(8) default ' ' not null,
  rcsrutim    varchar2(8) default ' ' not null,
  rcsruuid    varchar2(10) default ' ' not null,
  rcsrspar    varchar2(28) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint rcpsrta1 primary key( 
rcsrrecn,
rcsrtcnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index rcpsrta2 on rcpsrtaf
(
rcsrtdat,
rcsrrecn,
rcsrtcnt
)
  tablespace pas_indx; 
create unique index rcpsrta3 on rcpsrtaf
(
rcsraldt,
rcsrrecn,
rcsrtcnt
)
  tablespace pas_indx; 
