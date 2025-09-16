create table pmssrmaf
(
  pmsrmvar    varchar2(10) default ' ' not null,
  pmsrinbs    varchar2(50) default ' ' not null,
  pmsrmval    varchar2(1) default ' ' not null,
  pmsractv    varchar2(1) default ' ' not null,
  pmsrwebc    varchar2(10) default ' ' not null,
  pmsrcdte    varchar2(8) default ' ' not null,
  pmsrctim    varchar2(8) default ' ' not null,
  pmsrwebu    varchar2(10) default ' ' not null,
  pmsrudte    varchar2(8) default ' ' not null,
  pmsrutim    varchar2(8) default ' ' not null,
  pmsrspar    varchar2(49) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmssrma1 primary key( 
pmsrmvar,
pmsrinbs)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmssrma2 on pmssrmaf
(
pmsrinbs,
pmsrmvar
)
  tablespace pas_indx; 
