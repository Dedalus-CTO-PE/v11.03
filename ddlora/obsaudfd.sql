create table obsaudaf
(
  obauurno    varchar2(8) default ' ' not null,
  obauvisn    varchar2(8) default ' ' not null,
  obaucorr    varchar2(4) default ' ' not null,
  obaudate    varchar2(8) default ' ' not null,
  obautime    varchar2(8) default ' ' not null,
  obauwebu    varchar2(10) default ' ' not null,
  obautype    varchar2(1) default ' ' not null,
  obaureas    varchar2(3) default ' ' not null,
  obauspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint obsauda1 primary key( 
obauurno,
obauvisn,
obaucorr,
obaudate,
obautime,
obauwebu,
obautype)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index obsauda2 on obsaudaf
(
obaudate,
obautime,
obauurno,
obauvisn,
obaucorr,
obauwebu,
obautype
)
  tablespace pas_indx; 
