create table patvenaf
(
  ptvevisn    varchar2(8) default ' ' not null,
  ptvevtyp    varchar2(3) default ' ' not null,
  ptvesdat    varchar2(8) default ' ' not null,
  ptvestim    varchar2(8) default ' ' not null,
  ptveedat    varchar2(8) default ' ' not null,
  ptveetim    varchar2(8) default ' ' not null,
  ptvehour    number(7,2) default 0 not null,
  ptveicus    varchar2(3) default ' ' not null,
  ptveisit    varchar2(3) default ' ' not null,
  ptvespar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patvena1 primary key( 
ptvevisn,
ptvevtyp,
ptvesdat,
ptvestim)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
