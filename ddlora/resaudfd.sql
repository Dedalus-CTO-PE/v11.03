create table resaudaf
(
  reaurdt     varchar2(8) default ' ' not null,
  reaurtm     varchar2(5) default ' ' not null,
  reaurun     varchar2(4) default ' ' not null,
  reausdt     varchar2(8) default ' ' not null,
  reaustm     varchar2(5) default ' ' not null,
  reauuid     varchar2(10) default ' ' not null,
  reaumrk     varchar2(1) default ' ' not null,
  reaurst     varchar2(2) default ' ' not null,
  reauacd     varchar2(3) default ' ' not null,
  reauacm     varchar2(50) default ' ' not null,
  reauspa     varchar2(3) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint resauda1 primary key( 
reaurdt,
reaurtm,
reaurun,
reausdt,
reaustm,
reauuid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
