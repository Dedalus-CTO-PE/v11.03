create table allproaf
(
  alpodept    varchar2(3) default ' ' not null,
  alpoproc    varchar2(9) default ' ' not null,
  alpodesc    varchar2(50) default ' ' not null,
  alpoicdc    varchar2(9) default ' ' not null,
  alpoactv    varchar2(1) default ' ' not null,
  alpocdat    varchar2(8) default ' ' not null,
  alpoctim    varchar2(8) default ' ' not null,
  alpocuid    varchar2(10) default ' ' not null,
  alpoudat    varchar2(8) default ' ' not null,
  alpoutim    varchar2(8) default ' ' not null,
  alpouuid    varchar2(10) default ' ' not null,
  alpomhdp    varchar2(4) default ' ' not null,
  alpomhcp    varchar2(4) default ' ' not null,
  alpospar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allproa1 primary key( 
alpodept,
alpoproc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index allproa2 on allproaf
(
alpodept,
alpodesc,
alpoproc
)
  tablespace pas_indx; 
