create table emrlocaf
(
  emloloca    varchar2(3) default ' ' not null,
  emlodesc    varchar2(25) default ' ' not null,
  emloscod    varchar2(3) default ' ' not null,
  emlomaxp    number(4,0) default 0 not null,
  emlotype    varchar2(1) default ' ' not null,
  emloactv    varchar2(1) default ' ' not null,
  emlossin    varchar2(1) default ' ' not null,
  emlocdat    varchar2(8) default ' ' not null,
  emloctim    varchar2(8) default ' ' not null,
  emlocuid    varchar2(10) default ' ' not null,
  emloudat    varchar2(8) default ' ' not null,
  emloutim    varchar2(8) default ' ' not null,
  emlouuid    varchar2(10) default ' ' not null,
  emloidat    varchar2(8) default ' ' not null,
  emloitim    varchar2(8) default ' ' not null,
  emloiuid    varchar2(10) default ' ' not null,
  emlospar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrloca1 primary key( 
emloloca)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index emrloca2 on emrlocaf
(
emlodesc,
emloloca
)
  tablespace pas_indx; 
create unique index emrloca3 on emrlocaf
(
emloscod,
emlotype,
emloloca
)
  tablespace pas_indx; 
