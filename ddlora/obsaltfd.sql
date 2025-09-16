create table obsaltaf
(
  obalcod     varchar2(10) default ' ' not null,
  obaldsc     varchar2(35) default ' ' not null,
  obaltyp     varchar2(3) default ' ' not null,
  obalisl     varchar2(2) default ' ' not null,
  obaldsl     varchar2(2) default ' ' not null,
  obaldal     varchar2(1) default ' ' not null,
  obaldcd     varchar2(20) default ' ' not null,
  obalicd     varchar2(10) default ' ' not null,
  oballus     varchar2(10) default ' ' not null,
  oballdt     varchar2(8) default ' ' not null,
  oballtm     varchar2(8) default ' ' not null,
  obalrf1     varchar2(30) default ' ' not null,
  obalrf2     varchar2(30) default ' ' not null,
  obalyn1     varchar2(1) default ' ' not null,
  obalyn2     varchar2(1) default ' ' not null,
  obalspa     varchar2(12) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint obsalta1 primary key( 
obalcod)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index obsalta2 on obsaltaf
(
obaldsc,
obalcod
)
  tablespace pas_indx; 
create unique index obsalta3 on obsaltaf
(
obaltyp,
obaldsc,
obalcod
)
  tablespace pas_indx; 
